// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETMESSAGE_H
#define ETMESSAGE_H

@class NSMutableSet, UIColor, NSString;
@protocol ETMessageDelegate, ETMessageTimeSource;

#import <Foundation/Foundation.h>

#import "ETMessage.h"

@interface ETMessage : NSObject {
    NSMutableSet *_childrenDelayingWisp;
}


@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) BOOL delayWisp; // ivar: _delayWisp
@property (weak, nonatomic) NSObject<ETMessageDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat messageDuration;
@property (readonly, nonatomic) unsigned short messageType;
@property (readonly, nonatomic) NSUInteger messageVersion; // ivar: _messageVersion
@property (nonatomic) BOOL missedDuringPlayback; // ivar: _missedDuringPlayback
@property (nonatomic) BOOL mute; // ivar: _mute
@property (weak, nonatomic) ETMessage *parentMessage; // ivar: _parentMessage
@property (nonatomic, getter=isRenderingOffscreen) BOOL renderingOffscreen; // ivar: _renderingOffscreen
@property (nonatomic, getter=isRenderingOffscreenOpaque) BOOL renderingOffscreenOpaque; // ivar: _renderingOffscreenOpaque
@property (nonatomic) CGFloat sendTime; // ivar: _sendTime
@property (readonly, nonatomic) BOOL shouldLoopDuringPlayback;
@property (nonatomic) CGFloat startDelay; // ivar: _startDelay
@property (nonatomic) BOOL supportsPlaybackTimeOffset; // ivar: _supportsPlaybackTimeOffset
@property (nonatomic) CGFloat timeCreated; // ivar: _timeCreated
@property (weak, nonatomic) NSObject<ETMessageTimeSource> *timeSource; // ivar: _timeSource


+(id)unarchive:(id)arg0 ;
-(BOOL)hasWispingChildren;
-(BOOL)reachedSizeLimit;
-(id)archive;
-(id)archiveData;
-(id)description;
-(id)init;
-(id)initWithArchiveData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )scenePointFromNormalizedPoint:(struct CGPoint )arg0 inScene:(id)arg1 ;
-(void)_startAudioPlayback;
-(void)_stopAudioPlayback;
-(void)childMessageDidCompleteWisp:(id)arg0 ;
-(void)childMessageDidDelayWisp:(id)arg0 ;
-(void)displayInScene:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preVisualizeInScene:(id)arg0 ;
-(void)stopPlaying;
-(void)wispChildren;


@end


#endif