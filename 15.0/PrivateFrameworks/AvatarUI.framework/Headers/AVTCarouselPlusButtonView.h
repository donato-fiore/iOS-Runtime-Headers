// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCAROUSELPLUSBUTTONVIEW_H
#define AVTCAROUSELPLUSBUTTONVIEW_H

@class UIView, UIButton;


#import "AVTUIEnvironment.h"

@interface AVTCarouselPlusButtonView : UIView

@property (nonatomic) BOOL allowHighlight; // ivar: _allowHighlight
@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) CGSize maxItemSize; // ivar: _maxItemSize


-(id)initWithFrame:(struct CGRect )arg0 environment:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif