// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPCMSSAMPLE_H
#define _DPCMSSAMPLE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _DPCMSSample : NSObject

@property (readonly, nonatomic) NSData *bitString; // ivar: _bitString
@property (readonly, nonatomic) NSUInteger hashFunctionIndex; // ivar: _hashFunctionIndex


+(id)cmsSampleWith:(id)arg0 privacyParameter:(CGFloat)arg1 hashFunctionCount:(NSUInteger)arg2 bitCount:(NSUInteger)arg3 ;
+(id)convertToHexString:(id)arg0 ;
+(id)dataFor:(id)arg0 hashAtIndex:(NSUInteger)arg1 privacyParameter:(CGFloat)arg2 bitCount:(NSUInteger)arg3 ;
+(id)jsonStringFrom:(id)arg0 hashIndex:(NSUInteger)arg1 ;
+(id)jsonStringFromSequence:(id)arg0 sequenceHashIndex:(unsigned short)arg1 fragment:(id)arg2 fragmentHashIndex:(unsigned short)arg3 fragmentPosition:(unsigned short)arg4 ;
-(id)init;
-(id)initWith:(id)arg0 privacyParameter:(CGFloat)arg1 hashFunctionCount:(NSUInteger)arg2 bitCount:(NSUInteger)arg3 ;


@end


#endif