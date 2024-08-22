// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDCHARTTYPE_H
#define CHDCHARTTYPE_H


#import <Foundation/Foundation.h>

#import "CHDChart.h"
#import "EDCollection.h"
#import "CHDSeriesCollection.h"
#import "CHDDataLabel.h"

@interface CHDChartType : NSObject {
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;
    BOOL mVaryColors;
}




+(BOOL)is3DType;
+(id)chartTypeWithChart:(id)arg0 ;
-(BOOL)isHorizontal;
-(BOOL)isPlotedOnSecondaryAxis;
-(BOOL)isVaryColors;
-(NSUInteger)categoryCount;
-(NSUInteger)seriesCount;
-(id)axes;
-(id)axisForClass:(Class)arg0 ;
-(id)axisIds;
-(id)chart;
-(id)contentFormat;
-(id)defaultDataLabel;
-(id)defaultTitleWithResources:(id)arg0 ;
-(id)description;
-(id)initWithChart:(id)arg0 ;
-(id)seriesCollection;
-(int)defaultLabelPosition;
-(void)setDefaultDataLabel:(id)arg0 ;
-(void)setSeriesCollection:(id)arg0 ;
-(void)setVaryColors:(BOOL)arg0 ;
-(void)switchAxes:(id)arg0 ;


@end


#endif