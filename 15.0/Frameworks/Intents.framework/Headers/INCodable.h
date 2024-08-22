// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLE_H
#define INCODABLE_H

@class PBCodable, NSMutableDictionary;
@protocol NSCopying;


#import "INCodableDescription.h"

@interface INCodable : PBCodable <NSCopying>



@property (retain, nonatomic, setter=_setObjectDescription:) INCodableDescription *_objectDescription; // ivar: _objectDescription
@property (retain, nonatomic) NSMutableDictionary *customValueForKeyDictionary; // ivar: _customValueForKeyDictionary


+(BOOL)supportsSecureCoding;
-(BOOL)_boolValueForAttribute:(id)arg0 ;
-(BOOL)_isAttribute:(id)arg0 equalTo:(id)arg1 ;
-(BOOL)_isStringAttribute:(id)arg0 equalTo:(id)arg1 ;
-(BOOL)_readFrom:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeTo:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidKey:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)_doubleValueForAttribute:(id)arg0 ;
-(NSInteger)_int64ValueForAttribute:(id)arg0 ;
-(NSUInteger)_UInt64ValueForAttribute:(id)arg0 ;
-(NSUInteger)hash;
-(float)_floatValueForAttribute:(id)arg0 ;
-(id)_copyWithZone:(struct _NSZone *)arg0 error:(*id)arg1 ;
-(id)_dataWithError:(*id)arg0 ;
-(id)_dictionaryRepresentationWithNullValues:(BOOL)arg0 ;
-(id)_initWithCodableDescription:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)_nonNilAttributes;
-(id)_nonNilRepeatedAttributes;
-(id)_valueForAttribute:(id)arg0 ;
-(id)_valueForAttribute:(id)arg0 ofClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)dictionaryRepresentation;
-(id)initWithCodableDescription:(id)arg0 data:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)_int32ValueForAttribute:(id)arg0 ;
-(unsigned int)_UInt32ValueForAttribute:(id)arg0 ;
-(void)_setBoolValue:(BOOL)arg0 forAttribute:(id)arg1 ;
-(void)_setDoubleValue:(CGFloat)arg0 forAttribute:(id)arg1 ;
-(void)_setEmptyArrayForNonNilRepeatedAttributes:(id)arg0 ;
-(void)_setFloatValue:(float)arg0 forAttribute:(id)arg1 ;
-(void)_setInt32Value:(int)arg0 forAttribute:(id)arg1 ;
-(void)_setInt64Value:(NSInteger)arg0 forAttribute:(id)arg1 ;
-(void)_setObject:(id)arg0 forAttribute:(id)arg1 ;
-(void)_setUInt32Value:(unsigned int)arg0 forAttribute:(id)arg1 ;
-(void)_setUInt64Value:(NSUInteger)arg0 forAttribute:(id)arg1 ;
-(void)_setValue:(*void)arg0 forAttribute:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNilValueForAllKeys;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif