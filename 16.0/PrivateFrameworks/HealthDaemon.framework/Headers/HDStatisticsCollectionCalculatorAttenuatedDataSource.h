// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSTATISTICSCOLLECTIONCALCULATORATTENUATEDDATASOURCE_H
#define HDSTATISTICSCOLLECTIONCALCULATORATTENUATEDDATASOURCE_H



#import "HDStatisticsCollectionCalculatorDefaultDataSource.h"
#import "HDQuantitySampleAttenuationEngine.h"
#import "HDQuantitySampleAttenuationProvider.h"

@interface HDStatisticsCollectionCalculatorAttenuatedDataSource : HDStatisticsCollectionCalculatorDefaultDataSource

@property (readonly, nonatomic) HDQuantitySampleAttenuationEngine *attenuationEngine; // ivar: _attenuationEngine
@property (readonly, nonatomic) HDQuantitySampleAttenuationProvider *attenuationProvider; // ivar: _attenuationProvider


// -(BOOL)collectionCalculator:(id)arg0 queryForInterval:(id)arg1 error:(*id)arg2 sampleHandler:(id)arg3 mergeHandler:(unk)arg4  ;
-(id)initForProfile:(id)arg0 quantityType:(id)arg1 predicate:(id)arg2 restrictedSourceEntities:(id)arg3 attenuationType:(id)arg4 ;


@end


#endif