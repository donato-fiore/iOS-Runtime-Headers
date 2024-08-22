// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCITYSCAPEWALLPAPERSUGGESTIONCANDIDATE_H
#define PGCITYSCAPEWALLPAPERSUGGESTIONCANDIDATE_H

@class PHAsset;

#import <Foundation/Foundation.h>


@interface PGCityscapeWallpaperSuggestionCandidate : NSObject

@property (readonly) PHAsset *asset; // ivar: _asset
@property (readonly) CGFloat cropScore; // ivar: _cropScore
@property (readonly) CGFloat cropZoomRatio; // ivar: _cropZoomRatio
@property (readonly) BOOL passesClockOverlap; // ivar: _passesClockOverlap


-(id)initWithAsset:(id)arg0 ;


@end


#endif