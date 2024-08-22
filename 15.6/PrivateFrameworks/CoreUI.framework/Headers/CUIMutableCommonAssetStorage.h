// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIMUTABLECOMMONASSETSTORAGE_H
#define CUIMUTABLECOMMONASSETSTORAGE_H

@class NSMutableDictionary;


#import "CUICommonAssetStorage.h"

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {
    NSMutableDictionary *_bitmapInfo;
    BOOL _useBitmapIndex;
    BOOL _enableLargeCarKeyWorkaround;
}


@property (nonatomic) BOOL useBitmapIndex;


-(BOOL)_saveBitmapInfo;
-(BOOL)_writeOutKeyFormatWithWorkaround;
-(BOOL)removeAssetName:(id)arg0 ;
-(BOOL)removeAssetNameKey:(*void)arg0 withLength:(NSUInteger)arg1 ;
-(BOOL)setAsset:(id)arg0 forKey:(*void)arg1 withLength:(NSUInteger)arg2 ;
-(BOOL)setAsset:(id)arg0 forKey:(id)arg1 ;
-(BOOL)writeToDisk;
-(BOOL)writeToDiskAndCompact:(BOOL)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)_allocateExtendedMetadata;
-(void)dealloc;
-(void)removeAssetForKey:(*void)arg0 withLength:(NSUInteger)arg1 ;
-(void)removeAssetForKey:(id)arg0 ;
-(void)setAppearanceIdentifier:(unsigned short)arg0 forName:(id)arg1 ;
-(void)setAssociatedChecksum:(unsigned int)arg0 ;
-(void)setAuthoringTool:(id)arg0 ;
-(void)setCatalogGlobalData:(id)arg0 ;
-(void)setColor:(struct _rgbquad )arg0 forName:(char *)arg1 excludeFromFilter:(BOOL)arg2 ;
-(void)setColorSpaceID:(unsigned int)arg0 ;
-(void)setDeploymentPlatform:(id)arg0 ;
-(void)setDeploymentPlatformVersion:(id)arg0 ;
-(void)setEnableLargeCarKeyWorkaround:(BOOL)arg0 ;
-(void)setExternalTags:(id)arg0 ;
-(void)setFontName:(id)arg0 baselineOffset:(float)arg1 forFontSelector:(id)arg2 ;
-(void)setFontSize:(float)arg0 forFontSizeSelector:(id)arg1 ;
-(void)setKeyFormatData:(id)arg0 ;
-(void)setKeySemantics:(int)arg0 ;
-(void)setLocalizationIdentifier:(unsigned short)arg0 forName:(id)arg1 ;
-(void)setRenditionCount:(unsigned int)arg0 ;
-(void)setRenditionKey:(struct _renditionkeytoken *)arg0 hotSpot:(struct CGPoint )arg1 forName:(char *)arg2 ;
-(void)setSchemaVersion:(unsigned int)arg0 ;
-(void)setStorageVersion:(unsigned int)arg0 ;
-(void)setThinningArguments:(id)arg0 ;
-(void)setUuid:(id)arg0 ;
-(void)setVersionString:(char *)arg0 ;
-(void)updateBitmapInfo;


@end


#endif