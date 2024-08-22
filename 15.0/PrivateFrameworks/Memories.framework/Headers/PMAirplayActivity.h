// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMAIRPLAYACTIVITY_H
#define PMAIRPLAYACTIVITY_H

@class UIActivity, UIBarButtonItem, NSString, UIViewController;
@protocol PHAirPlayControllerRouteObserver, PMAirplayActivityDelegate;



@interface PMAirplayActivity : UIActivity <PHAirPlayControllerRouteObserver>



@property (nonatomic) BOOL _routeAvailable; // ivar: __routeAvailable
@property (weak, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMAirplayActivityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
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