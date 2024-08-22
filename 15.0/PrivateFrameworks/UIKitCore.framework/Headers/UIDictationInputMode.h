// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDICTATIONINPUTMODE_H
#define UIDICTATIONINPUTMODE_H



#import "UISpecializedInputMode.h"
#import "UIKeyboardInputMode.h"
#import "UITouch.h"

@interface UIDictationInputMode : UISpecializedInputMode

@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // ivar: _currentInputModeForDictation
@property (retain, nonatomic) UITouch *triggeringTouch; // ivar: _triggeringTouch


+(BOOL)currentInputModeSupportsDictation;
-(BOOL)includeBarHeight;
-(Class)viewControllerClass;
-(void)dealloc;


@end


#endif