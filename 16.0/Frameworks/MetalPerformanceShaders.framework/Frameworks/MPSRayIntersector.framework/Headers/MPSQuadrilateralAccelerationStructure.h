// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSQUADRILATERALACCELERATIONSTRUCTURE_H
#define MPSQUADRILATERALACCELERATIONSTRUCTURE_H



#import "MPSPolygonAccelerationStructure.h"

@interface MPSQuadrilateralAccelerationStructure : MPSPolygonAccelerationStructure

@property (nonatomic) NSUInteger quadrilateralCount;


-(id)initWithDevice:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(id)vertexBuffer;
-(void)setPolygonType:(NSUInteger)arg0 ;


@end


#endif