// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDEBUGGINGINFORMATIONOVERLAY_H
#define UIDEBUGGINGINFORMATIONOVERLAY_H

@class NSMutableArray;
@protocol UISplitViewControllerDelegate;


#import "UIWindow.h"
#import "UIEvent.h"
#import "UIDebuggingInformationOverlayViewController.h"
#import "UIDebuggingInformationRootTableViewController.h"

@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate>



@property (nonatomic) BOOL checkingTouches; // ivar: _checkingTouches
@property (nonatomic) CGPoint drawingOrigin; // ivar: _drawingOrigin
@property (retain, nonatomic) UIWindow *inspectedWindow; // ivar: _inspectedWindow
@property (nonatomic) BOOL isFullscreen; // ivar: _isFullscreen
@property (retain, nonatomic) UIEvent *lastTouch; // ivar: _lastTouch
@property (readonly, nonatomic) UIDebuggingInformationOverlayViewController *overlayViewController;
@property (retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) BOOL touchCaptureEnabled; // ivar: _touchCaptureEnabled
@property (retain, nonatomic) NSMutableArray *touchObservers; // ivar: _touchObservers


+(id)overlay;
+(void)prepareDebuggingOverlay;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setHidden:(BOOL)arg0 ;
-(void)toggleFullscreen;
-(void)toggleVisibility;


@end


#endif