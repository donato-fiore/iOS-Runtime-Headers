// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIONUMERICCONSTRAINT_H
#define MIONUMERICCONSTRAINT_H

@class NSString, NSSet, NSNumber;
@protocol MIOFeatureValueConstraint;

#import <Foundation/Foundation.h>


@interface MIONumericConstraint : NSObject <MIOFeatureValueConstraint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *enumeratedNumbers; // ivar: _enumeratedNumbers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *maxNumber; // ivar: _maxNumber
@property (readonly, nonatomic) NSNumber *minNumber; // ivar: _minNumber
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEnumeratedNumbers:(id)arg0 ;
-(id)initWithMinimum:(id)arg0 maximum:(id)arg1 ;


@end


#endif