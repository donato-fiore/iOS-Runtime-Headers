// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUAIRPLAYACTIVITY_H
#define PUAIRPLAYACTIVITY_H

@class PXActivity, NSString;
@protocol PHAirPlayControllerRouteObserver;



@interface PUAirPlayActivity : PXActivity <PHAirPlayControllerRouteObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRouteAvailable) BOOL routeAvailable;
@property (readonly) Class superclass;


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)init;
-(void)_registerForAirPlayNotifications;
-(void)_unregisterForAirPlayNotifications;
-(void)airPlayControllerRouteAvailabilityChanged:(id)arg0 ;
-(void)dealloc;
-(void)performActivity;
-(void)tearDownForCompletion;


@end


#endif