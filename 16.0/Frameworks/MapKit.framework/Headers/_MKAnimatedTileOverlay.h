// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKANIMATEDTILEOVERLAY_H
#define _MKANIMATEDTILEOVERLAY_H

@class NSNumber;


#import "MKTileOverlay.h"

@interface _MKAnimatedTileOverlay : MKTileOverlay {
    NSNumber *_visibleKeyframeOverride;
}


@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger keyframesCount; // ivar: _keyframesCount
@property (nonatomic) BOOL shouldCrossfade; // ivar: _shouldCrossfade


-(id)URLForTilePath:(struct ? )arg0 keyframeIndex:(NSUInteger)arg1 ;
-(id)initWithURLTemplate:(id)arg0 ;
-(void)cancelLoadingTileAtPath:(struct ? )arg0 keyframeIndex:(NSUInteger)arg1 ;
-(void)loadTileAtPath:(struct ? )arg0 keyframeIndex:(NSUInteger)arg1 result:(id)arg2 ;


@end


#endif