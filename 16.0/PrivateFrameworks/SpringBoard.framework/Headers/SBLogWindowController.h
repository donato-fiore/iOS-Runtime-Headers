// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOGWINDOWCONTROLLER_H
#define SBLOGWINDOWCONTROLLER_H

@class UIViewController, UITextView, UIWindowScene;


#import "SBWindow.h"

@interface SBLogWindowController : UIViewController

@property (retain, nonatomic) UITextView *logTextView; // ivar: _logTextView
@property (retain, nonatomic) SBWindow *logWindow; // ivar: _logWindow
@property (weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


+(id)sharedInstance;
+(id)sharedInstanceIfAvailable;
-(void)_createAndUpdateWindowIfNecessary;
-(void)hide;
-(void)show;


@end


#endif