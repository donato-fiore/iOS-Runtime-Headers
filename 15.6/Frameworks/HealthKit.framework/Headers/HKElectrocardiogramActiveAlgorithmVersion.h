// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMACTIVEALGORITHMVERSION_H
#define HKELECTROCARDIOGRAMACTIVEALGORITHMVERSION_H


#import <Foundation/Foundation.h>


@interface HKElectrocardiogramActiveAlgorithmVersion : NSObject



+(NSInteger)algorithmVersionForOnboardingVersion:(NSInteger)arg0 ;
+(NSUInteger)onboardingVersionForKnownAlgorithmVersion:(NSInteger)arg0 ;
+(id)_maxKnownAlgorithmVersionOnboardedWithKeyValueDomain:(id)arg0 ;
+(id)knownAlgorithmVersionFromOnboardedVersion:(id)arg0 keyValueDomain:(id)arg1 ;
+(id)versionWithHealthStore:(id)arg0 error:(*id)arg1 ;


@end


#endif