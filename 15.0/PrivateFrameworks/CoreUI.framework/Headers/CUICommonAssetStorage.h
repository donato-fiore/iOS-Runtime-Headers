// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUICOMMONASSETSTORAGE_H
#define CUICOMMONASSETSTORAGE_H

@class NSSet, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface CUICommonAssetStorage : NSObject {
    BOOL _swap;
    BOOL _isMemoryMapped;
    BOOL _hasAppearanceKey;
    BOOL _hasLocalizationKey;
    BOOL _reserved;
    NSSet *_externalTags;
    unsigned short _renditionInfoCacheLookup;
    id _renditionInfoCache;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _renditionInfoCacheLock;
    _renditionkeyattributeindex _keyfmtindex;
}


@property (nonatomic) *void appearancedb; // ivar: _appearancedb
@property (readonly, nonatomic) NSDictionary *appearances; // ivar: _appearances
@property (nonatomic) *void bitmapKeydb; // ivar: _bitmapKeydb
@property (nonatomic) *void colordb; // ivar: _colordb
@property (nonatomic) *_carextendedMetadata extendedMetadata; // ivar: _extendedMetadata
@property (nonatomic) *void facetKeysdb; // ivar: _facetKeysdb
@property (nonatomic) *void fontdb; // ivar: _fontdb
@property (nonatomic) *void fontsizedb; // ivar: _fontsizedb
@property (retain, nonatomic) NSData *globals; // ivar: _globals
@property (nonatomic) *_carheader header; // ivar: _header
@property (nonatomic) *void imagedb; // ivar: _imagedb
@property (nonatomic) *_renditionkeyfmt keyfmt; // ivar: _keyfmt
@property (nonatomic) *void localizationdb; // ivar: _localizationdb


+(BOOL)isValidAssetStorageWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(BOOL)isValidAssetStorageWithURL:(id)arg0 ;
-(BOOL)_commonInitWithStorage:(struct _BOMStorage *)arg0 forWritting:(BOOL)arg1 ;
-(BOOL)assetExistsForKey:(id)arg0 ;
-(BOOL)assetExistsForKeyData:(*void)arg0 length:(NSUInteger)arg1 ;
-(BOOL)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(BOOL)getBaselineOffset:(*float)arg0 forFontType:(id)arg1 ;
-(BOOL)getColor:(struct _colordef *)arg0 forName:(char *)arg1 ;
-(BOOL)getFontName:(*id)arg0 baselineOffset:(*float)arg1 forFontType:(id)arg2 ;
-(BOOL)hasColorForName:(char *)arg0 ;
-(BOOL)swapped;
-(BOOL)usesCUISystemThemeRenditionKey;
-(BOOL)writeToPath:(id)arg0 withTreePageSize:(unsigned int)arg1 ;
-(NSInteger)_storagefileTimestamp;
-(NSInteger)maximumRenditionKeyTokenCount;
-(NSInteger)storageTimestamp;
-(char *)mainVersionString;
-(char *)versionString;
-(float)fontSizeForFontSizeType:(id)arg0 ;
-(id)_readAppearances;
-(id)allAssetKeys;
-(id)allRenditionNames;
-(id)assetForKey:(id)arg0 ;
-(id)assetKeysMatchingBlock:(id)arg0 ;
-(id)authoringTool;
-(id)catalogGlobalData;
-(id)deploymentPlatform;
-(id)deploymentPlatformVersion;
-(id)description;
-(id)externalTags;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 forWriting:(BOOL)arg1 ;
-(id)keyFormatData;
-(id)localizations;
-(id)nameForAppearanceIdentifier:(unsigned short)arg0 ;
-(id)nameForLocalizationIdentifier:(unsigned short)arg0 ;
-(id)path;
-(id)renditionInfoForIdentifier:(unsigned short)arg0 ;
-(id)renditionNameForKeyBaseList:(struct _renditionkeytoken *)arg0 ;
-(id)renditionNameForKeyList:(struct _renditionkeytoken *)arg0 ;
-(id)renditionNamesWithKeys;
-(id)thinningArguments;
-(id)uuid;
-(int)keySemantics;
-(int)validateBitmapInfo;
-(int)validateFile;
-(int)validatekeyformat;
-(struct FontValue *)_fontValueForFontType:(id)arg0 ;
-(struct _BOMStorage *)_bomStorage;
-(struct _renditionkeyattributeindex *)keyAttributeIndex;
-(struct _renditionkeyfmt *)keyFormat;
-(struct _renditionkeytoken )_swapRenditionKeyToken:(struct _renditionkeytoken )arg0 ;
-(struct _renditionkeytoken *)renditionKeyForName:(char *)arg0 hotSpot:(struct CGPoint *)arg1 ;
-(struct os_unfair_lock_s *)lock;
-(struct os_unfair_lock_s *)renditionInfoCacheLock;
-(unsigned int)associatedChecksum;
-(unsigned int)colorSpaceID;
-(unsigned int)coreuiVersion;
-(unsigned int)renditionCount;
-(unsigned int)schemaVersion;
-(unsigned int)storageVersion;
-(unsigned short)appearanceIdentifierForName:(id)arg0 ;
-(unsigned short)localizationIdentifierForName:(id)arg0 ;
-(void)_addBitmapIndexForNameIdentifier:(unsigned short)arg0 attribute:(int)arg1 withValue:(unsigned short)arg2 toDictionary:(id)arg3 ;
-(void)_bringHeaderInfoUpToDate;
-(void)_buildBitmapInfoIntoDictionary:(id)arg0 ;
-(void)_initDefaultHeaderVersion:(CGFloat)arg0 versionString:(char *)arg1 ;
-(void)_loadExtendedMetadata;
-(void)_swapHeader;
-(void)_swapKeyFormat;
-(void)_swapRenditionKeyArray:(*unsigned short)arg0 ;
-(void)dealloc;
-(void)enumerateBitmapIndexUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(id)arg0 ;
-(void)enumerateRenditionInfosUsingBlock:(id)arg0 ;
-(void)setExternalTags:(id)arg0 ;


@end


#endif