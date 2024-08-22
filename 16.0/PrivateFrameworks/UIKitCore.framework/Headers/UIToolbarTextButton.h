// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITOOLBARTEXTBUTTON_H
#define UITOOLBARTEXTBUTTON_H

@class NSString, NSSet;


#import "UIToolbarButton.h"

@interface UIToolbarTextButton : UIToolbarButton {
    NSString *_title;
    NSString *_pressedTitle;
    NSSet *_possibleTitles;
}




-(id)initWithTitle:(id)arg0 pressedTitle:(id)arg1 withFont:(id)arg2 withBarStyle:(NSInteger)arg3 withStyle:(NSInteger)arg4 withTitleWidth:(CGFloat)arg5 possibleTitles:(id)arg6 withToolbarTintColor:(id)arg7 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setPressed:(BOOL)arg0 ;
-(void)_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif