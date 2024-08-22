// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTBUILDERSTATISTICSDATASOURCE_H
#define HDWORKOUTBUILDERSTATISTICSDATASOURCE_H

@class NSString, HKQuantityType;
@protocol HDStatisticsCollectionCalculatorDataSource;

#import <Foundation/Foundation.h>

#import "HDWorkoutBuilderEntity.h"
#import "HDProfile.h"

@interface HDWorkoutBuilderStatisticsDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource>



@property (readonly, nonatomic) HDWorkoutBuilderEntity *builderEntity; // ivar: _builderEntity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly) Class superclass;


-(BOOL)collectionCalculator:(id)arg0 queryForInterval:(id)arg1 error:(*id)arg2 sampleHandler:(id)arg3 ;
-(id)init;
-(id)initWithProfile:(id)arg0 quantityType:(id)arg1 builderEntity:(id)arg2 ;


@end


#endif