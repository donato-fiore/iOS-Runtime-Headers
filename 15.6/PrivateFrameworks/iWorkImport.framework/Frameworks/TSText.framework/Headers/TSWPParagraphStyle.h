// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPPARAGRAPHSTYLE_H
#define TSWPPARAGRAPHSTYLE_H

@class TSSStyle, NSMapTable, NSString;
@protocol TSSPreset, TSDMixing;



@interface TSWPParagraphStyle : TSSStyle <TSSPreset, TSDMixing>

 {
    *__CTParagraphStyle _coreTextParagraphStyle;
    NSMapTable *_styleCache;
    NSMapTable *_scalePercentStyleCaches;
}


@property (readonly, nonatomic) BOOL allowAsBookmarkSuggestionStyle;
@property (nonatomic) BOOL allowsMissingPropertiesWithNoParentStyleForUpgrade; // ivar: _allowsMissingPropertiesWithNoParentStyleForUpgrade
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) BOOL showInSuggestedBookmarksList;
@property (readonly) Class superclass;


+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultPropertyMap;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)deprecatedProperties;
+(id)nonEmphasisParagraphProperties;
+(id)p_normalDecimalSeparator;
+(id)paragraphProperties;
+(id)paragraphPropertiesAllowingNSNull;
+(id)presetStyleDescriptor;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)styleSummaryForPropertyMap:(id)arg0 ;
+(int)defaultIntValueForProperty:(int)arg0 ;
-(BOOL)p_contentTagIsBody;
-(BOOL)transformsFontSizes;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)minimumReadVersion;
-(char)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg0 ;
-(id)archivableRepresentationOfChangeSet:(id)arg0 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)fallbackFontColorWhenUnableToReadCharacterFillColor;
-(id)followingParagraphStyle;
-(id)fullPropertyMap;
-(id)getTypesetterAttributes:(id)arg0 scalePercent:(NSUInteger)arg1 isRightToLeft:(BOOL)arg2 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)initialListStyle;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)p_coreTextCharacterStyle:(id)arg0 allowLigatures:(BOOL)arg1 scalePercent:(NSUInteger)arg2 ;
-(id)parentStyleForFixingOrphanVariation;
-(id)styleSummary;
-(struct __CTFont *)findCachedFontForCharacterStyle:(id)arg0 scalePercent:(NSUInteger)arg1 ;
-(struct __CTParagraphStyle *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg0 writingDirection:(int)arg1 ;
-(void)addMissingClassProperties;
-(void)clearStyleCaches;
-(void)dealloc;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)localizeForBidi:(BOOL)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setInitialListStyle:(id)arg0 ;
-(void)setOverridePropertyMap:(id)arg0 ;
-(void)willModify;


@end


#endif