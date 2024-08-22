// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXCOMPOSITIONITEM_H
#define JFXCOMPOSITIONITEM_H

@protocol JFXPlayableElement;

#import <Foundation/Foundation.h>


@interface JFXCompositionItem : NSObject

@property (nonatomic) ? audioEndOffset; // ivar: _audioEndOffset
@property (nonatomic) ? audioStartOffset; // ivar: _audioStartOffset
@property (retain, nonatomic) NSObject<JFXPlayableElement> *clip; // ivar: _clip
@property (nonatomic) ? destinationDuration; // ivar: _destinationDuration
@property (readonly, nonatomic) BOOL hasVideoContent;
@property (nonatomic) BOOL isFinalClip; // ivar: _isFinalClip
@property (readonly, nonatomic) BOOL isFreezeFrame; // ivar: _isFreezeFrame
@property (readonly, nonatomic) BOOL isWaitingForResource; // ivar: _isWaitingForResource
@property (readonly, nonatomic) BOOL needAudioLoop;
@property (readonly, nonatomic) BOOL needSilenceAtEnd;
@property (nonatomic) ? sourceTimeRange; // ivar: _sourceTimeRange
@property (nonatomic) float speed; // ivar: _speed
@property (nonatomic) int timeScale; // ivar: _timeScale


+(id)compositionItemWithClip:(id)arg0 timeScale:(int)arg1 ;
+(id)silenceAsset;
+(void)mediaserverdCrashed;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 paddedFromTime:(struct ? )arg1 ;
-(id)debugDescription;
-(id)description;
-(id)emptyTrackSegmentWithDestinationRange:(struct ? )arg0 ;
-(id)emptyTrackSegmentWithDestinationTime:(struct ? )arg0 ;
-(id)initWithClip:(id)arg0 timeScale:(int)arg1 ;
-(id)videoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif