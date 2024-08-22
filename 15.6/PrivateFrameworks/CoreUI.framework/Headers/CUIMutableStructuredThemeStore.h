// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIMUTABLESTRUCTUREDTHEMESTORE_H
#define CUIMUTABLESTRUCTUREDTHEMESTORE_H

@class NSString, NSMutableDictionary;


#import "CUIStructuredThemeStore.h"

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
    NSMutableDictionary *_apperanceNameIdentifierStore;
    int _maxApperanceNameIdentifier;
    NSMutableDictionary *_renditionInfoStore;
}




-(BOOL)canGetRenditionWithKey:(struct _renditionkeytoken *)arg0 ;
-(BOOL)usesCUISystemThemeRenditionKey;
-(NSInteger)maximumRenditionKeyTokenCount;
-(id)allImageNames;
-(id)appearances;
-(id)defaultAppearanceName;
-(id)imagesWithName:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)nameForAppearanceIdentifier:(unsigned short)arg0 ;
-(id)path;
-(id)renditionInfoForIdentifier:(unsigned short)arg0 ;
-(id)renditionWithKey:(struct _renditionkeytoken *)arg0 ;
-(id)renditionWithKey:(struct _renditionkeytoken *)arg0 usingKeySignature:(id)arg1 ;
-(id)themeStore;
-(struct _renditionkeyfmt *)keyFormat;
-(struct _renditionkeytoken *)renditionKeyForAssetWithName:(id)arg0 withDescription:(id)arg1 ;
-(struct _renditionkeytoken *)renditionKeyForName:(id)arg0 ;
-(struct _renditionkeytoken *)renditionKeyForName:(id)arg0 cursorHotSpot:(struct CGPoint *)arg1 ;
-(unsigned short)appearanceIdentifierForName:(id)arg0 ;
-(void)_addRenditionInfoForImageWithName:(id)arg0 andKey:(struct _renditionkeytoken *)arg1 ;
-(void)_removeRenditionInfoForImageWithName:(id)arg0 ;
-(void)clearRenditionCache;
-(void)dealloc;
-(void)insertCGImage:(struct CGImage *)arg0 withName:(id)arg1 andDescription:(id)arg2 ;
-(void)removeImageNamed:(id)arg0 withDescription:(id)arg1 ;
-(void)removeImagesNamed:(id)arg0 ;


@end


#endif