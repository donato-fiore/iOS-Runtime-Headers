// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPHCMSRANDOMIZER_H
#define _DPHCMSRANDOMIZER_H

@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPHCMSRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly, nonatomic) CGFloat fragmentEpsilon; // ivar: _fragmentEpsilon
@property (readonly, nonatomic) NSUInteger fragmentK; // ivar: _fragmentK
@property (readonly, nonatomic) NSUInteger fragmentM; // ivar: _fragmentM
@property (readonly, nonatomic) NSUInteger k; // ivar: _k
@property (readonly, nonatomic) NSUInteger m; // ivar: _m


+(id)randomizerWithEpsilon:(CGFloat)arg0 bitCount:(NSUInteger)arg1 hashFunctionCount:(NSUInteger)arg2 ;
+(id)randomizerWithEpsilon:(CGFloat)arg0 bitCount:(NSUInteger)arg1 hashFunctionCount:(NSUInteger)arg2 fragmentEpsilon:(CGFloat)arg3 fragmentBitCount:(NSUInteger)arg4 fragmentHashFunctionCount:(NSUInteger)arg5 ;
-(id)description;
-(id)hcmsSampleForFragment:(id)arg0 ;
-(id)hcmsSampleForString:(id)arg0 ;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 bitCount:(NSUInteger)arg1 hashFunctionCount:(NSUInteger)arg2 ;
-(id)initWithEpsilon:(CGFloat)arg0 bitCount:(NSUInteger)arg1 hashFunctionCount:(NSUInteger)arg2 fragmentEpsilon:(CGFloat)arg3 fragmentBitCount:(NSUInteger)arg4 fragmentHashFunctionCount:(NSUInteger)arg5 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif