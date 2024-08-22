// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMUTABLECOMPOSITION_H
#define AVMUTABLECOMPOSITION_H

@class NSArray;


#import "AVComposition.h"
#import "AVMutableCompositionInternal.h"

@interface AVMutableComposition : AVComposition {
    AVMutableCompositionInternal *_mutablePriv;
}


@property (nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) NSArray *tracks;


+(id)composition;
+(id)compositionWithURLAssetInitializationOptions:(id)arg0 ;
-(BOOL)insertTimeRange:(struct ? )arg0 ofAsset:(id)arg1 atTime:(struct ? )arg2 error:(*id)arg3 ;
-(id)_initWithComposition:(id)arg0 ;
-(id)_newTrackForIndex:(NSInteger)arg0 ;
-(id)addMutableTrackWithMediaType:(id)arg0 preferredTrackID:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg0 ;
-(id)trackWithTrackID:(int)arg0 ;
-(id)tracksWithMediaCharacteristic:(id)arg0 ;
-(id)tracksWithMediaType:(id)arg0 ;
-(void)_notifyTracksThatSegmentsDidChange:(id)arg0 successfully:(BOOL)arg1 ;
-(void)_notifyTracksThatSegmentsWillChange:(id)arg0 ;
-(void)insertEmptyTimeRange:(struct ? )arg0 ;
-(void)insertTimeRange:(struct ? )arg0 ofAsset:(id)arg1 atTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)removeTimeRange:(struct ? )arg0 ;
-(void)removeTrack:(id)arg0 ;
-(void)scaleTimeRange:(struct ? )arg0 toDuration:(struct ? )arg1 ;
-(void)setMetadata:(id)arg0 ;


@end


#endif