// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLMORPHDEFORMER_H
#define MDLMORPHDEFORMER_H

@class NSString, NSArray, NSData;
@protocol NSCopying, MDLMorphDeformerComponent;

#import <Foundation/Foundation.h>

#import "MDLAnimatedScalarArray.h"

@interface MDLMorphDeformer : NSObject <NSCopying, MDLMorphDeformerComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *shapeSetTargetCounts;
@property (readonly, nonatomic) NSArray *shapeSetTargetWeights;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *targetCounts; // ivar: _targetCounts
@property (readonly, nonatomic) NSArray *targetShapes; // ivar: _targetShapes
@property (retain, nonatomic) NSData *targetWeights; // ivar: _targetWeights
@property (retain, nonatomic) MDLAnimatedScalarArray *weights; // ivar: _weights


-(NSUInteger)copyShapeSetTargetCountsInto:(*unsigned int)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)copyShapeSetTargetWeightsInto:(*float)arg0 maxCount:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOther:(id)arg0 ;
-(id)initWithTargetShapes:(id)arg0 shapeSetTargetWeights:(*float)arg1 count:(NSUInteger)arg2 shapeSetTargetCounts:(*unsigned int)arg3 count:(NSUInteger)arg4 ;
-(id)initWithTargetShapes:(id)arg0 shapeSetTargetWeights:(id)arg1 shapeSetTargetCounts:(id)arg2 ;


@end


#endif