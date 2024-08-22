// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBOR_H
#define CBOR_H

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CBOR.h"

@interface CBOR : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *array;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) BOOL isBoolean;
@property (readonly, nonatomic) BOOL isDate;
@property (readonly, nonatomic) BOOL isFloatNumber;
@property (readonly, nonatomic) BOOL isWholeNumber;
@property (readonly, nonatomic) NSInteger longLongValue;
@property (readonly, nonatomic) NSNumber *numeric;
@property (retain, nonatomic) NSArray *orderedKeys; // ivar: _orderedKeys
@property (readonly, nonatomic) NSString *string;
@property (retain, nonatomic) CBOR *tag; // ivar: _tag
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSUInteger unsignedLongLongValue;
@property (retain, nonatomic) id *value; // ivar: _value
@property (nonatomic) NSInteger valueSize; // ivar: _valueSize


+(id)cborFalse;
+(id)cborNil;
+(id)cborTrue;
+(id)cborWithArray:(id)arg0 ;
+(id)cborWithCOSE:(id)arg0 ;
+(id)cborWithCOSEKey:(id)arg0 ;
+(id)cborWithData:(id)arg0 ;
+(id)cborWithDateTime:(id)arg0 ;
+(id)cborWithDictionary:(id)arg0 ;
+(id)cborWithDictionary:(id)arg0 keyOrderList:(id)arg1 ;
+(id)cborWithDouble:(CGFloat)arg0 ;
+(id)cborWithFloat:(float)arg0 ;
+(id)cborWithFullDate:(id)arg0 ;
+(id)cborWithHalfFloat:(float)arg0 ;
+(id)cborWithInteger:(NSInteger)arg0 ;
+(id)cborWithUTF8String:(id)arg0 ;
+(id)cborWithUnsignedInteger:(NSUInteger)arg0 ;
+(id)decodeFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asJSON;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCbor:(id)arg0 tag:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 value:(id)arg1 valueSize:(NSInteger)arg2 tag:(id)arg3 ;


@end


#endif