// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETPOSITIONVIEW_H
#define SBCOVERSHEETPOSITIONVIEW_H

@class SBFTouchPassThroughView, UIView;



@interface SBCoverSheetPositionView : SBFTouchPassThroughView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat progress; // ivar: _progress


-(CGFloat)_progressForTouchLocation:(struct CGPoint )arg0 ;
-(CGFloat)_progressFromContenViewFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_transformForLocation:(struct CGPoint )arg0 transformMode:(NSInteger)arg1 ;
-(struct CGPoint )_simulatedTouchLocationForProgress;
-(struct CGRect )positionContentForTouchAtLocation:(struct CGPoint )arg0 ;
-(struct CGRect )positionContentForTouchAtLocation:(struct CGPoint )arg0 withTransformMode:(NSInteger)arg1 forPresentationValue:(BOOL)arg2 ;
-(void)_createContentView;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif