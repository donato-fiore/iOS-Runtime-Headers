// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGSTANDALONELABELVIEW_H
#define PREDITINGSTANDALONELABELVIEW_H

@class UIView, UILabel, NSString;


#import "PREditingStandaloneLabelViewInteractiveTransition.h"

@interface PREditingStandaloneLabelView : UIView

@property (retain, nonatomic) PREditingStandaloneLabelViewInteractiveTransition *currentTransition; // ivar: _currentTransition
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)newLabel;
-(id)beginInteractiveTransitionToText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)interactiveTransition:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)interactiveTransition:(id)arg0 didUpdate:(CGFloat)arg1 ;
-(void)setDisplayedText:(id)arg0 ;


@end


#endif