// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPHCMSSAMPLE_H
#define _DPHCMSSAMPLE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _DPHCMSSample : NSObject

@property (readonly, nonatomic) NSUInteger bitIndex; // ivar: _bitIndex
@property (readonly, nonatomic) NSData *bitString; // ivar: _bitString
@property (readonly, nonatomic) NSUInteger hashFunctionIndex; // ivar: _hashFunctionIndex


+(id)convertDataToString:(id)arg0 ;
+(id)dataFor:(id)arg0 hashAtIndex:(NSUInteger)arg1 epsilon:(CGFloat)arg2 bitCount:(NSUInteger)arg3 bitIndex:(NSUInteger)arg4 ;
+(id)hcmsSampleWith:(id)arg0 privacyParameter:(CGFloat)arg1 hashFunctionCount:(NSUInteger)arg2 bitCount:(NSUInteger)arg3 ;
+(id)jsonStringFrom:(id)arg0 hashIndex:(NSUInteger)arg1 bitIndex:(NSUInteger)arg2 ;
+(id)jsonStringFromSequence:(id)arg0 sequenceHashIndex:(unsigned short)arg1 sequencebitIndex:(NSUInteger)arg2 fragment:(id)arg3 fragmentHashIndex:(unsigned short)arg4 fragmentbitIndex:(NSUInteger)arg5 fragmentPosition:(unsigned short)arg6 ;
-(id)init;
-(id)initWith:(id)arg0 privacyParameter:(CGFloat)arg1 hashFunctionCount:(NSUInteger)arg2 bitCount:(NSUInteger)arg3 ;


@end


#endif