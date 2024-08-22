// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSSTHEME_H
#define TSSTHEME_H

@class NSString, NSMutableDictionary;
@protocol TSKModel;


#import "TSPObject.h"
#import "TSSStylesheet.h"

@interface TSSTheme : TSPObject <TSKModel>

 {
    NSString *mThemeIdentifier;
    NSMutableDictionary *mPresetsByKind;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocked;
@property (readonly, nonatomic) TSSStylesheet *stylesheet; // ivar: mStylesheet
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *themeIdentifier;


+(id)presetBootstrapOrder;
+(id)presetSources;
+(id)themeWithContext:(id)arg0 alternate:(int)arg1 ;
+(void)registerPresetSourceClass:(Class)arg0 ;
+(void)registerPresetSourceClasses;
-(BOOL)containsCGColor:(struct CGColor *)arg0 ;
-(BOOL)hasPresetsOfKind:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indexOfPreset:(id)arg0 ;
-(id)childEnumerator;
-(id)colors;
-(id)initWithContext:(id)arg0 ;
-(id)modelPathComponentForChild:(id)arg0 ;
-(id)p_identifierForBootstrapTheme:(int)arg0 ;
-(id)presetOfKind:(id)arg0 index:(NSUInteger)arg1 ;
-(id)presetsOfKind:(id)arg0 ;
-(void)addPreset:(id)arg0 ofKind:(id)arg1 ;
-(void)bootstrapThemeAlternate:(int)arg0 ;
-(void)checkThemeStylesheetConsistency;
-(void)dealloc;
-(void)disablePresetValidation;
-(void)enablePresetValidation;
-(void)insertPreset:(id)arg0 ofKind:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)movePresetOfKind:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)removePreset:(id)arg0 ;
-(void)setPresets:(id)arg0 ofKind:(id)arg1 ;


@end


#endif