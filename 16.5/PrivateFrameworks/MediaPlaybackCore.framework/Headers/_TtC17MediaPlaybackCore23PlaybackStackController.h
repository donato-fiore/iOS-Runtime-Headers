// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE23PLAYBACKSTACKCONTROLLER_H
#define _TTC17MEDIAPLAYBACKCORE23PLAYBACKSTACKCONTROLLER_H

@class SwiftObject, NSString, NSDictionary;
@protocol MFStateDumpable, MFResettable, MFAudioSessionControlling, MFStackModeConfigurable, MFPlayerConfigurable;



@interface _TtC17MediaPlaybackCore23PlaybackStackController : SwiftObject <MFStateDumpable, MFResettable, MFAudioSessionControlling, MFStackModeConfigurable, MFPlayerConfigurable>

 {
    ? queueController;
    ? queueAssetLoader;
    ? playerController;
    ? reporter;
    ? internalController;
    ? errorController;
    ? backgroundTaskController;
    ? currentSetQueueIdentifier;
}


@property (nonatomic, readonly) BOOL isModeManagedSession;
@property (nonatomic, readonly) BOOL isModeShared;
@property (nonatomic, readonly) BOOL isModeSolo;
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)activateAudioSessionWithCompletion:(id)arg0 ;
-(void)resetWithReason:(id)arg0 ;
-(void)setRelativeVolume:(float)arg0 ;
-(void)setSpatializationFormat:(NSInteger)arg0 ;
-(void)setupForManagedSessionWithAudioSession:(id)arg0 ;
-(void)setupForShared;
-(void)setupForSolo;
-(void)updateAudioSessionWithConfiguration:(id)arg0 ;


@end


#endif