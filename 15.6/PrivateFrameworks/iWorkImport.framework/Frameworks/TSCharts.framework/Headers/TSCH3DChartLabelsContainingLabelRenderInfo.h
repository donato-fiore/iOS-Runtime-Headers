// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTLABELSCONTAININGLABELRENDERINFO_H
#define TSCH3DCHARTLABELSCONTAININGLABELRENDERINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSCH3DSceneRenderPipeline.h"

@interface TSCH3DChartLabelsContainingLabelRenderInfo : NSObject

@property (readonly, nonatomic) unsigned int alignment; // ivar: _alignment
@property (readonly, nonatomic) tvec2<float> alignmentPadding; // ivar: _alignmentPadding
@property (readonly, nonatomic) tvec2<int> index; // ivar: _index
@property (readonly, nonatomic) tvec3<float> offset; // ivar: _offset
@property (readonly, nonatomic) tvec2<float> offset2D; // ivar: _offset2D
@property (readonly, retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // ivar: _pipeline
@property (readonly, nonatomic) tvec3<float> position; // ivar: _position
@property (readonly, copy, nonatomic) NSString *renderString; // ivar: _renderString
@property (readonly, nonatomic) tvec2<int> resourceIndex; // ivar: _resourceIndex
@property (readonly, nonatomic) float rotation; // ivar: _rotation
@property (readonly, nonatomic) float wrapWidth; // ivar: _wrapWidth


+(id)infoWithPipeline:(id)arg0 index:(struct tvec2<int> )arg1 resourceIndex:(struct tvec2<int> )arg2 renderString:(id)arg3 position:(struct tvec3<float> )arg4 offset:(struct tvec3<float> )arg5 alignment:(unsigned int)arg6 wrapWidth:(float)arg7 offset2D:(struct tvec2<float> )arg8 rotation:(float)arg9 alignmentPadding:(struct tvec2<float> )arg10 ;
-(id)initWithPipeline:(id)arg0 index:(struct tvec2<int> )arg1 resourceIndex:(struct tvec2<int> )arg2 renderString:(id)arg3 position:(struct tvec3<float> )arg4 offset:(struct tvec3<float> )arg5 alignment:(unsigned int)arg6 wrapWidth:(float)arg7 offset2D:(struct tvec2<float> )arg8 rotation:(float)arg9 alignmentPadding:(struct tvec2<float> )arg10 ;


@end


#endif