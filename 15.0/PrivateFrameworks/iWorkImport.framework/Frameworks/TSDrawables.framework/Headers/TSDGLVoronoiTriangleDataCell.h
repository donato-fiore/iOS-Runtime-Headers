// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLVORONOITRIANGLEDATACELL_H
#define TSDGLVORONOITRIANGLEDATACELL_H


#import <Foundation/Foundation.h>


@interface TSDGLVoronoiTriangleDataCell : NSObject

@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) ? centerPoint; // ivar: _centerPoint
@property (readonly, nonatomic) NSUInteger triangleCount; // ivar: _triangleCount
@property (readonly, nonatomic) NSUInteger vertexCount; // ivar: _vertexCount
@property (readonly, nonatomic) *? vertexData; // ivar: _vertexData


-(id)cellsBySplittingCellIntoTriangles;
-(id)initWithEdges:(struct vector<boost::polygon::segment_data<double>, std::allocator<boost::polygon::segment_data<double>>> )arg0 ;
-(id)initWithTrianglePoints:(struct ? *)arg0 ;
-(void)dealloc;
-(void)p_setupTriangleDataWithEdges:(struct vector<boost::polygon::segment_data<double>, std::allocator<boost::polygon::segment_data<double>>> )arg0 ;


@end


#endif