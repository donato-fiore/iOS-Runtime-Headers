// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARDAILYGRAPHVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARDAILYGRAPHVIEW_H

@class UIColor, UILabel, NSArray, CLKUIColoringLabel;


#import "NTKRichComplicationRectangularBaseView.h"

@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView {
    CGFloat _timeLabelAndGridAlpha;
    CGFloat _noDataAlpha;
}


@property (retain, nonatomic) UIColor *accentColor; // ivar: _accentColor
@property (nonatomic) CGRect cachedBounds; // ivar: _cachedBounds
@property (readonly, nonatomic) UILabel *dailyHighLabel; // ivar: _dailyHighLabel
@property (readonly, nonatomic) UILabel *dailyLowLabel; // ivar: _dailyLowLabel
@property (readonly, nonatomic) UIColor *graphLabelAndGridColor; // ivar: _graphLabelAndGridColor
@property (nonatomic) CGRect graphRect; // ivar: _graphRect
@property (readonly, nonatomic) UIColor *noDataTextColor; // ivar: _noDataTextColor
@property (retain, nonatomic) UIColor *nonAccentColor; // ivar: _nonAccentColor
@property (readonly, nonatomic) NSArray *timeMarkerLabels; // ivar: _timeMarkerLabels
@property (readonly, nonatomic) CGFloat timeMarkerPadding;
@property (readonly, nonatomic) CLKUIColoringLabel *titleLabel; // ivar: _titleLabel


+(id)dailyFormattedNoData;
+(struct CGSize )graphSize;
-(CGFloat)_calculateGraphXBasedOnRect:(struct CGRect )arg0 constants:(struct ? )arg1 ;
-(CGFloat)_lineStrokeWidthGivenRect:(struct CGRect )arg0 ;
-(id)_datesForGraphInTimezone:(id)arg0 ;
-(id)init;
-(struct CGRect )drawableGraphRect;
-(void)_addConstraints;
-(void)_addSubviews;
-(void)_applyPausedUpdate;
-(void)_drawVerticalHourLines:(struct CGContext *)arg0 rect:(struct CGRect )arg1 bottomLabelPadding:(CGFloat)arg2 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_updateTimeMarkerLabelsForDates:(id)arg0 timezone:(id)arg1 ;
-(void)drawGraph:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)loadWithMetadata:(id)arg0 ;
-(void)resetToNoDataState:(id)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif