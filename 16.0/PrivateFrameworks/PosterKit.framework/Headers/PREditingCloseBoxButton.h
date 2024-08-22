// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGCLOSEBOXBUTTON_H
#define PREDITINGCLOSEBOXBUTTON_H

@class UITapGestureRecognizer, NSString;
@protocol UIPointerInteractionDelegate;


#import "PREditingTitledButton.h"

@interface PREditingCloseBoxButton : PREditingTitledButton <UIPointerInteractionDelegate>



@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer; // ivar: _actionTapGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets hitTestPadding;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )backgroundInsets;


@end


#endif