// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12PHOTOSUIAPPS21PUXSTORYAIRPLAYHELPER_H
#define _TTC12PHOTOSUIAPPS21PUXSTORYAIRPLAYHELPER_H

@protocol PHAirPlayControllerContentProvider, UIAdaptivePresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps21PUXStoryAirPlayHelper : NSObject <PHAirPlayControllerContentProvider, UIAdaptivePresentationControllerDelegate>

 {
    ? pickerViewController;
    ? presentingViewController;
    ? airPlayContainerViewController;
    ? airPlayStoryViewController;
}




-(id)contentViewControllerForAirPlayController:(id)arg0 ;
-(id)init;
-(void)airPlayControllerScreenAvailabilityChanged:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif