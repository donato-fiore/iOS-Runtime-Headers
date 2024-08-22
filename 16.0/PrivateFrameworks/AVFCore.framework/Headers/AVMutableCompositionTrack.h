// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMUTABLECOMPOSITIONTRACK_H
#define AVMUTABLECOMPOSITIONTRACK_H

@class NSString, NSArray;


#import "AVCompositionTrack.h"
#import "AVMutableCompositionTrackInternal.h"

@interface AVMutableCompositionTrack : AVCompositionTrack {
    AVMutableCompositionTrackInternal *_mutablePriv;
}


@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) int naturalTimeScale;
@property (nonatomic) CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (copy, nonatomic) NSArray *segments;


+(BOOL)expectsPropertyRevisedNotifications;
-(BOOL)insertTimeRange:(struct ? )arg0 ofTrack:(id)arg1 atTime:(struct ? )arg2 error:(*id)arg3 ;
-(BOOL)insertTimeRanges:(id)arg0 ofTracks:(id)arg1 atTime:(struct ? )arg2 error:(*id)arg3 ;
-(BOOL)validateTrackSegments:(id)arg0 error:(*id)arg1 ;
-(NSInteger)alternateGroupID;
-(void)_notifyAssetThatDurationDidChangeWithSuccess:(BOOL)arg0 ;
-(void)_notifyAssetThatDurationWillChange;
-(void)_notifySelfThatSegmentsDidChangeWithSuccess:(BOOL)arg0 ;
-(void)_notifySelfThatSegmentsWillChange;
-(void)_setTrackReaderPropertyValue:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(void)_updateTrackAssociationToTrack:(id)arg0 type:(id)arg1 operation:(NSInteger)arg2 ;
-(void)addTrackAssociationToTrack:(id)arg0 type:(id)arg1 ;
-(void)insertEmptyTimeRange:(struct ? )arg0 ;
-(void)removeTimeRange:(struct ? )arg0 ;
-(void)removeTrackAssociationToTrack:(id)arg0 type:(id)arg1 ;
-(void)replaceFormatDescription:(struct opaqueCMFormatDescription *)arg0 withFormatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(void)scaleTimeRange:(struct ? )arg0 toDuration:(struct ? )arg1 ;
-(void)setAlternateGroupID:(NSInteger)arg0 ;
-(void)setMetadata:(id)arg0 ;


@end


#endif