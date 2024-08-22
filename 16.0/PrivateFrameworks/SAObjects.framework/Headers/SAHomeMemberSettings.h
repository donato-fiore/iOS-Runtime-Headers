// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAHOMEMEMBERSETTINGS_H
#define SAHOMEMEMBERSETTINGS_H

@class NSString, NSArray, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAPerson.h"
#import "SAVoice.h"

@interface SAHomeMemberSettings : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAPerson *meCard;
@property (nonatomic) BOOL mediaPlayerExplicitContentDisallowed;
@property (copy, nonatomic) NSArray *parentalRestrictions;
@property (copy, nonatomic) NSString *preferredLanguage;
@property (copy, nonatomic) NSString *region;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *temperatureUnit;
@property (retain, nonatomic) SAVoice *ttsVoice;
@property (copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;


+(id)homeMemberSettings;
+(id)homeMemberSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif