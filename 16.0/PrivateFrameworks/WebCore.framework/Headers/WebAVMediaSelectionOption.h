// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBAVMEDIASELECTIONOPTION_H
#define WEBAVMEDIASELECTIONOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WebAVMediaSelectionOption : NSObject {
    RetainPtr<NSString> _localizedDisplayName;
}


@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType; // ivar: _mediaType


-(BOOL)_isDesignatedDefault;
-(BOOL)hasMediaCharacteristic:(id)arg0 ;
-(BOOL)isPlayable;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg0 ;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)displayNameWithLocale:(id)arg0 ;
-(id)extendedLanguageTag;
-(id)initWithMediaType:(id)arg0 displayName:(id)arg1 ;
-(id)languageCode;
-(id)locale;
-(id)mediaCharacteristics;
-(id)mediaSubTypes;
-(id)metadataForFormat:(id)arg0 ;
-(id)outOfBandIdentifier;
-(id)outOfBandSource;
-(id)propertyList;
-(id)track;


@end


#endif