// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMULTIARRAYCONSTRAINT_H
#define MLMULTIARRAYCONSTRAINT_H

@class NSArray;
@protocol MLFeatureValueConstraint, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLMultiArrayShapeConstraint.h"

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger dataType; // ivar: _dataType
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) MLMultiArrayShapeConstraint *shapeConstraint; // ivar: _shapeConstraint


+(BOOL)supportsSecureCoding;
+(id)constraintWithShape:(id)arg0 dataType:(NSInteger)arg1 ;
+(id)constraintWithShape:(id)arg0 dataType:(NSInteger)arg1 shapeConstraint:(id)arg2 ;
-(BOOL)isAllowedDataType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isAllowedShape:(id)arg0 error:(*id)arg1 ;
-(BOOL)isAllowedValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isAllowedValue:(id)arg0 isNeuralNetworkInputOrOutput:(BOOL)arg1 usingRank5Mapping:(BOOL)arg2 featureName:(id)arg3 error:(*id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShape:(id)arg0 dataType:(NSInteger)arg1 shapeConstraint:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif