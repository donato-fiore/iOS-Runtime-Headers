// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSTATISTICSCOLLECTIONCALCULATOR_H
#define HDSTATISTICSCOLLECTIONCALCULATOR_H

@class NSDateInterval, NSString, _HKDateIntervalCollection, NSArray, HKQuantityType;
@protocol HDStatisticsSourceOrderProvider, NSSecureCoding, HDStatisticsCollectionCalculatorDataSource, HDStatisticsCollectionCalculatorSourceOrderProvider;

#import <Foundation/Foundation.h>


@interface HDStatisticsCollectionCalculator : NSObject <HDStatisticsSourceOrderProvider, NSSecureCoding>

 {
    unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> _implementation;
}


@property (readonly, nonatomic) NSInteger computationMethod; // ivar: _computationMethod
@property (weak, nonatomic) NSObject<HDStatisticsCollectionCalculatorDataSource> *dataSource;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection;
@property (readonly, copy, nonatomic) NSArray *maskedIntervals; // ivar: _maskedIntervals
@property (nonatomic) CGFloat mergeGranularity;
@property (readonly, nonatomic) NSUInteger mergeStrategy;
@property (readonly, nonatomic) NSUInteger options;
@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (weak, nonatomic) NSObject<HDStatisticsCollectionCalculatorSourceOrderProvider> *sourceOrderProvider; // ivar: _sourceOrderProvider
@property (copy, nonatomic) id *statisticsHandler; // ivar: _statisticsHandler
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)calculatorForArchivedRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)calculatorForCategoryType:(id)arg0 intervalCollection:(id)arg1 options:(NSUInteger)arg2 mergeStrategy:(NSUInteger)arg3 ;
+(id)calculatorForQuantityType:(id)arg0 intervalCollection:(id)arg1 options:(NSUInteger)arg2 mergeStrategy:(NSUInteger)arg3 ;
+(id)calculatorForQuantityType:(id)arg0 intervalCollection:(id)arg1 options:(NSUInteger)arg2 mergeStrategy:(NSUInteger)arg3 computationMethod:(NSInteger)arg4 ;
-(BOOL)addSampleValue:(CGFloat)arg0 startTime:(CGFloat)arg1 endTime:(CGFloat)arg2 sourceID:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)invalidateInterval:(id)arg0 error:(*id)arg1 ;
// -(BOOL)performAddSampleTransaction:(id)arg0 error:(unk)arg1  ;
// -(BOOL)performInitialStatisticsTransaction:(id)arg0 error:(unk)arg1  ;
-(BOOL)queryForInitialStatisticsWithError:(*id)arg0 ;
-(id)archivedRepresentationWithError:(*id)arg0 ;
-(id)bundleIdentifierForSourceID:(NSInteger)arg0 ;
-(id)currentStatistics;
-(id)initWithCoder:(id)arg0 ;
-(id)sourceForSourceID:(NSInteger)arg0 ;
-(void)configureMergeAnchor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)orderSourceIDs:(*void)arg0 ;
-(void)reset;
-(void)setStatisticsConfiguration:(id)arg0 ;


@end


#endif