// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMEDIASELECTIONOPTION_H
#define AVMEDIASELECTIONOPTION_H

@class NSArray, NSString, NSLocale;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVMediaSelectionOptionInternal.h"

@interface AVMediaSelectionOption : NSObject <NSCopying>

 {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}


@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *mediaSubTypes;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString *unicodeLanguageCode;
@property (readonly, nonatomic) NSString *unicodeLanguageIdentifier;


+(BOOL)_plistHasOptionIdentifier:(id)arg0 ;
+(id)mediaSelectionNilOptionForGroup:(id)arg0 ;
+(id)mediaSelectionOptionForAsset:(id)arg0 group:(id)arg1 dictionary:(id)arg2 hasUnderlyingTrack:(BOOL)arg3 ;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(BOOL)_isMainProgramContent;
-(BOOL)_representsNilSelection;
-(BOOL)_updateDisplayNameWithLocale:(id)arg0 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg1 context:(NSInteger)arg2 ;
-(BOOL)displaysNonForcedSubtitles;
-(BOOL)hasMediaCharacteristic:(id)arg0 ;
-(id)_ancillaryDescription;
-(id)_displayNameWithLocale:(id)arg0 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg1 ;
-(id)_groupID;
-(id)_groupMediaCharacteristics;
-(id)_groupMediaType;
-(id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)arg0 fallingBackToMatchingEmptyLocale:(BOOL)arg1 ;
-(id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg0 fallingBackToMatchingEmptyLocale:(BOOL)arg1 excludeM3U8Metadata:(BOOL)arg2 ;
-(id)_taggedMediaCharacteristics;
-(id)_title;
-(id)_track;
-(id)associatedExtendedLanguageTag;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg0 ;
-(id)associatedPersistentIDs;
-(id)associatedUnicodeLanguageIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionary;
-(id)displayNameWithLocale:(id)arg0 ;
-(id)fallbackIDs;
-(id)group;
-(id)init;
-(id)initWithGroup:(id)arg0 ;
-(id)languageCode;
-(id)mediaCharacteristics;
-(id)metadataForFormat:(id)arg0 ;
-(id)optionID;
-(id)outOfBandIdentifier;
-(id)outOfBandSource;
-(id)propertyList;
-(id)track;
-(void)dealloc;


@end


#endif