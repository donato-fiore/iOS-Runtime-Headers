// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKEUSERSPECIFICINFO_H
#define SKEUSERSPECIFICINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKEUserSpecificInfo : NSObject <NSSecureCoding>

 {
    ? userId;
    ? userIdentityClassification;
    ? rawVoiceIDScore;
    ? userAttribute;
    ? isFirstInteractionForUser;
    ? didSpeakerChange;
    ? isOnlyUserInHome;
    ? voiceProfilesInFlight;
    ? twentyFourHourTimeDisplay;
    ? explicitContentAllowed;
    ? censorSpeech;
    ? companionAssistantId;
    ? meCard;
    ? preferredLanguage;
    ? countryCode;
    ? temperatureUnit;
    ? wasSpeechProfileUsedByASR;
    ? lowScoreThreshold;
    ? $__lazy_storage_$_isGroundingConditionallyNeeded;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif