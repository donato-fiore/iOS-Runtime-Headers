// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTMEDIATOR_H
#define TSCHCHARTMEDIATOR_H

@class TSUIntToIntDictionary;
@protocol NSCopying, TSCHNotifyOnModify;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"

@interface TSCHChartMediator : NSObject <NSCopying>

 {
    TSUIntToIntDictionary *_remoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *_gridSeriesIndexForRemoteSeriesIndex;
}


@property (weak, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) BOOL isPhantom;
@property (weak, nonatomic) NSObject<TSCHNotifyOnModify> *objectToNotify; // ivar: _objectToNotify
@property (readonly, nonatomic) NSUInteger referenceType;


+(id)propertiesThatInvalidateMediator;
-(BOOL)hasCategoryReferences;
-(BOOL)hasTractReference;
-(BOOL)isEditing;
-(BOOL)preferSeriesToValues;
-(NSUInteger)p_gridSeriesIndexForRemoteSeriesIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_remoteSeriesIndexForGridSeriesIndex:(NSUInteger)arg0 ;
-(id)categoryLabelFormulas;
-(id)commandSetCategoryName:(id)arg0 forCategoryIndex:(NSUInteger)arg1 ;
-(id)commandSetSeriesName:(id)arg0 forSeriesIndex:(NSUInteger)arg1 ;
-(id)commandToChangeCategoryLabelFormulas:(id)arg0 ;
-(id)commandToSetChartGridDirection:(int)arg0 documentRoot:(id)arg1 ;
-(id)commandToSetErrorBarCustomFormula:(id)arg0 seriesIndex:(NSUInteger)arg1 dataType:(int)arg2 ;
-(id)commandToSetNewSeriesIndex:(NSUInteger)arg0 forSeriesIndex:(NSUInteger)arg1 ;
-(id)commandToSetSeriesDataFormula:(id)arg0 seriesDimension:(id)arg1 ;
-(id)commandToSetSeriesNameFormula:(id)arg0 seriesIndex:(NSUInteger)arg1 ;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataFormatterForAxis:(id)arg0 documentRoot:(id)arg1 ;
-(id)dataFormatterForSeries:(id)arg0 index:(NSUInteger)arg1 axisType:(int)arg2 documentRoot:(id)arg3 ;
-(id)errorBarCustomFormulaForSeriesIndex:(NSUInteger)arg0 dataType:(int)arg1 ;
-(id)init;
-(id)initWithChartInfo:(id)arg0 ;
-(id)p_errorBarDataForSeries:(NSUInteger)arg0 withSpec:(struct ? )arg1 updateType:(int)arg2 ;
-(id)seriesDataFormulaForSeriesDimension:(id)arg0 ;
-(id)seriesNameFormulaForSeriesIndex:(NSUInteger)arg0 ;
-(void)invalidateAndSynchronizeMediator;
-(void)loadFromArchive:(*void)arg0 ;
-(void)pauseCalculationEngine;
-(void)resumeCalculationEngine;
-(void)saveToArchive:(*void)arg0 ;
-(void)updateGridWithSpec:(struct ? )arg0 ;
-(void)willModify;


@end


#endif