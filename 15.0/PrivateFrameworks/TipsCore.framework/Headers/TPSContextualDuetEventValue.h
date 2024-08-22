// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTEXTUALDUETEVENTVALUE_H
#define TPSCONTEXTUALDUETEVENTVALUE_H

@class NSNumber, NSString;


#import "TPSSerializableObject.h"

@interface TPSContextualDuetEventValue : TPSSerializableObject

@property (copy, nonatomic) NSNumber *boolValue; // ivar: _boolValue
@property (copy, nonatomic) NSNumber *doubleValue; // ivar: _doubleValue
@property (copy, nonatomic) NSNumber *integerValue; // ivar: _integerValue
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) NSUInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif