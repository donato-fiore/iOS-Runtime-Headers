// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPETWALLPAPERSUGGESTIONCANDIDATE_H
#define PGPETWALLPAPERSUGGESTIONCANDIDATE_H

@class PHAsset, PHFace;

#import <Foundation/Foundation.h>


@interface PGPetWallpaperSuggestionCandidate : NSObject

@property (readonly) PHAsset *asset; // ivar: _asset
@property (readonly) CGFloat cropScore; // ivar: _cropScore
@property (readonly) CGFloat cropZoomRatio; // ivar: _cropZoomRatio
@property (readonly) PHFace *face; // ivar: _face
@property (readonly) BOOL passesClockOverlap; // ivar: _passesClockOverlap


-(id)initWithFace:(id)arg0 inAsset:(id)arg1 ;


@end


#endif