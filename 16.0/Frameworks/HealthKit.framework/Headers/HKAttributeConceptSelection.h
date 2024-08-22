// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKATTRIBUTECONCEPTSELECTION_H
#define HKATTRIBUTECONCEPTSELECTION_H

@protocol NSCopying><NSSecureCoding><NSObject;


#import "HKConceptSelection.h"

@interface HKAttributeConceptSelection : HKConceptSelection

@property (readonly, nonatomic) NSUInteger operatorType; // ivar: _operatorType
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSObject<NSCopying><NSSecureCoding><NSObject> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAttribute:(NSInteger)arg0 operatorType:(NSUInteger)arg1 value:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif