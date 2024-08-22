// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOGWINDOWCONTROLLER_H
#define SBLOGWINDOWCONTROLLER_H

@class UIViewController, UITextView;


#import "SBWindow.h"

@interface SBLogWindowController : UIViewController

@property (retain, nonatomic) UITextView *logTextView; // ivar: _logTextView
@property (retain, nonatomic) SBWindow *logWindow; // ivar: _logWindow


+(id)sharedInstance;
+(id)sharedInstanceIfAvailable;
+(id)windowScene;
+(void)setWindowScene:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_createAndUpdateWindowIfNecessary;
-(void)hide;
-(void)show;


@end


#endif