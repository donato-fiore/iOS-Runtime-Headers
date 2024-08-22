// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSTHEME_H
#define TSSTHEME_H

@class TSPObject, NSString, NSMutableDictionary, NSArray;
@protocol TSKModel, TSKDocumentObject;


#import "TSSStylesheet.h"

@interface TSSTheme : TSPObject <TSKModel, TSKDocumentObject>

 {
    NSString *mThemeIdentifier;
    NSMutableDictionary *mPresetsByKind;
    TSSStylesheet *mLegacyStylesheet;
    TSSStylesheet *mDocumentStylesheet;
    NSMutableDictionary *mReplacedPresetUUIDs;
}


@property (readonly, nonatomic) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSSStylesheet *documentStylesheet;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSSStylesheet *legacyStylesheet;
@property (readonly, nonatomic) NSArray *presetKinds;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *themeIdentifier;


+(BOOL)needsObjectUUID;
+(id)presetBootstrapOrder;
+(id)presetSources;
+(id)themeWithContext:(id)arg0 alternate:(NSUInteger)arg1 withStylesheet:(id)arg2 ;
+(void)registerPresetSourceClass:(Class)arg0 ;
+(void)registerPresetSourceClasses;
-(BOOL)containsCGColor:(struct CGColor *)arg0 ;
-(BOOL)hasPresetsOfKind:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_shouldDoDOLCForPreset:(id)arg0 ;
-(NSUInteger)indexOfPreset:(id)arg0 ;
-(id)childEnumerator;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 documentStylesheet:(id)arg1 ;
-(id)migratedPresetForPreset:(id)arg0 ;
-(id)migratedPresetForPresetWithoutFollowingReplacements:(id)arg0 ;
-(id)migratedPresetUUIDForPresetUUID:(id)arg0 ;
-(id)modelPathComponentForChild:(id)arg0 ;
-(id)p_identifierForBootstrapTheme:(NSUInteger)arg0 ;
-(id)p_migratedPresetForPreset:(id)arg0 followReplacements:(BOOL)arg1 ;
-(id)presetOfKind:(id)arg0 index:(NSUInteger)arg1 ;
-(id)presetsOfKind:(id)arg0 ;
-(id)referencedStyles;
-(void)addPreset:(id)arg0 ofKind:(id)arg1 ;
-(void)bootstrapThemeAlternate:(NSUInteger)arg0 ;
-(void)checkThemeStylesheetConsistency;
-(void)clearAllReplacementsOfPresetUUIDs;
-(void)clearReplacementsOfPresetUUID:(id)arg0 ;
-(void)disablePresetValidation;
-(void)enablePresetValidation;
-(void)insertPreset:(id)arg0 ofKind:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)movePresetOfKind:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)recordReplacementOfPresetUUID:(id)arg0 withPresetUUID:(id)arg1 ;
-(void)removePreset:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setPresets:(id)arg0 ofKind:(id)arg1 ;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg0 ;
-(void)upgradeStylesWithBlock:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif