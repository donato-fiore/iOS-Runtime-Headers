// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKINKTHICKNESSBUTTON_H
#define _PKINKTHICKNESSBUTTON_H

@class UIControl, UIImage, NSString, UIImageView;



@interface _PKInkThicknessButton : UIControl

@property (retain, nonatomic) UIImage *assetImage; // ivar: _assetImage
@property (readonly, nonatomic) NSString *inkIdentifier; // ivar: _inkIdentifier
@property (retain, nonatomic) UIImageView *inkImageView; // ivar: _inkImageView
@property (nonatomic) CGRect lastRenderedBounds; // ivar: _lastRenderedBounds
@property (readonly, nonatomic) CGFloat weight; // ivar: _weight


+(id)backgroundColorForIsSelected:(BOOL)arg0 highlighted:(BOOL)arg1 ;
+(id)imageTintColorForIsSelected:(BOOL)arg0 highlighted:(BOOL)arg1 ;
+(struct CGSize )buttonSize;
-(id)initWithInkIdentifier:(id)arg0 weight:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateToHighlightedState:(BOOL)arg0 ;
-(void)didTouchUpInside;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif