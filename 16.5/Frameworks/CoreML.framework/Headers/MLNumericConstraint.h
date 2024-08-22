// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLNUMERICCONSTRAINT_H
#define MLNUMERICCONSTRAINT_H

@class NSSet, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLNumericConstraint : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSSet *enumeratedNumbers; // ivar: _enumeratedNumbers
@property (retain, nonatomic) NSNumber *maxNumber; // ivar: _maxNumber
@property (retain, nonatomic) NSNumber *minNumber; // ivar: _minNumber


+(BOOL)supportsSecureCoding;
+(id)numericConstraintWithEnumeratedNumbers:(id)arg0 ;
+(id)numericConstraintWithMinNumber:(id)arg0 maxNumber:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif