// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOGWINDOWCONTROLLER_H
#define SBLOGWINDOWCONTROLLER_H

@class UIViewController, UITextView;


#import "SBMainScreenActiveInterfaceOrientationWindow.h"

@interface SBLogWindowController : UIViewController

@property (retain, nonatomic) UITextView *logTextView; // ivar: _logTextView
@property (retain, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *logWindow; // ivar: _logWindow


+(id)sharedInstance;
+(id)sharedInstanceIfAvailable;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)hide;
-(void)show;


@end


#endif