// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGRANDOMIZATION_H
#define SGRANDOMIZATION_H


#import <Foundation/Foundation.h>


@interface SGRandomization : NSObject



+(id)shuffledSamplingWithoutReplacementForK:(NSUInteger)arg0 fromN:(NSUInteger)arg1 withRng:(id)arg2 ;
// +(void)shuffleMutableArray:(id)arg0 inApproxEqualEpsilon:(CGFloat)arg1 withValueBlock:(id)arg2 withRng:(unk)arg3  ;
+(void)shuffleMutableArray:(id)arg0 inRange:(struct _NSRange )arg1 withRng:(id)arg2 ;
+(void)shuffleMutableArray:(id)arg0 withRng:(id)arg1 ;


@end


#endif