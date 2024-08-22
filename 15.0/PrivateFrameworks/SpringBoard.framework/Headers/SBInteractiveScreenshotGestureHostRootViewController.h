// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTUREHOSTROOTVIEWCONTROLLER_H
#define SBINTERACTIVESCREENSHOTGESTUREHOSTROOTVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, _UILayerHostView, UIScreen, NSString;
@protocol BSInvalidatable;



@interface SBInteractiveScreenshotGestureHostRootViewController : SBFTouchPassThroughViewController <BSInvalidatable>

 {
    unsigned int _hostingContextID;
    int _hostingPid;
    _UILayerHostView *_layerHostView;
    UIScreen *_screen;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithScreen:(id)arg0 ;
-(void)_reloadLayerHostView;
-(void)invalidate;
-(void)setHostingContextID:(unsigned int)arg0 pid:(int)arg1 ;
-(void)viewDidLoad;


@end


#endif