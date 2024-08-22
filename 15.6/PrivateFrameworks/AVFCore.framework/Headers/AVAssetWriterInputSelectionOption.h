// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETWRITERINPUTSELECTIONOPTION_H
#define AVASSETWRITERINPUTSELECTIONOPTION_H

@class NSString, NSArray, NSDictionary;


#import "AVMediaSelectionOption.h"
#import "AVAssetWriterInput.h"

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
    BOOL _enabled;
}


@property (readonly, nonatomic) BOOL displaysNonForcedSubtitles; // ivar: _displaysNonForcedSubtitles
@property (readonly, nonatomic) NSString *extendedLanguageTag; // ivar: _extendedLanguageTag
@property (readonly, nonatomic) AVAssetWriterInput *input; // ivar: _input
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSArray *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSDictionary *outputSettings; // ivar: _outputSettings
@property (readonly, nonatomic) *opaqueCMFormatDescription sourceFormatHint; // ivar: _sourceFormatHint
@property (readonly, nonatomic) NSDictionary *trackReferences; // ivar: _trackReferences


+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg0 ;
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg0 displaysNonForcedSubtitles:(BOOL)arg1 ;
-(BOOL)_hasEqualValueForKey:(id)arg0 asObject:(id)arg1 ;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPlayable;
-(NSUInteger)hash;
-(id)_ancillaryDescription;
-(id)_taggedCharacteristics;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg0 ;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)initWithAssetWriterInput:(id)arg0 ;
-(id)initWithAssetWriterInput:(id)arg0 displaysNonForcedSubtitles:(BOOL)arg1 ;
-(id)locale;
-(id)mediaSubTypes;
-(id)metadataForFormat:(id)arg0 ;
-(id)propertyList;
-(void)dealloc;


@end


#endif