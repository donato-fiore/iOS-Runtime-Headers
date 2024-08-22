// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONSCENEOVERLAYBASICWRAPPERVIEWCONTROLLER_H
#define SBDEVICEAPPLICATIONSCENEOVERLAYBASICWRAPPERVIEWCONTROLLER_H

@class UIViewController, UIView<SBDeviceApplicationSceneOverlayView>;
@protocol SBDeviceApplicationSceneOverlayViewController;


#import "SBDeviceApplicationSceneOverlayBasicWrapperView.h"

@interface SBDeviceApplicationSceneOverlayBasicWrapperViewController : UIViewController <SBDeviceApplicationSceneOverlayViewController>

 {
    UIViewController *_contentViewController;
    SBDeviceApplicationSceneOverlayBasicWrapperView *_contentWrapperView;
}


@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;


-(id)initWithContentViewController:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif