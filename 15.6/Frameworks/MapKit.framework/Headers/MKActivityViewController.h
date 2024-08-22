// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKACTIVITYVIEWCONTROLLER_H
#define MKACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSString;
@protocol UIActivityViewControllerAirDropDelegate, MKActivityViewControllerDelegate;



@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate>



@property (weak, nonatomic) NSObject<MKActivityViewControllerDelegate> *activityControllerDelegate; // ivar: _activityControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_activityHandler:(SEL)arg0 ;
-(id)_completionHandler:(SEL)arg0 ;
-(id)initWithActivityItems:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 contact:(id)arg1 applicationActivities:(id)arg2 ;
-(id)initWithMapItem:(id)arg0 contact:(id)arg1 applicationActivities:(id)arg2 activityProviderDelegate:(id)arg3 ;
-(id)initWithShareItem:(id)arg0 ;
-(id)initWithSource:(id)arg0 destination:(id)arg1 composedRoute:(id)arg2 applicationActivities:(id)arg3 routeProviderDelegate:(id)arg4 ;


@end


#endif