// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIPREFERENCE_H
#define HMIPREFERENCE_H

@class HMFObject, NSString, NSMutableDictionary, HMFTimer, NSDictionary;
@protocol HMFTimerDelegate, HMFLogging;



@interface HMIPreference : HMFObject <HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) unsigned int analysisQOS;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isIdle;
@property (readonly) CGFloat maxAnalysisFPSForCurrentThermalLevel;
@property (readonly, nonatomic) NSMutableDictionary *preferenceCache; // ivar: _preferenceCache
@property (readonly) HMFTimer *preferenceCacheFlushTimer; // ivar: _preferenceCacheFlushTimer
@property (readonly, nonatomic) NSMutableDictionary *preferenceLoggedValues; // ivar: _preferenceLoggedValues
@property (readonly) NSDictionary *preferenceOverrides;
@property (readonly, nonatomic) NSMutableDictionary *preferenceOverridesInternal; // ivar: _preferenceOverridesInternal
@property (readonly) BOOL shouldEnableTorsoRecognition;
@property (readonly) BOOL shouldUseCPUOnlyForVisionFaceDetection;
@property (readonly) Class superclass;
@property (readonly) BOOL usesCPUOnly;


+(BOOL)isAudioAccessory;
+(BOOL)isInternalInstall;
+(BOOL)isProductTypeB238;
+(BOOL)isProductTypeB520;
+(BOOL)isProductTypeB620;
+(BOOL)isProductTypeJ105;
+(BOOL)isProductTypeJ255;
+(BOOL)isProductTypeJ305;
+(BOOL)isProductTypeJ42;
+(BOOL)pretendProductTypeIsUnknown;
+(id)logCategory;
+(id)qosMap;
+(id)sharedInstance;
+(int)productType;
+(void)setPretendProductTypeIsUnknown:(BOOL)arg0 ;
-(BOOL)boolPreferenceForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)hasPreferenceForKey:(id)arg0 ;
-(BOOL)shouldGenerateThumbnailForAnalysisFPS:(CGFloat)arg0 ;
-(CGFloat)maxAnalysisFPSForCurrentPeakPowerPressureLevel;
-(CGFloat)maxAnalysisFPSForSystemResourceUsageLevel:(NSInteger)arg0 ;
-(NSUInteger)maxConcurrentAnalyzersForCurrentPeakPowerPressureLevel;
-(NSUInteger)maxConcurrentAnalyzersForCurrentThermalLevel;
-(NSUInteger)maxConcurrentAnalyzersForSystemResourceUsageLevel:(NSInteger)arg0 ;
-(id)init;
-(id)numberPreferenceForKey:(id)arg0 ;
-(id)numberPreferenceForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)numberPreferenceForKey:(id)arg0 defaultValue:(id)arg1 withMap:(id)arg2 ;
-(id)numberPreferenceForKey:(id)arg0 defaultValue:(id)arg1 withParser:(id)arg2 ;
-(id)stringPreferenceForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)systemPreferenceValueForKey:(id)arg0 ;
-(id)valuePreferenceForKey:(id)arg0 defaultValue:(id)arg1 withMap:(id)arg2 ;
-(id)valuePreferenceForKey:(id)arg0 defaultValue:(id)arg1 withParser:(id)arg2 ;
-(void)addPreferenceOverrideFromDictionary:(id)arg0 ;
-(void)logPreferenceForKey:(id)arg0 value:(id)arg1 ;
-(void)removeAllPreferenceOverrides;
-(void)setPreferenceOverrideFromDictionary:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif