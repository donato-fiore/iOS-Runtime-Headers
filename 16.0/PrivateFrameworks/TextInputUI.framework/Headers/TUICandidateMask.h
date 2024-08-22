// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUICANDIDATEMASK_H
#define TUICANDIDATEMASK_H

@class UIView, UIImageView, NSLayoutConstraint;
@protocol TUICandidateViewStyle;



@interface TUICandidateMask : UIView

@property (retain, nonatomic) UIView *centerView; // ivar: _centerView
@property (retain, nonatomic) UIImageView *leftEdgeImageView; // ivar: _leftEdgeImageView
@property (retain, nonatomic) NSLayoutConstraint *leftEdgeWidthConstraint; // ivar: _leftEdgeWidthConstraint
@property (retain, nonatomic) UIImageView *rightEdgeImageView; // ivar: _rightEdgeImageView
@property (retain, nonatomic) NSLayoutConstraint *rightEdgeWidthConstraint; // ivar: _rightEdgeWidthConstraint
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLayout;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif