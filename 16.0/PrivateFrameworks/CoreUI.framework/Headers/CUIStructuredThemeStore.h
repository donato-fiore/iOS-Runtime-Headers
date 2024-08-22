// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUISTRUCTUREDTHEMESTORE_H
#define CUISTRUCTUREDTHEMESTORE_H

@class NSMutableDictionary, NSString, NSCache, NSDictionary, NSSet;
@protocol CUIStructuredThemeStorage, CUIStructuredThemeStorage2;

#import <Foundation/Foundation.h>

#import "CUICommonAssetStorage.h"

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2>

 {
    NSMutableDictionary *_cache;
    CUICommonAssetStorage *_store;
    os_unfair_lock_s _cacheLock;
    os_unfair_lock_s _storeLock;
    NSUInteger _themeIndex;
    NSString *_bundleID;
    NSCache *_namedRenditionKeyCache;
    *unk _attributePresent;
    BOOL _mainBundle;
    NSDictionary *_aliasDictionary;
    NSSet *_legacyFlippableSet;
    NSCache *_nameCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL mainBundle;
@property (readonly) Class superclass;


-(BOOL)_formatStorageKeyArrayBytes:(*void)arg0 length:(NSUInteger)arg1 fromKey:(struct _renditionkeytoken *)arg2 ;
-(BOOL)_subImageTexturingShouldBeSupported;
-(BOOL)assetExistsForKey:(struct _renditionkeytoken *)arg0 ;
-(BOOL)caAllowSubimageOfImage:(struct CGImage *)arg0 ;
-(BOOL)canGetRenditionWithKey:(struct _renditionkeytoken *)arg0 ;
-(BOOL)containsLookupForName:(id)arg0 ;
-(BOOL)getFontName:(*id)arg0 baselineOffset:(*CGFloat)arg1 forFontType:(id)arg2 ;
-(BOOL)getPhysicalColor:(struct _colordef *)arg0 withName:(id)arg1 ;
-(BOOL)hasPhysicalColorWithName:(id)arg0 ;
-(BOOL)imageNamedShouldFlip:(id)arg0 ;
-(BOOL)localizationWorkaroundForKeyList:(struct _renditionkeytoken *)arg0 ;
-(BOOL)usesCUISystemThemeRenditionKey;
-(CGFloat)fontSizeForFontSizeType:(id)arg0 ;
-(NSInteger)deploymentPlatform;
-(NSInteger)maximumRenditionKeyTokenCount;
-(NSUInteger)colorSpaceID;
-(NSUInteger)themeIndex;
-(id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken *)arg0 ;
-(id)aliasForName:(id)arg0 ;
-(id)allImageNames;
-(id)appearances;
-(id)baseGradationKeySignatureForKey:(struct _renditionkeytoken *)arg0 ;
-(id)bundleID;
-(id)catalogGlobals;
-(id)convertRenditionKeyToKeyData:(struct _renditionkeytoken *)arg0 ;
-(id)copyKeySignatureForKey:(struct _renditionkeytoken *)arg0 withBytesNoCopy:(char *)arg1 length:(NSUInteger)arg2 ;
-(id)copyLookupKeySignatureForKey:(struct _renditionkeytoken *)arg0 ;
-(id)debugDescriptionForKeyList:(struct _renditionkeytoken *)arg0 ;
-(id)defaultAppearanceName;
-(id)deploymentPlatformString;
-(id)imagesWithName:(id)arg0 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)keySignatureForKey:(struct _renditionkeytoken *)arg0 ;
-(id)localizations;
-(id)lookupAssetForKey:(struct _renditionkeytoken *)arg0 ;
-(id)mappedAliases;
-(id)nameForAppearanceIdentifier:(unsigned short)arg0 ;
-(id)renditionInfoForIdentifier:(unsigned short)arg0 ;
-(id)renditionNameForKeyList:(struct _renditionkeytoken *)arg0 ;
-(id)renditionWithKey:(struct _renditionkeytoken *)arg0 ;
-(id)renditionWithKey:(struct _renditionkeytoken *)arg0 usingKeySignature:(id)arg1 ;
-(id)store;
-(id)themeStore;
-(struct _renditionkeyattributeindex *)keyAttributeIndex;
-(struct _renditionkeyfmt *)keyFormat;
-(struct _renditionkeyfmt *)renditionKeyFormat;
-(struct _renditionkeytoken *)renditionKeyForName:(id)arg0 ;
-(struct _renditionkeytoken *)renditionKeyForName:(id)arg0 cursorHotSpot:(struct CGPoint *)arg1 ;
-(unsigned int)authoredWithSchemaVersion;
-(unsigned int)distilledInCoreUIVersion;
-(unsigned int)documentFormatVersion;
-(unsigned short)appearanceIdentifierForName:(id)arg0 ;
-(unsigned short)localizationIdentifierForName:(id)arg0 ;
-(void)_commonInit;
-(void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg0 ;
-(void)clearRenditionCache;
-(void)dealloc;
-(void)setBundleID:(id)arg0 ;
-(void)setThemeIndex:(NSUInteger)arg0 ;


@end


#endif