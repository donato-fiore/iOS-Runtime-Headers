// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPICKERBANNERVIEW_H
#define PUPICKERBANNERVIEW_H

@class UIView, UILabel, NSString, NSArray;
@protocol CAAnimationDelegate;


#import "PUStackView.h"

@interface PUPickerBannerView : UIView <CAAnimationDelegate>



@property (nonatomic, setter=_setAlignment:) NSInteger _alignment; // ivar: __alignment
@property (nonatomic, setter=_setAnimatingStackView:) BOOL _animatingStackView; // ivar: __animatingStackView
@property (copy, nonatomic, setter=_setAnimationCompletionHandler:) id *_animationCompletionHandler; // ivar: __animationCompletionHandler
@property (retain, nonatomic, setter=_setLabel:) UILabel *_label; // ivar: __label
@property (retain, nonatomic, setter=_setStackView:) PUStackView *_stackView; // ivar: __stackView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *images; // ivar: _images
@property (retain, nonatomic) UIView *leftView; // ivar: _leftView
@property (retain, nonatomic) UIView *rightView; // ivar: _rightView
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameReversedIfRightToLeft:(BOOL)arg0 frame:(struct CGRect )arg1 bounds:(struct CGRect )arg2 ;
-(void)_updateAlignment;
-(void)_updateLabel;
-(void)_updateStackView;
-(void)animateImagesOntoView:(id)arg0 inContainerView:(id)arg1 completionHandler:(id)arg2 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif