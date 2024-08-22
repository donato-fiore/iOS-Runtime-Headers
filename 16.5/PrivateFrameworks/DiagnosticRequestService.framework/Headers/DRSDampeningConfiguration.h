// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSDAMPENINGCONFIGURATION_H
#define DRSDAMPENINGCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) CGFloat acceptanceRate; // ivar: _acceptanceRate
@property (nonatomic) NSUInteger countCap; // ivar: _countCap
@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis


+(id)RMEIssueCategoryConfiguration;
+(id)_entityName;
+(id)caHitchesConfiguration;
+(id)coreAudioOverloadConfiguration;
+(id)defaultSignatureDampeningConfiguration;
+(id)drmResourceUsageConfiguration;
+(id)hangTracerIOSCustomerConfiguration;
+(id)hangTracerIOSInternalDownsamplingConfiguration;
+(id)hangTracerIOSInternalNoDownsamplingConfiguration;
+(id)hangTracerIOSSeedConfiguration;
+(id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+(id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+(id)mailIssueCategoryConfiguration;
+(id)memoryToolsDefaultConfiguration;
+(id)memoryToolsInternalMemgraphOverTimeConfiguration;
+(id)nandAutoGBBSweepConfiguration;
+(id)nandDefaultConfiguration;
+(id)ppsArchiveConfiguration;
+(id)rapidMicroDiagnosticsConfiguration;
+(id)sentryMacOSAppLaunchConfiguration;
+(id)spindumpMacOSSlowHIDConfiguration_Internal;
+(id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+(id)watchdogdDefaultConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDampeningConfiguration:(id)arg0 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg0 identifier:(id)arg1 ;
-(id)_initWithMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithHysteresis:(CGFloat)arg0 cap:(NSUInteger)arg1 acceptanceRate:(CGFloat)arg2 ;
-(id)initWithPlistDict:(id)arg0 ;
-(id)jsonCompatibleDictRepresentation;


@end


#endif