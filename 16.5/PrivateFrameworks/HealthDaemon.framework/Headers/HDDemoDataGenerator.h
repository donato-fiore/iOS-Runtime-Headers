// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAGENERATOR_H
#define HDDEMODATAGENERATOR_H

@class NSArray, NSMutableDictionary, NSCalendar;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDemoDataActivitySampleGenerator.h"
#import "HDDemoDataAlcoholSampleGenerator.h"
#import "HDDemoDataAudioExposureSampleGenerator.h"
#import "HDDemoDataAudiogramSampleGenerator.h"
#import "HDDemoDataBodySampleGenerator.h"
#import "HDDemoDataGeneratorConfiguration.h"
#import "HDDemoDataPerson.h"
#import "HDDemoDataFoodSampleGenerator.h"
#import "HDDemoDataGeneratorState.h"
#import "HDDemoDataHealthDocumentSampleGenerator.h"
#import "HDDemoDataHeartSampleGenerator.h"
#import "HDDemoDataMindfulnessSampleGenerator.h"
#import "HDDemoDataMobilitySampleGenerator.h"
#import "HDDemoDataOtherAndAdditionalSampleGenerator.h"
#import "HDDemoDataPathologySampleGenerator.h"
#import "HDProfile.h"
#import "HDDemoDataReproductiveHealthSampleGenerator.h"
#import "HDDemoDataSleepSampleGenerator.h"
#import "HDDemoDataStatisticsSampleGenerator.h"
#import "HDDemoDataSymptomsSampleGenerator.h"
#import "HDDemoDataVitalsSampleGenerator.h"

@interface HDDemoDataGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_demoDataGenerators;
    NSArray *_dataGeneratorsFromPlugins;
    NSArray *_dataGeneratorClassesFromPlugins;
    NSMutableDictionary *_appProvenances;
    NSCalendar *_gregorianCalendar;
    NSInteger _numHKSamples;
    BOOL _isGeneratingDemoData;
}


@property (retain, nonatomic) HDDemoDataActivitySampleGenerator *activitySampleGenerator; // ivar: _activitySampleGenerator
@property (retain, nonatomic) HDDemoDataAlcoholSampleGenerator *alcoholSampleGenerator; // ivar: _alcoholSampleGenerator
@property (retain, nonatomic) HDDemoDataAudioExposureSampleGenerator *audioExposureSampleGenerator; // ivar: _audioExposureSampleGenerator
@property (retain, nonatomic) HDDemoDataAudiogramSampleGenerator *audiogramSampleGenerator; // ivar: _audiogramSampleGenerator
@property (retain, nonatomic) HDDemoDataBodySampleGenerator *bodySampleGenerator; // ivar: _bodySampleGenerator
@property (retain, nonatomic) HDDemoDataGeneratorConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) HDDemoDataPerson *demoPerson; // ivar: _demoPerson
@property (retain, nonatomic) HDDemoDataFoodSampleGenerator *foodSampleGenerator; // ivar: _foodSampleGenerator
@property (readonly, nonatomic) HDDemoDataGeneratorState *generatorState; // ivar: _generatorState
@property (retain, nonatomic) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator; // ivar: _healthDocumentSampleGenerator
@property (retain, nonatomic) HDDemoDataHeartSampleGenerator *heartSampleGenerator; // ivar: _heartSampleGenerator
@property (retain, nonatomic) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator; // ivar: _mindfulnessSampleGenerator
@property (retain, nonatomic) HDDemoDataMobilitySampleGenerator *mobilitySampleGenerator; // ivar: _mobilitySampleGenerator
@property (retain, nonatomic) HDDemoDataOtherAndAdditionalSampleGenerator *otherAndAdditionalSampleGenerator; // ivar: _otherAndAdditionalSampleGenerator
@property (retain, nonatomic) HDDemoDataPathologySampleGenerator *pathologySampleGenerator; // ivar: _pathologySampleGenerator
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator; // ivar: _reproductiveHealthSampleGenerator
@property (retain, nonatomic) HDDemoDataSleepSampleGenerator *sleepSampleGenerator; // ivar: _sleepSampleGenerator
@property (retain, nonatomic) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator; // ivar: _statisticsSampleGenerator
@property (retain, nonatomic) HDDemoDataSymptomsSampleGenerator *symptomsSampleGenerator; // ivar: _symptomsSampleGenerator
@property (retain, nonatomic) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator; // ivar: _vitalsSampleGenerator


-(BOOL)isDemoDataTimeInWeekend:(CGFloat)arg0 calendar:(id)arg1 ;
-(NSInteger)firstSampleDayOfYear;
-(id)currentDateFromCurrentTime:(CGFloat)arg0 ;
-(id)firstSampleDate;
-(id)gregorianCalendar;
-(id)init;
-(id)initWithProfile:(id)arg0 configuration:(id)arg1 queue:(id)arg2 ;
-(id)initWithProfile:(id)arg0 queue:(id)arg1 ;
-(void)generateThroughEndDate:(id)arg0 completion:(id)arg1 ;


@end


#endif