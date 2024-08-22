// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYDISPLAYASSETSINFO_H
#define _PXSTORYDISPLAYASSETSINFO_H

@protocol PXStoryTimelineStyle;

#import <Foundation/Foundation.h>

#import "_PXStoryDisplayAssetsFetchResult.h"

@interface _PXStoryDisplayAssetsInfo : NSObject {
    _PXStoryDisplayAssetsFetchResult *_displayAssets;
    id<PXStoryTimelineStyle> *_timelineStyle;
    NSInteger _capacity;
    *NSInteger _originalPlaybackStyles;
    NSInteger _oneUpPlaybackStyle;
    *NSInteger _nUpPlaybackStyles;
}


@property (readonly, nonatomic) *? assetContentInfos; // ivar: _assetContentInfos
@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) *NSInteger nUpPlaybackStyles;
@property (readonly, nonatomic) *NSInteger oneUpPlaybackStyles;
@property (readonly, nonatomic) *NSInteger originalPlaybackStyles;


-(id)displayAssetsWithCount:(NSInteger)arg0 ;
-(id)init;
-(void)configureWithRange:(struct _NSRange )arg0 resourcesDataSource:(id)arg1 timelineStyle:(id)arg2 nUpPlaybackStyleMapping:(*NSInteger)arg3 ;
-(void)dealloc;


@end


#endif