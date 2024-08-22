// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXVIDEOSESSIONPRESENTATIONSTATE_H
#define _PXVIDEOSESSIONPRESENTATIONSTATE_H

@class NSString;
@protocol PXMutableVideoSession;

#import <Foundation/Foundation.h>


@interface _PXVideoSessionPresentationState : NSObject <PXMutableVideoSession>



@property (nonatomic) BOOL allowsExternalPlayback; // ivar: _allowsExternalPlayback
@property (readonly, copy, nonatomic) NSString *audioSessionCategory; // ivar: _audioSessionCategory
@property (readonly, nonatomic) NSUInteger audioSessionCategoryOptions; // ivar: _audioSessionCategoryOptions
@property (readonly, nonatomic) NSString *audioSessionMode; // ivar: _audioSessionMode
@property (readonly, nonatomic) NSUInteger audioSessionRouteSharingPolicy; // ivar: _audioSessionRouteSharingPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled; // ivar: _loopingEnabled
@property (nonatomic) ? playbackTimeRange; // ivar: _playbackTimeRange
@property (nonatomic) *void presenter; // ivar: _presenter
@property (nonatomic) BOOL preventsSleepDuringVideoPlayback; // ivar: _preventsSleepDuringVideoPlayback
@property (nonatomic) BOOL seekToBeginningAtEnd; // ivar: _seekToBeginningAtEnd
@property (nonatomic) BOOL shouldDisableAutomaticPixelBufferUpdates; // ivar: _shouldDisableAutomaticPixelBufferUpdates
@property (readonly, nonatomic) BOOL shouldFadeVolumeChange; // ivar: _shouldFadeVolumeChange
@property (readonly) Class superclass;
@property (readonly, nonatomic) float volume; // ivar: _volume




@end


#endif