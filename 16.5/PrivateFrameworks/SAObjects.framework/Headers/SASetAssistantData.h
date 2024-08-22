// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETASSISTANTDATA_H
#define SASETASSISTANTDATA_H

@class NSArray, NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SAMediaContentRatingRestrictions.h"
#import "SAVoice.h"
#import "SAWatchData.h"

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSArray *abSources;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSNumber *allowUserGeneratedContent;
@property (copy, nonatomic) NSString *anchor;
@property (nonatomic) BOOL censorSpeech;
@property (copy, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *debugFlags;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *deviceCapabilities;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *deviceEnclosure;
@property (copy, nonatomic) NSString *deviceVersion;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *fullStorefrontId;
@property (nonatomic) BOOL handsFree;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;
@property (nonatomic) BOOL inRetailStoreDemoMode;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSArray *meCards;
@property (retain, nonatomic) SAMediaContentRatingRestrictions *mediaContentRatingRestrictions;
@property (nonatomic) BOOL mediaPlayerExplicitContentDisallowed;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSArray *parentalRestrictions;
@property (copy, nonatomic) NSString *preferredLanguage;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSNumber *storefront;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *temperatureUnit;
@property (copy, nonatomic) NSString *timeZoneId;
@property (retain, nonatomic) SAVoice *ttsVoice;
@property (copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property (copy, nonatomic) NSNumber *uiScale;
@property (copy, nonatomic) NSString *userInterfaceIdiom;
@property (nonatomic) BOOL voiceOver;
@property (copy, nonatomic) NSNumber *voiceTriggerEnabled;
@property (retain, nonatomic) SAWatchData *watchData;


+(id)setAssistantData;
+(id)setAssistantDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif