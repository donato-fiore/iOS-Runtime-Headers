// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDPOPOVERCONTAINER_H
#define UIKEYBOARDPOPOVERCONTAINER_H

@class NSLayoutConstraint;

#import <Foundation/Foundation.h>

#import "_UIKeyboardPopover.h"
#import "UIKBVisualEffectView.h"
#import "_UIPopoverView.h"
#import "_UIKeyboardPopoverAffordance.h"
#import "UIView.h"

@interface UIKeyboardPopoverContainer : NSObject {
    _UIKeyboardPopover *_popoverContainerView;
    UIKBVisualEffectView *_backdrop;
    _UIPopoverView *_popover;
    _UIKeyboardPopoverAffordance *_affordance;
    CGRect _targetFull;
    CGFloat _arrowOffset;
    NSUInteger _direction;
    NSLayoutConstraint *_keyboardAreaHeight;
}


@property (readonly, retain) UIView *affordance;
@property (readonly) CGRect frame;


+(CGFloat)arrowHeight;
+(CGFloat)borderWidth;
+(CGFloat)cornerRadius;
+(CGFloat)dragAreaHeight;
+(CGFloat)edgeOffset;
+(CGFloat)extraWidth;
+(CGFloat)pillCornerRadius;
+(CGFloat)pillDistanceToEdge;
+(CGFloat)shadowOpacity;
+(CGFloat)shadowRadius;
+(id)borderColor;
+(id)pillColor;
+(id)propertiesForSpecificKeyboardFrame:(struct CGRect )arg0 onScreenSize:(struct CGSize )arg1 ;
+(id)propertiesForTargetRect:(struct CGRect )arg0 withHeight:(CGFloat)arg1 onScreenSize:(struct CGSize )arg2 ;
+(id)shadowColor;
+(struct CGRect )frameAtOffset:(struct CGPoint )arg0 keyboardSize:(struct CGSize )arg1 screenSize:(struct CGSize )arg2 ;
+(struct CGSize )pillSize;
+(struct CGSize )shadowOffset;
+(struct UIEdgeInsets )contentInsets;
-(id)initWithView:(id)arg0 usingBackdropStyle:(NSInteger)arg1 ;
-(void)_updateKeyboardLayoutGuideForPopover:(struct CGRect )arg0 ;
-(void)applyProperties:(id)arg0 ;
-(void)invalidate;
-(void)updateBackdropStyle:(NSInteger)arg0 ;


@end


#endif