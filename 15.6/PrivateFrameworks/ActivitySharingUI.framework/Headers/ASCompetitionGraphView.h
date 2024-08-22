// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCOMPETITIONGRAPHVIEW_H
#define ASCOMPETITIONGRAPHVIEW_H

@class UIView, NSDateFormatter, ASCompetition, UIFont, UIColor, NSString;



@interface ASCompetitionGraphView : UIView {
    NSDateFormatter *_dateFormatter;
}


@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) CGFloat barWidth; // ivar: _barWidth
@property (nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (retain, nonatomic) ASCompetition *competition; // ivar: _competition
@property (retain, nonatomic) UIFont *currentDateFont; // ivar: _currentDateFont
@property (retain, nonatomic) UIColor *dateColor; // ivar: _dateColor
@property (retain, nonatomic) UIFont *dateFont; // ivar: _dateFont
@property (copy, nonatomic) NSString *dateFormat;
@property (nonatomic) CGFloat dayLabelBaselineOffset; // ivar: _dayLabelBaselineOffset
@property (nonatomic) BOOL drawsDailyScoreLabels; // ivar: _drawsDailyScoreLabels
@property (nonatomic) BOOL drawsFutureScoreDots; // ivar: _drawsFutureScoreDots
@property (retain, nonatomic) UIColor *highlightedDateColor; // ivar: _highlightedDateColor
@property (nonatomic) BOOL highlightsCurrentDay; // ivar: _highlightsCurrentDay
@property (nonatomic) CGFloat horizontalInset; // ivar: _horizontalInset
@property (readonly, nonatomic) CGFloat lastBaselineY;
@property (nonatomic) CGFloat maxBarHeight; // ivar: _maxBarHeight
@property (nonatomic) BOOL showsBackgroundDateGuide; // ivar: _showsBackgroundDateGuide
@property (nonatomic) BOOL showsBackgroundScoreGuide; // ivar: _showsBackgroundScoreGuide
@property (nonatomic) CGFloat spaceBetweenBars; // ivar: _spaceBetweenBars


+(id)companionGraph;
+(id)gizmoGraph;
-(CGFloat)_firstBarOriginXForDateLabelOriginX:(CGFloat)arg0 dateLabelWidth:(CGFloat)arg1 ;
-(CGFloat)_percentForScoreAtIndex:(NSUInteger)arg0 scores:(id)arg1 maxScore:(NSUInteger)arg2 ;
-(CGFloat)preferredHeight;
-(NSUInteger)_maxDailyScore;
-(NSUInteger)_minDailyScore;
-(id)_allScores;
-(id)_attributesForDateLabelWithDate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif