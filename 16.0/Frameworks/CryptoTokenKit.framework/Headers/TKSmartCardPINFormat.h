// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKSMARTCARDPINFORMAT_H
#define TKSMARTCARDPINFORMAT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TKSmartCardPINFormat : NSObject <NSSecureCoding, NSCopying>



@property NSInteger PINBitOffset; // ivar: _PINBitOffset
@property NSInteger PINBlockByteLength; // ivar: _PINBlockByteLength
@property NSInteger PINJustification; // ivar: _PINJustification
@property NSInteger PINLengthBitOffset; // ivar: _PINLengthBitOffset
@property NSInteger PINLengthBitSize; // ivar: _PINLengthBitSize
@property NSInteger charset; // ivar: _charset
@property NSInteger encoding; // ivar: _encoding
@property NSInteger maxPINLength; // ivar: _maxPINLength
@property NSInteger minPINLength; // ivar: _minPINLength


+(BOOL)supportsSecureCoding;
+(void)_writeNumber:(NSUInteger)arg0 into:(id)arg1 bitOffset:(NSInteger)arg2 bitLength:(NSInteger)arg3 ;
-(BOOL)fillPIN:(id)arg0 intoAPDUTemplate:(id)arg1 PINByteOffset:(NSInteger)arg2 error:(*id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif