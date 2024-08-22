// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTSELECTEDELEMENTHIGHLIGHTSCENEOBJECTPROPERTIES_H
#define TSCH3DCHARTSELECTEDELEMENTHIGHLIGHTSCENEOBJECTPROPERTIES_H


#import <Foundation/Foundation.h>

#import "TSCH3Dvec3DataBuffer.h"
#import "TSCH3DPrefilteredLineRenderer.h"

@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject {
    TSCH3Dvec3DataBuffer *edgeVertices;
    TSCH3DPrefilteredLineRenderer *_renderer;
}


@property (nonatomic) tvec4<float> color; // ivar: _color
@property (retain, nonatomic) TSCH3Dvec3DataBuffer *edgeVertices; // ivar: _edgeVertices
@property (readonly, nonatomic) TSCH3DPrefilteredLineRenderer *renderer;
@property (nonatomic) NSUInteger selectedSeriesIndex; // ivar: _selectedSeriesIndex


-(id)init;


@end


#endif