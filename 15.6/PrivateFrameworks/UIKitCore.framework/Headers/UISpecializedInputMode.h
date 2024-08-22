// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISPECIALIZEDINPUTMODE_H
#define UISPECIALIZEDINPUTMODE_H



#import "UIKeyboardInputMode.h"

@interface UISpecializedInputMode : UIKeyboardInputMode

@property (retain, nonatomic) Class viewControllerClass; // ivar: _viewControllerClass


-(BOOL)includeBarHeight;
-(BOOL)isSpecializedInputMode;
-(BOOL)showSWLayoutWithHWKeyboard;
-(id)hardwareLayout;
-(void)dealloc;


@end


#endif