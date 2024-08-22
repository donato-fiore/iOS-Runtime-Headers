// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERRANDOMNESSUTILITIES_H
#define WBSCYCLERRANDOMNESSUTILITIES_H


#import <Foundation/Foundation.h>


@interface WBSCyclerRandomnessUtilities : NSObject



+(NSUInteger)randomIntegerWithUpperBound:(NSUInteger)arg0 ;
+(NSUInteger)seed;
+(id)_randomStringWithCharactersFromString:(id)arg0 ;
+(id)randomElementOfArray:(id)arg0 ;
+(id)randomElementOfArray:(id)arg0 relativeProbabilities:(id)arg1 ;
+(id)randomString;
+(id)randomURL;
+(void)initialize;
+(void)reseed;
+(void)setSeed:(NSUInteger)arg0 ;


@end


#endif