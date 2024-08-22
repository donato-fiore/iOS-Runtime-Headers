// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKRELATIONSHIPCONCEPTSELECTION_H
#define HKRELATIONSHIPCONCEPTSELECTION_H



#import "HKConceptSelection.h"

@interface HKRelationshipConceptSelection : HKConceptSelection

@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, copy, nonatomic) HKConceptSelection *selection; // ivar: _selection
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDirection:(NSUInteger)arg0 type:(NSInteger)arg1 selection:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif