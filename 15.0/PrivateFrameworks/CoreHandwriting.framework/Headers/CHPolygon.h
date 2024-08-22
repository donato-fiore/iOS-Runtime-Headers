// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHPOLYGON_H
#define CHPOLYGON_H


#import <Foundation/Foundation.h>


@interface CHPolygon : NSObject

@property (nonatomic) CGFloat area; // ivar: _area
@property (readonly, nonatomic) NSInteger vertexCount; // ivar: _vertexCount
@property (readonly, nonatomic) *CGPoint vertices; // ivar: _vertices


+(id)_sutherlandHodgmanClipForSubjectPolygon:(id)arg0 usingClipPolygon:(id)arg1 ;
+(struct CGPoint *)_createClippedPolygonForPolygon:(id)arg0 clippingLine:(struct CHLineSegment )arg1 clippedPolygonVertexCount:(*NSInteger)arg2 ;
-(NSInteger)edgeCountIntersectingLineSegment:(struct CHLineSegment )arg0 ;
-(id)description;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithVertices:(struct CGPoint *)arg0 vertexCount:(NSInteger)arg1 ;
-(id)polygonByIntersectingWithClipPolygon:(id)arg0 ;
-(id)polygonDrawing;
-(void)dealloc;
-(void)enumerateEdgesWithBlock:(id)arg0 ;


@end


#endif