// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSESSION_H
#define MXSESSION_H

@class NSString, NSDictionary;
@protocol MXSessionProtocol;

#import <Foundation/Foundation.h>

#import "MXCoreSession.h"

@interface MXSession : NSObject <MXSessionProtocol>

 {
    NSUInteger mCoreSessionID;
    NSString *mDescription;
    NSUInteger mID;
    int mClientType;
    MXCoreSession *mCoreSession;
    BOOL mIsMuted;
    BOOL mIsPlaying;
    BOOL mClientIsPlaying;
    BOOL mAudioToolboxIsPlaying;
    BOOL mIsRecording;
    unsigned int mPreferredNumberOfOutputChannels;
    CGFloat mPreferredOutputSampleRate;
    NSString *mPreferredAudioHardwareFormat;
    NSString *mMutePriority;
    BOOL mIAmPiP;
    BOOL mDoesntActuallyPlayAudio;
    NSDictionary *mSourceFormatInfo;
    NSString *mBestAvailableContentType;
    NSDictionary *mCurrentlyPlayingSourceFormatInfo;
    BOOL mCurrentlyPlayingContentIsEligibleForSpatialization;
}




+(BOOL)_isSessionMuted:(NSUInteger)arg0 ;
+(BOOL)isCoreSessionFormatValidForMaxOutputChannels:(id)arg0 ;
+(BOOL)isNonSerializedCopyProperty:(id)arg0 ;
+(BOOL)isNonSerializedSetProperty:(id)arg0 ;
+(BOOL)isSessionMuted:(NSUInteger)arg0 ;
+(id)copyMXSessionForID:(NSUInteger)arg0 ;
+(int)updateDoesntActuallyPlayAudio:(id)arg0 ;
+(int)updateIsPlaying:(id)arg0 ;
+(int)updateIsRecording:(id)arg0 ;
+(int)updatePreferredAudioHardwareFormat:(id)arg0 withMaxOutputChannels:(unsigned int)arg1 andCalledFromDealloc:(BOOL)arg2 ;
+(int)updatePreferredNumberOfOutputChannels:(id)arg0 ;
+(int)updatePreferredOutputSampleRate:(id)arg0 ;
+(unsigned int)getResolvedPreferredNumberOfOutputChannels:(id)arg0 ;
-(BOOL)getActuallyPlaysAudio;
-(BOOL)getCurrentlyPlayingContentIsEligibleForSpatialization;
-(BOOL)getDoesntActuallyPlayAudio;
-(BOOL)getIAmPiP;
-(BOOL)getIsMuted;
-(BOOL)getIsPlaying;
-(BOOL)getIsRecording;
-(CGFloat)getPreferredOutputSampleRate;
-(NSUInteger)getID;
-(id)_initWithSession:(struct opaqueCMSession *)arg0 ;
-(id)getBestAvailableContentType;
-(id)getClientTypeAsString;
-(id)getCoreSession;
-(id)getCurrentlyPlayingSourceFormatInfo;
-(id)getMutePriority;
-(id)getPreferredAudioHardwareFormat;
-(id)getSourceFormatInfo;
-(id)info;
-(id)initWithSession:(id)arg0 ;
-(int)_addResource:(struct __CFString *)arg0 resourceInfo:(struct __CFDictionary *)arg1 token:(struct OpaqueCMSessionResourceToken **)arg2 ;
-(int)_beginInterruptionWithSecTask:(struct __SecTask *)arg0 flags:(NSInteger)arg1 ;
-(int)_copyPropertyForKey:(id)arg0 valueOut:(*id)arg1 ;
-(int)_endInterruptionWithSecTask:(struct __SecTask *)arg0 interruptionStatus:(struct __CFString *)arg1 ;
-(int)_removeResourceWithToken:(struct OpaqueCMSessionResourceToken *)arg0 ;
-(int)_setPropertyForKey:(id)arg0 value:(id)arg1 ;
-(int)copyPropertyForKey:(id)arg0 valueOut:(*id)arg1 ;
-(int)copyPropertyForKeyInternal:(id)arg0 valueOut:(*id)arg1 ;
-(int)getClientType;
-(int)resetIsPlayingStates;
-(int)setBestAvailableContentType:(id)arg0 ;
-(int)setClientType:(int)arg0 ;
-(int)setCurrentlyPlayingContentIsEligibleForSpatialization:(BOOL)arg0 ;
-(int)setCurrentlyPlayingSourceFormatInfo:(id)arg0 ;
-(int)setDoesntActuallyPlayAudio:(BOOL)arg0 ;
-(int)setIAmPiP:(BOOL)arg0 ;
-(int)setID:(NSUInteger)arg0 ;
-(int)setIsMuted:(BOOL)arg0 ;
-(int)setIsPlaying:(BOOL)arg0 ;
-(int)setIsRecording:(BOOL)arg0 ;
-(int)setMutePriority:(id)arg0 ;
-(int)setPreferredAudioHardwareFormat:(id)arg0 ;
-(int)setPreferredNumberOfOutputChannels:(unsigned int)arg0 ;
-(int)setPreferredOutputSampleRate:(CGFloat)arg0 ;
-(int)setPropertyForKey:(id)arg0 value:(id)arg1 ;
-(int)setPropertyForKeyInternal:(id)arg0 value:(id)arg1 ;
-(int)setSourceFormatInfo:(id)arg0 ;
-(unsigned int)getPreferredNumberOfOutputChannels;
-(void)_dealloc;
-(void)dealloc;
-(void)dumpInfo;
-(void)mute;
-(void)postIsMutedDidChange;
-(void)unmute;


@end


#endif