// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCOMPOSITIONTRACK_H
#define AVCOMPOSITIONTRACK_H

@class NSArray;


#import "AVAssetTrack.h"
#import "AVCompositionTrackInternal.h"

@interface AVCompositionTrack : AVAssetTrack {
    AVCompositionTrackInternal *_priv;
}


@property (readonly) NSArray *formatDescriptionReplacements;
@property (readonly, copy, nonatomic) NSArray *segments;


-(BOOL)isEnabled;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)description;
-(id)segmentForTrackTime:(struct ? )arg0 ;
-(struct OpaqueFigMutableComposition *)_mutableComposition;
-(void)dealloc;


@end


#endif