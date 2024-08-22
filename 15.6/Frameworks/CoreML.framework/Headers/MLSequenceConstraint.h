// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLSEQUENCECONSTRAINT_H
#define MLSEQUENCECONSTRAINT_H

@protocol MLFeatureValueConstraint, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLFeatureDescription.h"

@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) _NSRange countRange; // ivar: _countRange
@property (readonly, nonatomic) MLFeatureDescription *valueDescription; // ivar: _valueDescription


+(BOOL)supportsSecureCoding;
-(BOOL)isAllowedValue:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValueDescription:(id)arg0 countRange:(struct _NSRange )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif