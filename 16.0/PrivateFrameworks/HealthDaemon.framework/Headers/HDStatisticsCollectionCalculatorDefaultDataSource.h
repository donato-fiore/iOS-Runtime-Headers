// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSTATISTICSCOLLECTIONCALCULATORDEFAULTDATASOURCE_H
#define HDSTATISTICSCOLLECTIONCALCULATORDEFAULTDATASOURCE_H

@class NSNumber, NSString, _HKFilter, HKQuantityType, NSSet;
@protocol HDStatisticsCollectionQueryServerDataSource, HDStatisticsCollectionCalculatorDataSource;

#import <Foundation/Foundation.h>

#import "HDSQLitePredicate.h"
#import "HDProfile.h"

@interface HDStatisticsCollectionCalculatorDefaultDataSource : NSObject <HDStatisticsCollectionQueryServerDataSource, HDStatisticsCollectionCalculatorDataSource>

 {
    HDSQLitePredicate *_fullPredicate;
    BOOL _isRealQuantityType;
}


@property (copy, nonatomic) NSNumber *anchor; // ivar: _anchor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) _HKFilter *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeUnfrozenSeries; // ivar: _includeUnfrozenSeries
@property (readonly, copy, nonatomic) NSNumber *maxRowID; // ivar: _maxRowID
@property (copy, nonatomic) HDSQLitePredicate *predicate; // ivar: _predicate
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (copy, nonatomic) NSSet *restrictedSourceEntities; // ivar: _restrictedSourceEntities
@property (nonatomic) NSInteger shouldContinueFrequency; // ivar: _shouldContinueFrequency
@property (copy, nonatomic) id *shouldContinueHandler; // ivar: _shouldContinueHandler
@property (readonly) Class superclass;


-(BOOL)addValuesForQuantitySamples:(id)arg0 calculator:(id)arg1 includeSeries:(BOOL)arg2 error:(*id)arg3 ;
// -(BOOL)collectionCalculator:(id)arg0 queryForInterval:(id)arg1 error:(*id)arg2 sampleHandler:(id)arg3 mergeHandler:(unk)arg4  ;
-(id)initForProfile:(id)arg0 categoryType:(id)arg1 predicate:(id)arg2 restrictedSourceEntities:(id)arg3 ;
-(id)initForProfile:(id)arg0 quantityType:(id)arg1 predicate:(id)arg2 restrictedSourceEntities:(id)arg3 ;


@end


#endif