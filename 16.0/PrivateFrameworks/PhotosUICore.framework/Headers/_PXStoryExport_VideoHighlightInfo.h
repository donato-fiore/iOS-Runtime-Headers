// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYEXPORT_VIDEOHIGHLIGHTINFO_H
#define _PXSTORYEXPORT_VIDEOHIGHLIGHTINFO_H

@class PHAsset;

#import <Foundation/Foundation.h>


@interface _PXStoryExport_VideoHighlightInfo : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (nonatomic) ? audioInfo; // ivar: _audioInfo
@property (nonatomic) ? loadedVideoPlaybackStartTime; // ivar: _loadedVideoPlaybackStartTime
@property (nonatomic) ? loadingVideoTimeRange; // ivar: _loadingVideoTimeRange
@property (nonatomic) ? storyPlaybackRange; // ivar: _storyPlaybackRange


-(id)description;
-(id)initWithAsset:(id)arg0 loadingVideoTimeRange:(struct ? )arg1 loadedVideoPlaybackStartTime:(struct ? )arg2 storyPlaybackRange:(struct ? )arg3 audioInfo:(struct ? )arg4 ;


@end


#endif