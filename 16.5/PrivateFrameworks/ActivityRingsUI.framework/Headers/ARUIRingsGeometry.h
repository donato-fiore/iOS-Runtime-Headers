// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGSGEOMETRY_H
#define ARUIRINGSGEOMETRY_H


#import <Foundation/Foundation.h>


@interface ARUIRingsGeometry : NSObject

@property (nonatomic) unsigned int circleSegments; // ivar: _circleSegments
@property (nonatomic) float endingRadian; // ivar: _endingRadian
@property (nonatomic) float startingRadian; // ivar: _startingRadian


-(*unsigned short)connectedIndiciesGeometry;
-(*unsigned short)disconnectedIndiciesGeometry;
-(id)init;
-(unsigned int)disconnectedIndexCount;
-(unsigned int)indexCount;
-(unsigned int)vertexCount;
-(void)enumerateVertexGeometryWithBlock:(id)arg0 ;


@end


#endif