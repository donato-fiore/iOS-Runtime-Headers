// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNVALUE_H
#define LNVALUE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNDisplayRepresentation.h"
#import "LNValueType.h"

@interface LNValue : NSObject <NSSecureCoding>



@property (copy, nonatomic) LNDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, copy, nonatomic) id *value; // ivar: _value
@property (readonly, copy, nonatomic) LNValueType *valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 valueType:(id)arg1 ;
-(id)initWithValue:(id)arg0 valueType:(id)arg1 displayRepresentation:(id)arg2 ;
-(id)initWithValues:(id)arg0 memberValueType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif