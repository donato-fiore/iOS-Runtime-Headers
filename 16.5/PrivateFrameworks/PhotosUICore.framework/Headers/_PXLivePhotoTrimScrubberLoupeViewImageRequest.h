// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXLIVEPHOTOTRIMSCRUBBERLOUPEVIEWIMAGEREQUEST_H
#define _PXLIVEPHOTOTRIMSCRUBBERLOUPEVIEWIMAGEREQUEST_H

@class AVAsset, AVVideoComposition;

#import <Foundation/Foundation.h>


@interface _PXLivePhotoTrimScrubberLoupeViewImageRequest : NSObject

@property (retain, nonatomic) AVAsset *asset; // ivar: _asset
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) ? sourceTime; // ivar: _sourceTime
@property (retain, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition


-(BOOL)isEqual:(id)arg0 ;


@end


#endif