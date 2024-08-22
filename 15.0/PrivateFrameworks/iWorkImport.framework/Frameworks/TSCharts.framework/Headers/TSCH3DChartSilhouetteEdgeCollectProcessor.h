// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTSILHOUETTEEDGECOLLECTPROCESSOR_H
#define TSCH3DCHARTSILHOUETTEEDGECOLLECTPROCESSOR_H



#import "TSCH3DRetargetRenderProcessor.h"
#import "TSCH3Dvec3DataBuffer.h"
#import "TSCH3DResource.h"

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor {
    EdgeDetectionParameters _edgeDetectionParameters;
}


@property (readonly, nonatomic) TSCH3Dvec3DataBuffer *edges; // ivar: _edges
@property (retain, nonatomic) TSCH3DResource *vertices; // ivar: _vertices


-(NSInteger)attribute:(id)arg0 resource:(id)arg1 specs:(struct AttributeSpecs *)arg2 ;
-(id)initWithEdgeDetectionParameters:(struct EdgeDetectionParameters *)arg0 ;
-(id)matrix;
-(void)submit:(id)arg0 ;


@end


#endif