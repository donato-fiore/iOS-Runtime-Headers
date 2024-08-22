// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOVERSHEETPOSITIONVIEW_H
#define SBCOVERSHEETPOSITIONVIEW_H

@class SBFTouchPassThroughView, UIView;



@interface SBCoverSheetPositionView : SBFTouchPassThroughView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat progress; // ivar: _progress


-(CGFloat)_progressForTouchLocation:(struct CGPoint )arg0 ;
-(CGFloat)_progressFromContenViewFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_simulatedTouchLocationForProgress;
-(struct CGRect )positionContentForTouchAtLocation:(struct CGPoint )arg0 ;
-(struct CGRect )positionContentForTouchAtLocation:(struct CGPoint )arg0 withVelocity:(struct CGPoint )arg1 transformMode:(NSInteger)arg2 forPresentationValue:(BOOL)arg3 ;
-(void)_createContentView;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif