// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNPRIMITIVEVALUETYPE_H
#define LNPRIMITIVEVALUETYPE_H

@class NSString;


#import "LNValueType.h"

@interface LNPrimitiveValueType : LNValueType

@property (readonly, nonatomic) NSInteger typeIdentifier; // ivar: _typeIdentifier
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;


+(BOOL)supportsSecureCoding;
+(id)URLValueType;
+(id)attributedStringValueType;
+(id)boolValueType;
+(id)dateComponentsValueType;
+(id)dateValueType;
+(id)doubleValueType;
+(id)int16ValueType;
+(id)int32ValueType;
+(id)int64ValueType;
+(id)int8ValueType;
+(id)intValueType;
+(id)placemarkValueType;
+(id)stringValueType;
-(BOOL)isEqual:(id)arg0 ;
-(Class)objectClass;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeIdentifier:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif