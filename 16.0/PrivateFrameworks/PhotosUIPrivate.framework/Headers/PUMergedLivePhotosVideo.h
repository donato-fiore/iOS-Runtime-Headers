// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUMERGEDLIVEPHOTOSVIDEO_H
#define PUMERGEDLIVEPHOTOSVIDEO_H

@class NSArray, AVAsset, AVVideoComposition;

#import <Foundation/Foundation.h>


@interface PUMergedLivePhotosVideo : NSObject

@property (readonly, copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, copy, nonatomic) NSArray *keyTimes; // ivar: _keyTimes
@property (readonly, nonatomic) AVAsset *mergedVideoAsset; // ivar: _mergedVideoAsset
@property (readonly, nonatomic) AVVideoComposition *mergedVideoComposition; // ivar: _mergedVideoComposition
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSArray *startTimes; // ivar: _startTimes
@property (readonly, nonatomic) CGFloat videoAspectRatio; // ivar: _videoAspectRatio


-(NSInteger)_assetIndexAtTime:(struct ? )arg0 ;
-(id)assetAtTime:(struct ? )arg0 progress:(*CGFloat)arg1 ;
-(id)debugDescription;
-(id)initWithAssets:(id)arg0 startTimes:(id)arg1 keyTimes:(id)arg2 videoAsset:(id)arg3 videoComposition:(id)arg4 videoAspectRatio:(CGFloat)arg5 options:(NSUInteger)arg6 ;


@end


#endif