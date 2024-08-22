// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSIRIENDPOINTONBOARDINGSELECTIONS_H
#define HMSIRIENDPOINTONBOARDINGSELECTIONS_H

@class NSArray, NSString;
@protocol HMFLogging, HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>

#import "HMSettingLanguageValue.h"

@interface HMSiriEndpointOnboardingSelections : NSObject <HMFLogging, HMFObject, HMMessageEncoding>



@property (readonly, getter=isAirPlayEnabled) BOOL airPlayEnabled; // ivar: _airPlayEnabled
@property (readonly) BOOL allowHeySiri; // ivar: _allowHeySiri
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isExplicitContentAllowed) BOOL explicitContentAllowed; // ivar: _explicitContentAllowed
@property (readonly) NSUInteger hash;
@property (readonly) HMSettingLanguageValue *languageValue; // ivar: _languageValue
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, getter=isShareSiriAnalyticsEnabled) BOOL shareSiriAnalyticsEnabled; // ivar: _shareSiriAnalyticsEnabled
@property (readonly, copy) NSString *shortDescription;
@property (readonly, getter=isSiriEnabled) BOOL siriEnabled; // ivar: _siriEnabled
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 playbackInfluencesForYouEnabled:(BOOL)arg3 shareSiriAnalyticsEnabled:(BOOL)arg4 explicitContentAllowed:(BOOL)arg5 languageValue:(id)arg6 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 languageValue:(id)arg3 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 playbackInfluencesForYouEnabled:(BOOL)arg3 shareSiriAnalyticsEnabled:(BOOL)arg4 explicitContentAllowed:(BOOL)arg5 ;
-(id)initWithSiriEnabled:(BOOL)arg0 allowHeySiri:(BOOL)arg1 airPlayEnabled:(BOOL)arg2 playbackInfluencesForYouEnabled:(BOOL)arg3 shareSiriAnalyticsEnabled:(BOOL)arg4 explicitContentAllowed:(BOOL)arg5 languageValue:(id)arg6 ;
-(id)payloadCopy;


@end


#endif