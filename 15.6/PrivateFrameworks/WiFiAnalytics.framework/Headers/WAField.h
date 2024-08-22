// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WAFIELD_H
#define WAFIELD_H

@class NSString, NSData, NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WAMessageAWD.h"

@interface WAField : NSObject <NSCopying, NSSecureCoding>

 {
    id *_value;
    NSString *_typeInfoForRepeatableSubmessage;
}


@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) CGFloat doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int int32Value;
@property (nonatomic) NSInteger int64Value;
@property (nonatomic) BOOL isRepeatable; // ivar: _isRepeatable
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSMutableArray *repeatableValues;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) WAMessageAWD *subMessageValue;
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) NSUInteger uint64Value;


+(BOOL)supportsSecureCoding;
-(BOOL)isNumerical;
-(id)_ownTypeAsString;
-(id)_typeAsString:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 isRepeatable:(BOOL)arg1 andKey:(id)arg2 andTypeInfoForRepeatableSubmessage:(id)arg3 ;
-(id)initWithType:(NSInteger)arg0 isRepeatable:(BOOL)arg1 key:(id)arg2 repeatableValues:(id)arg3 doubleValue:(CGFloat)arg4 floatValue:(float)arg5 int32Value:(int)arg6 int64Value:(NSInteger)arg7 uint32Val:(unsigned int)arg8 uint64Value:(NSUInteger)arg9 boolValue:(BOOL)arg10 stringValue:(id)arg11 bytesValue:(id)arg12 subMessageValue:(id)arg13 andTypeInfoForRepeatableSubmessage:(id)arg14 ;
-(void)_addRepeatableValue:(id)arg0 ;
-(void)_throwIncorrecTypeExceptionForType:(NSInteger)arg0 isGet:(BOOL)arg1 ;
-(void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(BOOL)arg0 isGet:(BOOL)arg1 forType:(NSInteger)arg2 ;
-(void)addRepeatableBoolValue:(BOOL)arg0 ;
-(void)addRepeatableBytes:(id)arg0 ;
-(void)addRepeatableDoubleValue:(CGFloat)arg0 ;
-(void)addRepeatableFloatValue:(float)arg0 ;
-(void)addRepeatableInt32Value:(int)arg0 ;
-(void)addRepeatableInt64Value:(NSInteger)arg0 ;
-(void)addRepeatableString:(id)arg0 ;
-(void)addRepeatableSubMessageValue:(id)arg0 ;
-(void)addRepeatableUInt32Value:(unsigned int)arg0 ;
-(void)addRepeatableUInt64Value:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif