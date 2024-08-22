// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSIRIENDPOINTONBOARDINGSELECTIONS_H
#define HMSIRIENDPOINTONBOARDINGSELECTIONS_H

@class NSArray, NSString;
@protocol HMFLogging, HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>

#import "HMSettingLanguageValue.h"

@interface HMSiriEndpointOnboardingSelections : NSObject <HMFLogging, HMFObject, HMMessageEncoding>



@property (getter=isAirPlayEnabled) BOOL airPlayEnabled; // ivar: _airPlayEnabled
@property BOOL allowHeySiri; // ivar: _allowHeySiri
@property (getter=isAnnounceEnabled) BOOL announceEnabled; // ivar: _announceEnabled
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDoorbellChimeEnabled) BOOL doorbellChimeEnabled; // ivar: _doorbellChimeEnabled
@property (getter=isExplicitContentAllowed) BOOL explicitContentAllowed; // ivar: _explicitContentAllowed
@property BOOL hasAirPlayEnabled; // ivar: _hasAirPlayEnabled
@property BOOL hasAllowHeySiri; // ivar: _hasAllowHeySiri
@property BOOL hasAnnounceEnabled; // ivar: _hasAnnounceEnabled
@property BOOL hasDoorbellChimeEnabled; // ivar: _hasDoorbellChimeEnabled
@property BOOL hasExplicitContentAllowed; // ivar: _hasExplicitContentAllowed
@property BOOL hasLanguageValue; // ivar: _hasLanguageValue
@property BOOL hasLightWhenUsingSiriEnabled; // ivar: _hasLightWhenUsingSiriEnabled
@property BOOL hasShareSiriAnalyticsEnabled; // ivar: _hasShareSiriAnalyticsEnabled
@property BOOL hasSiriEnabled; // ivar: _hasSiriEnabled
@property (readonly) NSUInteger hash;
@property (retain) HMSettingLanguageValue *languageValue; // ivar: _languageValue
@property (getter=isLightWhenUsingSiriEnabled) BOOL lightWhenUsingSiriEnabled; // ivar: _lightWhenUsingSiriEnabled
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isShareSiriAnalyticsEnabled) BOOL shareSiriAnalyticsEnabled; // ivar: _shareSiriAnalyticsEnabled
@property (readonly, copy) NSString *shortDescription;
@property (getter=isSiriEnabled) BOOL siriEnabled; // ivar: _siriEnabled
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 playbackInfluencesForYouEnabled:(BOOL)arg3 shareSiriAnalyticsEnabled:(BOOL)arg4 explicitContentAllowed:(BOOL)arg5 languageValue:(id)arg6 ;
-(id)init;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 languageValue:(id)arg3 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 playbackInfluencesForYouEnabled:(BOOL)arg3 shareSiriAnalyticsEnabled:(BOOL)arg4 explicitContentAllowed:(BOOL)arg5 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 playbackInfluencesForYouEnabled:(BOOL)arg3 shareSiriAnalyticsEnabled:(BOOL)arg4 explicitContentAllowed:(BOOL)arg5 languageValue:(id)arg6 ;
-(id)payloadCopy;


@end


#endif