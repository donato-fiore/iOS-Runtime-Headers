// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEATUREENABLEMENTCHECKER_H
#define FCFEATUREENABLEMENTCHECKER_H


#import <Foundation/Foundation.h>


@interface FCFeatureEnablementChecker : NSObject



+(BOOL)enabledForCurrentLevel:(NSUInteger)arg0 ;
+(BOOL)enabledInConfig:(id)arg0 forKey:(id)arg1 withDefaultLevel:(NSUInteger)arg2 ;
+(NSUInteger)currentSeedTestBit;


@end


#endif