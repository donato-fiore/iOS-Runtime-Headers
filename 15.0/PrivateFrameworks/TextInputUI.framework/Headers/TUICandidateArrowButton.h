// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUICANDIDATEARROWBUTTON_H
#define TUICANDIDATEARROWBUTTON_H

@class UIButton, NSString, UIView;
@protocol TUICandidateViewStyle;


#import "TUICandidateBackdropView.h"

@interface TUICandidateArrowButton : UIButton

@property (nonatomic) NSInteger arrowDirection; // ivar: _arrowDirection
@property (copy, nonatomic) NSString *arrowImageName; // ivar: _arrowImageName
@property (retain, nonatomic) TUICandidateBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *highlightBackgroundView; // ivar: _highlightBackgroundView
@property (nonatomic) BOOL showsBackground; // ivar: _showsBackground
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style


-(CGFloat)imageViewAlpha;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)rotatedImageForImage:(id)arg0 scale:(CGFloat)arg1 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)udpateBackgroundColor;
-(void)updateStyle;


@end


#endif