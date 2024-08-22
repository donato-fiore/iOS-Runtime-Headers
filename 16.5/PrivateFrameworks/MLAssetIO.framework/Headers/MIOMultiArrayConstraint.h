// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIOMULTIARRAYCONSTRAINT_H
#define MIOMULTIARRAYCONSTRAINT_H

@class NSString, NSArray;
@protocol MIOFeatureValueConstraint;

#import <Foundation/Foundation.h>

#import "MIOMultiArrayShapeConstraint.h"

@interface MIOMultiArrayConstraint : NSObject <MIOFeatureValueConstraint>

 {
    ArrayFeatureType _arrayFeatureTypeParams;
}


@property (readonly, nonatomic) NSInteger dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, copy, nonatomic) MIOMultiArrayShapeConstraint *shapeConstraint; // ivar: _shapeConstraint
@property (readonly) Class superclass;


-(*void)arrayFeatureTypeSpecification;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpecification:(*void)arg0 ;


@end


#endif