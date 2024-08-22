// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCOMPETITIONPARTICIPANTSCOREVIEW_H
#define ASCOMPETITIONPARTICIPANTSCOREVIEW_H

@class UIView, UILabel, NSNumber, NSString, UIColor;


#import "ASCompetitionScoreViewConfiguration.h"

@interface ASCompetitionParticipantScoreView : UIView {
    ASCompetitionScoreViewConfiguration *_configuration;
    UILabel *_nameLabel;
    UILabel *_primaryScoreLabel;
    UILabel *_secondaryScoreLabel;
    NSNumber *_previousLayoutWidth;
}


@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGFloat nameBaselineY;
@property (nonatomic) CGFloat nameFontSizeReduction; // ivar: _nameFontSizeReduction
@property (nonatomic) NSUInteger primaryScore; // ivar: _primaryScore
@property (nonatomic) CGFloat primaryScoreFontSizeReduction; // ivar: _primaryScoreFontSizeReduction
@property (retain, nonatomic) UIColor *scoreColor; // ivar: _scoreColor
@property (nonatomic) CGFloat scoreLeftMargin; // ivar: _scoreLeftMargin
@property (nonatomic) CGFloat scoreRightMargin; // ivar: _scoreRightMargin
@property (nonatomic) NSUInteger secondaryScore; // ivar: _secondaryScore
@property (nonatomic) BOOL secondaryScoreEnabled; // ivar: _secondaryScoreEnabled


-(CGFloat)_availableScoreWidthForWidth:(CGFloat)arg0 ;
-(CGFloat)_computeFontSizeReductionForLabel:(id)arg0 width:(CGFloat)arg1 maxReduction:(CGFloat)arg2 updateBlock:(id)arg3 ;
-(CGFloat)computeNameFontSizeReductionForWidth:(CGFloat)arg0 ;
-(CGFloat)computePrimaryScoreFontSizeReductionForWidth:(CGFloat)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateNameLabelWithFontSizeReduction:(CGFloat)arg0 ;
-(void)_updatePrimaryScoreLabelWithFontSizeReduction:(CGFloat)arg0 ;
-(void)_updateSecondaryScoreLabel;
-(void)layoutForWidth:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif