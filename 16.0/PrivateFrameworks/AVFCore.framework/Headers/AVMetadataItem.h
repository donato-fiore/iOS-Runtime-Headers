// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATAITEM_H
#define AVMETADATAITEM_H

@class NSString, NSData, NSDate, NSDictionary, NSLocale, NSNumber;
@protocol AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "AVMetadataItemInternal.h"

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying>

 {
    AVMetadataItemInternal *_priv;
}


@property (readonly, copy, nonatomic) NSString *dataType;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) ? duration;
@property (readonly, copy, nonatomic) NSString *extendedLanguageTag;
@property (readonly, copy, nonatomic) NSDictionary *extraAttributes;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) ? time;
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *value;


+(BOOL)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+(id)_figMetadataPropertyFromMetadataItems:(id)arg0 ;
+(id)_isoUserDataKeysRequiringKeySpaceConversion;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg0 ;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg0 containerURL:(id)arg1 securityOptions:(unsigned int)arg2 ;
+(id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg0 ;
+(id)dataTypeForValue:(id)arg0 ;
+(id)identifierForKey:(id)arg0 keySpace:(id)arg1 ;
+(id)keyForIdentifier:(id)arg0 ;
+(id)keySpaceForIdentifier:(id)arg0 ;
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg0 valueLoadingHandler:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg0 filteredAndSortedAccordingToPreferredLanguages:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg0 filteredByIdentifier:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg0 filteredByIdentifiers:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg0 filteredByMetadataItemFilter:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg0 withKey:(id)arg1 keySpace:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg0 withLocale:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg0 withStringValue:(id)arg1 ;
+(void)initialize;
-(*void)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 error:(*id)arg1 ;
-(BOOL)_areExtraAttributesOf:(id)arg0 comparableToExtraAttributesOf:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)_conformingDataTypes;
-(id)_createJSONEncodedDataFromValue:(id)arg0 error:(*id)arg1 ;
-(id)_figMetadataDictionary;
-(id)_figMetadataDictionaryWithValue:(BOOL)arg0 diviningValueDataType:(BOOL)arg1 ;
-(id)_figMetadataFormat;
-(id)_figMetadataSpecificationReturningError:(*id)arg0 ;
-(id)_initWithFigMetadataDictionary:(id)arg0 ;
-(id)_initWithReader:(struct OpaqueFigMetadataReader *)arg0 itemIndex:(NSInteger)arg1 ;
-(id)_keyAsString;
-(id)_serializationDataType;
-(id)_valueFromCFType:(*void)arg0 ;
-(id)commonKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)discoveryTimestamp;
-(id)init;
-(id)intrinsicAttributesOfExtraAttributes:(id)arg0 ;
-(id)key;
-(id)keySpace;
-(id)languageCode;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)startDate;
-(id)unicodeLanguageCode;
-(id)unicodeLanguageIdentifier;
-(struct CGImage *)imageValue;
-(void)_extractPropertiesFromDictionary:(id)arg0 ;
-(void)_makePropertiesReady;
-(void)_makeValueReady;
-(void)_updateCommonKey;
-(void)_updateIdentifier;
-(void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg0 ;
-(void)_updateLanguageInformationFromLocale:(id)arg0 ;
-(void)cancelLoading;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif