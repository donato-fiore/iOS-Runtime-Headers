// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUBITCODER_H
#define CUBITCODER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CUBitCoder : NSObject

@property (copy, nonatomic) id *decryptHandler; // ivar: _decryptHandler
@property (copy, nonatomic) id *encryptHandler; // ivar: _encryptHandler
@property (copy, nonatomic) NSDictionary *schema; // ivar: _schema


-(NSUInteger)_readValue:(struct __CFBitVector *)arg0 bitCount:(unsigned int)arg1 bitIndex:(*unsigned int)arg2 err:(*int)arg3 ;
-(id)decodeBytes:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)decodeBytes:(*void)arg0 length:(NSUInteger)arg1 info:(id)arg2 error:(*id)arg3 ;
-(id)decodeData:(id)arg0 error:(*id)arg1 ;
-(id)decodeData:(id)arg0 info:(id)arg1 error:(*id)arg2 ;
-(id)encodeFields:(id)arg0 variantIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)encodeFields:(id)arg0 variantIdentifier:(id)arg1 info:(id)arg2 error:(*id)arg3 ;
-(void)_writeValue:(NSUInteger)arg0 bitCount:(unsigned int)arg1 bitVector:(struct __CFBitVector *)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif