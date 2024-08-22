// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNUSEROPTIONS_H
#define MNUSEROPTIONS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNUserOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL chimeBeforeInstruction; // ivar: _chimeBeforeInstruction
@property (nonatomic) NSUInteger cyclingVoiceGuidanceLevel; // ivar: _cyclingVoiceGuidanceLevel
@property (nonatomic) NSUInteger distanceUnits; // ivar: _distanceUnits
@property (nonatomic) NSUInteger drivingVoiceGuidanceLevel; // ivar: _drivingVoiceGuidanceLevel
@property (nonatomic) NSUInteger maxAlternateRoutesCount; // ivar: _maxAlternateRoutesCount
@property (nonatomic) BOOL muteSpeechOverride; // ivar: _muteSpeechOverride
@property (nonatomic) BOOL pauseSpokenAudio; // ivar: _pauseSpokenAudio
@property (nonatomic) BOOL speechEnabled; // ivar: _speechEnabled
@property (nonatomic) BOOL useHFP; // ivar: _useHFP
@property (readonly, nonatomic) NSString *voiceLanguage;
@property (nonatomic) NSUInteger walkingVoiceGuidanceLevel; // ivar: _walkingVoiceGuidanceLevel


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)guidanceLevelForTransportType:(int)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)changeTransportType:(int)arg0 toVoiceGuidanceLevel:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif