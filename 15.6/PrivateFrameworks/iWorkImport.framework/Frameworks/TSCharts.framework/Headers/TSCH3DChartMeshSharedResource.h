// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTMESHSHAREDRESOURCE_H
#define TSCH3DCHARTMESHSHAREDRESOURCE_H



#import "TSCH3DChartMeshSharedChildResource.h"
#import "TSCH3DDataBuffer.h"

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource

@property (retain, nonatomic) TSCH3DDataBuffer *mesh; // ivar: _mesh


-(id)get;
-(void)flushMemory;
-(void)setChildRegenerated:(BOOL)arg0 ;


@end


#endif