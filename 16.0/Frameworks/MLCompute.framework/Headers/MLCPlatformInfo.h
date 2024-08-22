// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCPLATFORMINFO_H
#define MLCPLATFORMINFO_H


#import <Foundation/Foundation.h>


@interface MLCPlatformInfo : NSObject



+(BOOL)aneUsageUnsupported;
+(BOOL)gpuUsageUnsupported;
+(BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)arg0 ;
+(BOOL)gpuUseMPSGraphConvolution;
+(BOOL)isAneGraphPartitioningConfigSet;
+(BOOL)isAnePlistKept;
+(BOOL)isAneSaveGraphPartitioningConfigSet;
+(BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:(NSUInteger)arg0 ;
+(BOOL)isInternalBuild;
+(BOOL)isRNGSeeded;
+(BOOL)multiGPUUsageUnsupported;
+(NSInteger)randomSeed;
+(id)aneGraphPartitioningConfigEnvVariable;
+(id)aneKeepPlistEnvVariable;
+(id)aneSaveGraphPartitioningConfig;
+(id)aneSubType;
+(id)bootArgs;
+(id)buildVersion;
+(id)getRandomSeed;
+(id)mpsGraphConvolutionEnvVariable;
+(id)osVersion;
+(id)seedEnvVariable;
+(int)aneSubTypeVersion;
+(int)getMinGpuSocVersionForMicroBenchmark;
+(void)setRandomSeedTo:(id)arg0 ;


@end


#endif