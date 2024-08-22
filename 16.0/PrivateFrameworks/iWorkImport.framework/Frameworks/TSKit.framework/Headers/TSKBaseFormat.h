// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKBASEFORMAT_H
#define TSKBASEFORMAT_H

@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKBaseFormat : TSKFormat <NSCopying>



@property (readonly, nonatomic) unsigned char base; // ivar: _base
@property (readonly, nonatomic) unsigned char basePlaces; // ivar: _basePlaces
@property (readonly, nonatomic) BOOL baseUseMinusSign; // ivar: _baseUseMinusSign


+(id)defaultHexadecimalFormat;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asBaseFormat;
-(id)initWithBase:(unsigned char)arg0 basePlaces:(unsigned char)arg1 baseUseMinusSign:(BOOL)arg2 ;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;


@end


#endif