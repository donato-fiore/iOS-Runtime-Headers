// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVLABEL_H
#define _TVLABEL_H

@class UILabel;



@interface _TVLabel : UILabel

@property (nonatomic) CGSize cachedSizeThatFits; // ivar: _cachedSizeThatFits
@property (nonatomic) CGRect cachedTextRectForBounds; // ivar: _cachedTextRectForBounds
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) CGRect previousBounds; // ivar: _previousBounds
@property (nonatomic) NSInteger previousNumberOfLines; // ivar: _previousNumberOfLines
@property (nonatomic) CGSize previousTargetSize; // ivar: _previousTargetSize


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 limitedToNumberOfLines:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_clearCachedValues;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setBaselineAdjustment:(NSInteger)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setLineBreakMode:(NSInteger)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif