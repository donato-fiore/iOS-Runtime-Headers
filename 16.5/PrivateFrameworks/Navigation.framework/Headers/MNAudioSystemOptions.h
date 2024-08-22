// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNAUDIOSYSTEMOPTIONS_H
#define MNAUDIOSYSTEMOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MNAudioSystemOptions : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL chimeBeforeInstruction; // ivar: _chimeBeforeInstruction
@property (readonly, nonatomic) NSUInteger cyclingVoiceGuidanceLevel; // ivar: _cyclingVoiceGuidanceLevel
@property (readonly, nonatomic) NSUInteger drivingVoiceGuidanceLevel; // ivar: _drivingVoiceGuidanceLevel
@property (readonly, nonatomic) BOOL muteSpeechOverride; // ivar: _muteSpeechOverride
@property (readonly, nonatomic) BOOL pauseSpokenAudio; // ivar: _pauseSpokenAudio
@property (readonly, nonatomic) BOOL useHFP; // ivar: _useHFP
@property (readonly, nonatomic) NSUInteger walkingVoiceGuidanceLevel; // ivar: _walkingVoiceGuidanceLevel


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDrivingVoiceGuidanceLevel:(NSUInteger)arg0 andWalkingVoiceGuidanceLevel:(NSUInteger)arg1 andCyclingVoiceGuidanceLevel:(NSUInteger)arg2 andUseHFP:(BOOL)arg3 andPauseSpokenAudio:(BOOL)arg4 andChimeBeforeInstruction:(BOOL)arg5 andMuteSpeechOverride:(BOOL)arg6 ;


@end


#endif