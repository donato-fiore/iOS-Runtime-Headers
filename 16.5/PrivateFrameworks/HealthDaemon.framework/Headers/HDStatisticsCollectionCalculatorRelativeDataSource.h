// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSTATISTICSCOLLECTIONCALCULATORRELATIVEDATASOURCE_H
#define HDSTATISTICSCOLLECTIONCALCULATORRELATIVEDATASOURCE_H

@class NSDate, HKRollingBaselineConfiguration, NSString;
@protocol HDStatisticsCollectionCalculatorDataSource;

#import <Foundation/Foundation.h>

#import "HDStatisticsCollectionCalculatorDefaultDataSource.h"
#import "HDProfile.h"

@interface HDStatisticsCollectionCalculatorRelativeDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource>

 {
    HDStatisticsCollectionCalculatorDefaultDataSource *_defaultDataSource;
    NSDate *_currentDate;
}


@property (readonly, copy, nonatomic) HKRollingBaselineConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (copy, nonatomic) id *shouldContinueHandler; // ivar: _shouldContinueHandler
@property (readonly) Class superclass;


-(BOOL)_shouldContinueWithError:(*id)arg0 ;
// -(BOOL)collectionCalculator:(id)arg0 queryForInterval:(id)arg1 error:(*id)arg2 sampleHandler:(id)arg3 mergeHandler:(unk)arg4  ;
-(CGFloat)_queryPrefetchWindowForQuantityTypeIdentifier:(id)arg0 ;
-(id)initForProfile:(id)arg0 quantityType:(id)arg1 predicate:(id)arg2 restrictedSourceEntities:(id)arg3 configuration:(id)arg4 currentDate:(id)arg5 ;
-(id)maxRowID;
-(id)restrictedSourceEntities;
-(void)setRestrictedSourceEntities:(id)arg0 ;


@end


#endif