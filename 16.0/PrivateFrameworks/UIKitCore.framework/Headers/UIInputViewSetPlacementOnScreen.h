// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWSETPLACEMENTONSCREEN_H
#define UIINPUTVIEWSETPLACEMENTONSCREEN_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacement.h"

@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)inputViewWillAppear;
-(BOOL)showsInputOrAssistantViews;
-(BOOL)showsInputViews;
-(BOOL)showsKeyboard;


@end


#endif