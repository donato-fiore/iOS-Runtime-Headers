// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NULIVEPHOTORENDERRESULT_H
#define _NULIVEPHOTORENDERRESULT_H

@class NURenderResult, NSString, AVAsset, AVVideoComposition;
@protocol NULivePhotoRenderResult, NURenderStatistics;


#import "NUImageGeometry.h"

@interface _NULivePhotoRenderResult : NURenderResult <NULivePhotoRenderResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) *CGImage photo; // ivar: _photo
@property ? photoTime; // ivar: _photoTime
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;
@property (retain) AVAsset *video; // ivar: _video
@property (retain) AVVideoComposition *videoComposition; // ivar: _videoComposition
@property (retain) NUImageGeometry *videoGeometry; // ivar: _videoGeometry


-(void)dealloc;


@end


#endif