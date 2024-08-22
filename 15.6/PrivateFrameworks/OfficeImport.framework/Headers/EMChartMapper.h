// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMCHARTMAPPER_H
#define EMCHARTMAPPER_H



#import "CMMapper.h"
#import "CHDChart.h"
#import "CMState.h"
#import "EDResources.h"
#import "CHDChartType.h"
#import "CHDSeries.h"
#import "CHDAxis.h"
#import "CMDrawableMapper.h"

@interface EMChartMapper : CMMapper {
    CHDChart *mChart;
    CMState *mState;
    EDResources *mResources;
    CHDChartType *mMainType;
    CHDSeries *mMainSeries;
    CHDAxis *mBaseAxis;
    CHDAxis *mPrimaryAxis;
    CHDAxis *mSecondaryAxis;
    BOOL mIsHorizontal;
    BOOL mIsStacked;
    BOOL mIsPercentStacked;
    NSUInteger mPieIndex;
    ? mPlotInfos;
    BOOL mHasDateCategory;
    BOOL mHasPrimaryDateAxis;
    BOOL mHasSecondaryDateAxis;
}


@property (readonly, weak) CMDrawableMapper *parent;


+(struct CGColor *)newColorWithCalibratedRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3 ;
-(id)copyPdfWithState:(id)arg0 withSize:(struct CGSize )arg1 ;
-(id)dateFromXlDateTimeNumber:(CGFloat)arg0 ;
-(id)initWithChart:(id)arg0 parent:(id)arg1 ;
-(void)_addCategoryAxis:(id)arg0 series:(id)arg1 state:(id)arg2 toDescription:(id)arg3 ;
-(void)_addGraphicProperties:(id)arg0 toDescription:(id)arg1 withState:(id)arg2 ;
-(void)_addStandardSeries:(id)arg0 toDescription:(id)arg1 withState:(id)arg2 ;
-(void)_addUnitAxis:(id)arg0 series:(id)arg1 state:(id)arg2 toDescription:(id)arg3 ;
-(void)addBackgroundToDescription:(id)arg0 withState:(id)arg1 ;
-(void)addLegendToDescription:(id)arg0 chartSize:(struct CGSize )arg1 withState:(id)arg2 ;
-(void)addSeries:(id)arg0 toDescription:(id)arg1 withState:(id)arg2 ;
-(void)addTitleToDescription:(id)arg0 withState:(id)arg1 ;


@end


#endif