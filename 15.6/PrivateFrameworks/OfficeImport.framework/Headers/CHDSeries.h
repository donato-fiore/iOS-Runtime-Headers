// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDSERIES_H
#define CHDSERIES_H

@class NSString;
@protocol EDKeyedObject;

#import <Foundation/Foundation.h>

#import "CHDChart.h"
#import "CHDChartType.h"
#import "CHDFormula.h"
#import "CHDDataValue.h"
#import "CHDData.h"
#import "EDKeyedCollection.h"
#import "EDCollection.h"
#import "CHDErrorBar.h"
#import "CHDDataLabel.h"
#import "OADGraphicProperties.h"

@interface CHDSeries : NSObject <EDKeyedObject>

 {
    CHDChart *mChart;
    CHDChartType *mChartType;
    NSUInteger mOrder;
    NSUInteger mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    BOOL mDateTimeFormattingFlag;
    BOOL mHiddenFlag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)seriesWithChart:(id)arg0 ;
-(BOOL)hasErrorBars;
-(BOOL)hasTrendlines;
-(BOOL)isDateTimeFormattingFlag;
-(BOOL)isEmpty;
-(BOOL)isHidden;
-(NSInteger)key;
-(NSUInteger)categoryCount;
-(NSUInteger)order;
-(NSUInteger)styleIndex;
-(id)categoryData;
-(id)chart;
-(id)chartType;
-(id)dataValuePropertiesCollection;
-(id)defaultDataLabel;
-(id)defaultSeriesNameForIndex:(NSUInteger)arg0 ;
-(id)errorBarXAxis;
-(id)errorBarYAxis;
-(id)graphicProperties;
-(id)initWithChart:(id)arg0 ;
-(id)lastCachedName;
-(id)name;
-(id)shallowCopy;
-(id)trendlineCollection;
-(id)valueData;
-(void)clearBackPointers;
-(void)setCategoryData:(id)arg0 ;
-(void)setChartType:(id)arg0 ;
-(void)setDataValuePropertiesCollection:(id)arg0 ;
-(void)setDateTimeFormattingFlag:(BOOL)arg0 ;
-(void)setDefaultDataLabel:(id)arg0 ;
-(void)setErrorBar:(id)arg0 ;
-(void)setErrorBarXAxis:(id)arg0 ;
-(void)setErrorBarYAxis:(id)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setHiddenFlag:(BOOL)arg0 ;
-(void)setLastCachedName:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setOrder:(NSUInteger)arg0 ;
-(void)setStyleIndex:(NSUInteger)arg0 ;
-(void)setTrendlineCollection:(id)arg0 ;
-(void)setValueData:(id)arg0 ;


@end


#endif