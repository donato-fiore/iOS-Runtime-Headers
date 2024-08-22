// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNCOMPARISONPROPERTYQUERY_H
#define LNCOMPARISONPROPERTYQUERY_H

@class NSString, NSNumber;


#import "LNPropertyQuery.h"
#import "LNValue.h"

@interface LNComparisonPropertyQuery : LNPropertyQuery

@property (readonly, copy, nonatomic) NSString *propertyIdentifier;
@property (readonly, copy, nonatomic) NSNumber *propertyIndex; // ivar: _propertyIndex
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) LNValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyIdentifier:(id)arg0 value:(id)arg1 type:(NSUInteger)arg2 ;
-(id)initWithPropertyIndex:(id)arg0 value:(id)arg1 type:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif