// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMULTIARRAYSHAPECONSTRAINT_H
#define MLMULTIARRAYSHAPECONSTRAINT_H

@class NSArray, NSOrderedSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLMultiArrayShapeConstraint : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *enumeratedShapes;
@property (readonly, nonatomic) NSOrderedSet *shapeSet; // ivar: _shapeSet
@property (readonly, nonatomic) NSArray *sizeRangeForDimension; // ivar: _sizeRangeForDimension
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isAllowedShape:(id)arg0 error:(*id)arg1 ;
-(id)findAvailableShape:(id)arg0 ;
-(id)initUnspecified;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnumeratedShapes:(id)arg0 ;
-(id)initWithSizeRangeForDimension:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif