// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABVCARDPARSER_H
#define ABVCARDPARSER_H

@class NSData, NSString, NSMutableArray, NSMutableDictionary, NSMutableString;

#import <Foundation/Foundation.h>

#import "ABVCardValueSetter.h"
#import "ABVCardLexer.h"
#import "ABVCardWatchdogTimer.h"

@interface ABVCardParser : NSObject {
    ABVCardValueSetter *_valueSetter;
    *void _source;
    ABVCardLexer *_lexer;
    NSData *_data;
    NSUInteger _defaultEncoding;
    BOOL _hasImportErrors;
    BOOL _30vCard;
    NSString *_first;
    NSString *_last;
    NSString *_org;
    NSString *_formattedName;
    NSMutableArray *_emails;
    NSMutableArray *_dates;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    NSMutableArray *_jabbers;
    NSMutableArray *_msns;
    NSMutableArray *_yahoos;
    NSMutableArray *_icqs;
    NSMutableArray *_untypedIMs;
    NSMutableArray *_instantMessengers;
    NSMutableArray *_socialProfiles;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableDictionary *_activityAlerts;
    NSMutableString *_notes;
    NSMutableString *_otherNotes;
    NSMutableDictionary *_extensions;
    NSString *_uid;
    NSData *_imageData;
    NSString *_imageURI;
    int _cropRectX;
    int _cropRectY;
    int _cropRectWidth;
    int _cropRectHeight;
    NSData *_cropRectChecksum;
    NSMutableArray *_itemParameters;
    NSString *_grouping;
    NSUInteger _encoding;
    BOOL _quotedPrintable;
    BOOL _base64;
    ABVCardWatchdogTimer *_timer;
}


@property (nonatomic) *void source;


+(struct __CFArray *)supportedProperties;
-(?)copyNextPersonWithLengthfoundProperties;
-(?)importToPersonfoundProperties;
-(?)peopleAndProperties;
-(?)sortedPeopleAndProperties;
-(BOOL)_handleUnknownTag:(id)arg0 withValue:(id)arg1 ;
-(BOOL)_setDataValueOrNoteIfNull:(id)arg0 forProperty:(unsigned int)arg1 ;
-(BOOL)_setIntValueOrNoteIfNull:(int)arg0 forProperty:(int)arg1 ;
-(BOOL)_setMultiValuesOrNoteIfNull:(id)arg0 forProperty:(unsigned int)arg1 valueComparator:(id)arg2 ;
-(BOOL)_setPersonSounds:(*void)arg0 identifier:(int)arg1 fromActivity:(id)arg2 alert:(id)arg3 otherValue:(id)arg4 ;
-(BOOL)_setStringValueOrNoteIfNull:(id)arg0 forProperty:(unsigned int)arg1 ;
-(BOOL)_usesArrayForExternalPropKey:(id)arg0 ;
-(BOOL)_usesRemainingLineForExternalPropKey:(id)arg0 ;
-(BOOL)addIMValueTo:(id)arg0 ;
-(BOOL)hasImportErrors;
-(BOOL)importToValueSetter:(id)arg0 ;
-(BOOL)parseABDATE;
-(BOOL)parseABExtensionType:(id)arg0 ;
-(BOOL)parseABMaiden;
-(BOOL)parseABReleatedNames;
-(BOOL)parseABUID;
-(BOOL)parseADD;
-(BOOL)parseADR;
-(BOOL)parseActivityAlerts;
-(BOOL)parseAlternateBirthday;
-(BOOL)parseBDAY;
-(BOOL)parseEMAIL;
-(BOOL)parseGuardianWhitelisted;
-(BOOL)parseIMAGEHASH;
-(BOOL)parseIMAGETYPE;
-(BOOL)parseIMPP;
-(BOOL)parseItem;
-(BOOL)parseN;
-(BOOL)parseNICKNAME;
-(BOOL)parseORG;
-(BOOL)parsePhoto:(id)arg0 ;
-(BOOL)parseSocialProfiles;
-(BOOL)parseTEL;
-(BOOL)parseUID;
-(BOOL)parseVERSION;
-(id)_genericLabel;
-(id)_socialProfileBundleIdentifiers;
-(id)_socialProfileDisplayName;
-(id)_socialProfileService;
-(id)_socialProfileTeamIdentifier;
-(id)_socialProfileUserId;
-(id)_socialProfileUsername;
-(id)_valueSetter;
-(id)dateFromISO8601String:(id)arg0 ;
-(id)defaultADRLabel;
-(id)defaultLabel;
-(id)defaultURLLabel;
-(id)genericLabel;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 watchdogTimer:(id)arg1 ;
-(id)parseInstantMessengerProfile:(id)arg0 ;
-(id)parseRemainingLine;
-(id)parseSingleValue;
-(id)parseURL;
-(id)parseValueArray;
-(id)phoneLabel;
-(int)_addIMHandles:(id)arg0 toService:(struct __CFString *)arg1 multiValue:(*void)arg2 uniquenessCheckingMultiValue:(*void)arg3 ;
-(int)_addIMPPProfiles:(id)arg0 multiValue:(*void)arg1 uniquenessCheckingMultiValue:(*void)arg2 ;
-(void)_setValueFromExtension:(id)arg0 forKey:(id)arg1 onAddress:(id)arg2 toKey:(id)arg3 ;
-(void)addActivityAlertMultiValues;
-(void)addAddressMultiValues;
-(void)addInstantMessageMultiValues;
-(void)addMultiValues:(id)arg0 toProperty:(unsigned int)arg1 valueComparator:(id)arg2 ;
-(void)addSocialProfileMultiValues;
-(void)cleanUpCardState;
-(void)dealloc;
-(void)noteLackOfValueForImageData;
-(void)noteLackOfValueForProperty:(unsigned int)arg0 ;
-(void)parseABOrder;
-(void)parseABPhoto;
-(void)parseABShowAs;
-(void)setLocalRecordHasAdditionalProperties:(BOOL)arg0 ;


@end


#endif