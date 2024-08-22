// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLIVEPHOTOPLAYBACKRESULT_H
#define PFLIVEPHOTOPLAYBACKRESULT_H

@class AVAsset;

#import <Foundation/Foundation.h>


@interface PFLivePhotoPlaybackResult : NSObject

@property (nonatomic) *CGImage photo; // ivar: _photo
@property (nonatomic) int photoExifOrientation; // ivar: _photoExifOrientation
@property (nonatomic) ? photoTime; // ivar: _photoTime
@property (retain, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset


-(void)dealloc;


@end


#endif