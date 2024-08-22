// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRAFIBBURDENDEMODATAGENERATOR_H
#define HDHRAFIBBURDENDEMODATAGENERATOR_H

@class HDProfile, HDDemoDataGeneratorState, NSString;
@protocol HDDemoDataObjectGenerator;

#import <Foundation/Foundation.h>


@interface HDHRAFibBurdenDemoDataGenerator : NSObject <HDDemoDataObjectGenerator>

 {
    HDProfile *_profile;
    HDDemoDataGeneratorState *_generatorState;
}


@property (nonatomic) BOOL aFibHistoryFeatureOnboarded; // ivar: _aFibHistoryFeatureOnboarded
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat heartbeatSeriesSampleFrequency; // ivar: _heartbeatSeriesSampleFrequency
@property (nonatomic) CGFloat nextAFibBurdenSampleTime; // ivar: _nextAFibBurdenSampleTime
@property (nonatomic) CGFloat nextHeartbeatSeriesSampleTime; // ivar: _nextHeartbeatSeriesSampleTime
@property (nonatomic) CGFloat percentAFibChance; // ivar: _percentAFibChance
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(CGFloat)_randomlySelectedGaussianWithMean:(CGFloat)arg0 deviation:(CGFloat)arg1 ;
-(id)_currentDateFromCurrentTime:(CGFloat)arg0 ;
-(id)_metadataForSampleWithPercentage:(CGFloat)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_completeAFibHistoryOnboardingIfNecessaryForDemoPerson:(id)arg0 date:(id)arg1 ;
-(void)_generateAFibBurdenSamplesForDemoPerson:(id)arg0 lastTime:(CGFloat)arg1 atTime:(CGFloat)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateTachogramSamplesForDemoPerson:(id)arg0 lastTime:(CGFloat)arg1 atTime:(CGFloat)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_setDataTypeAsFavorite;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunObjectsForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setDemoDataGenerationContextWithProfile:(id)arg0 generatorState:(id)arg1 ;


@end


#endif