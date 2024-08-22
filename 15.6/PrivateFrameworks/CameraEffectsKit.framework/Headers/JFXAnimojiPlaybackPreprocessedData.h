// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXANIMOJIPLAYBACKPREPROCESSEDDATA_H
#define JFXANIMOJIPLAYBACKPREPROCESSEDDATA_H

@class NSDictionary, ARFrame, AVDepthData;

#import <Foundation/Foundation.h>


@interface JFXAnimojiPlaybackPreprocessedData : NSObject

@property (readonly, nonatomic) NSDictionary *animojiBlendShapes; // ivar: _animojiBlendShapes
@property (readonly, nonatomic) ARFrame *arFrame; // ivar: _arFrame
@property (readonly, nonatomic) AVDepthData *avDepthData; // ivar: _avDepthData
@property (readonly, nonatomic) ? mediaTimeRangeForData; // ivar: _mediaTimeRangeForData
@property (readonly, nonatomic) ? time; // ivar: _time


-(id)initForRenderTime:(struct ? )arg0 usingDataFromMediaTimeRange:(struct ? )arg1 arFrame:(id)arg2 avDepthData:(id)arg3 animojiBlendShapes:(id)arg4 ;


@end


#endif