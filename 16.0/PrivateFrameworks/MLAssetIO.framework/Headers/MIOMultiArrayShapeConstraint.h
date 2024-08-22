// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIOMULTIARRAYSHAPECONSTRAINT_H
#define MIOMULTIARRAYSHAPECONSTRAINT_H

@class NSOrderedSet, NSArray;

#import <Foundation/Foundation.h>


@interface MIOMultiArrayShapeConstraint : NSObject {
    NSOrderedSet *_shapeSet;
}


@property (readonly, copy, nonatomic) NSArray *enumeratedShapes;
@property (readonly, copy, nonatomic) NSArray *sizeRangeForDimension; // ivar: _sizeRangeForDimension
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEnumeratedShapes:(id)arg0 ;
-(id)initWithSizeRangeForDimension:(id)arg0 ;
-(id)initWithSpecification:(*void)arg0 ;


@end


#endif