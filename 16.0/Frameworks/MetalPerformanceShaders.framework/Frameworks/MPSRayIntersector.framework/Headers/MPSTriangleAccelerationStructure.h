// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTRIANGLEACCELERATIONSTRUCTURE_H
#define MPSTRIANGLEACCELERATIONSTRUCTURE_H



#import "MPSPolygonAccelerationStructure.h"

@interface MPSTriangleAccelerationStructure : MPSPolygonAccelerationStructure

@property (nonatomic) NSUInteger triangleCount;


-(id)initWithDevice:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(void)setPolygonType:(NSUInteger)arg0 ;


@end


#endif