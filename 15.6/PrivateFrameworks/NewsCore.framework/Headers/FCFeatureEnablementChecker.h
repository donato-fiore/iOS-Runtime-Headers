// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEATUREENABLEMENTCHECKER_H
#define FCFEATUREENABLEMENTCHECKER_H


#import <Foundation/Foundation.h>


@interface FCFeatureEnablementChecker : NSObject



+(BOOL)enabledForCurrentLevel:(NSUInteger)arg0 ;
+(NSUInteger)currentSeedTestBit;


@end


#endif