// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEAPPLICATIONREMOTETRANSIENTOVERLAYCONTAINERVIEWCONTROLLER_H
#define SBDEVICEAPPLICATIONREMOTETRANSIENTOVERLAYCONTAINERVIEWCONTROLLER_H

@class UIViewController;


#import "SBDeviceApplicationRemoteTransientOverlayViewProvider.h"

@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController {
    SBDeviceApplicationRemoteTransientOverlayViewProvider *_viewProvider;
}




-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithViewProvider:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif