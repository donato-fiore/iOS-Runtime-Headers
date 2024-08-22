// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTTEXCOORDSHAREDRESOURCE_H
#define TSCH3DCHARTTEXCOORDSHAREDRESOURCE_H



#import "TSCH3DChartMeshSharedResource.h"
#import "TSCH3DTexCoordGeneration.h"
#import "TSCH3Dvec3DataBuffer.h"

@interface TSCH3DChartTexcoordSharedResource : TSCH3DChartMeshSharedResource

@property (retain, nonatomic) TSCH3DTexCoordGeneration *generator; // ivar: _generator
@property (retain, nonatomic) TSCH3Dvec3DataBuffer *normal; // ivar: _normal
@property (retain, nonatomic) TSCH3Dvec3DataBuffer *vertex; // ivar: _vertex


-(id)get;
-(void)dealloc;
-(void)flushMemory;
-(void)setChildRegenerated:(BOOL)arg0 ;


@end


#endif