// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNTHEME_H
#define KNTHEME_H

@class TSATheme, NSString, NSArray, NSMutableDictionary, TSUPointerKeyDictionary, NSDictionary, TSWPParagraphStyle;
@protocol KNSlideCollection, TSSPresetSource, TSKTransformableObject, TSKDocumentObject, TSDModelContainer, OS_dispatch_queue;


#import "KNSlideNode.h"
#import "KNLiveVideoSourceCollection.h"

@interface KNTheme : TSATheme <KNSlideCollection, TSSPresetSource, TSKTransformableObject, TSKDocumentObject, TSDModelContainer>

 {
    NSString *_UUID;
    NSArray *_templateSlides;
    NSMutableDictionary *_customEffectTimingCurves;
    NSObject<OS_dispatch_queue> *_defaultTemplateSlideNodeQueue;
    KNSlideNode *_defaultTemplateSlideNode;
    NSMutableDictionary *_slideNodesForFormulaReferenceNamesCache;
    TSUPointerKeyDictionary *_formulaReferenceNamesForSlideNodesCache;
}


@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSArray *classicThemeRecords; // ivar: _classicThemeRecords
@property (readonly, nonatomic) NSArray *containedModels;
@property (readonly, nonatomic) CGFloat cornerRadius;
@property (copy, nonatomic) NSDictionary *customEffectTimingCurves;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSWPParagraphStyle *defaultPresenterNotesParagraphStyle;
@property (readonly, nonatomic) KNSlideNode *defaultSlideNodeForNewSelection;
@property (retain, nonatomic) KNSlideNode *defaultTemplateSlideNode;
@property (readonly, nonatomic) BOOL defaultTemplateSlideNodeIsOurBestGuess; // ivar: _defaultTemplateSlideNodeIsOurBestGuess
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedSlideNodes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) KNLiveVideoSourceCollection *liveVideoSourceCollection; // ivar: _liveVideoSourceCollection
@property (readonly, nonatomic) NSArray *slideNodes;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *templateSlides;
@property (readonly, nonatomic) CGSize thumbnailSize;


+(id)classicThemeNameFromTheme:(id)arg0 ;
+(id)makeLiveVideoSourceCollectionWithContext:(id)arg0 ;
+(id)nativeThemeNameFromTheme:(id)arg0 ;
+(id)presetKinds;
+(id)themeNameForCustomOrUnknownTheme;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
+(void)initialize;
+(void)registerPresetSourceClasses;
-(BOOL)containsSlideNode:(id)arg0 ;
-(BOOL)containsTemplateSlideWithName:(id)arg0 ;
-(BOOL)customTimingCurvesContainsName:(id)arg0 ;
-(NSUInteger)indexOfSlideNode:(id)arg0 ;
-(id)childEnumerator;
-(id)customTimingCurveWithName:(id)arg0 ;
-(id)defaultSlideNodeForNewSelectionNearestToIndex:(NSUInteger)arg0 ;
-(id)formulaReferenceNameForSlideNode:(id)arg0 ;
-(id)i_findDefaultTemplateSlideDuringArchiving;
-(id)initWithContext:(id)arg0 documentStylesheet:(id)arg1 ;
-(id)mappedTemplateSlideForPasteForSlide:(id)arg0 ;
-(id)mappedTemplateSlideForPasteForTemplateSlide:(id)arg0 ;
-(id)mappedTemplateSlideForThemeChangeForTemplateSlide:(id)arg0 ;
-(id)modelPathComponentForChild:(id)arg0 ;
-(id)nameForTemplateSlideCopyWithName:(id)arg0 ;
-(id)orderedSlideNodesInSelection:(id)arg0 ;
-(id)p_findDefaultTemplateSlideWithoutLoadingSlides;
-(id)p_findFallbackDefaultTemplateSlide;
-(id)p_mappedTemplateSlideForTemplateSlide:(id)arg0 scoringHeuristic:(id)arg1 ;
-(id)p_nameByIncrementingCounterAfterStringToAppend:(id)arg0 forOriginalName:(id)arg1 testForExistingName:(id)arg2 ;
-(id)slideNamesMatchingPrefix:(id)arg0 ;
-(id)slideNodeForFormulaReferenceName:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)templateSlideWithName:(id)arg0 ;
-(id)themeCurvesForBuilds:(id)arg0 slideNodes:(id)arg1 ;
-(id)undeletableStyles;
-(id)updatedThemeCurveInfoForPastedThemeCurves:(id)arg0 ;
-(int)p_matchScoreForTemplateSlide:(id)arg0 toTemplateSlide:(id)arg1 ;
-(void)addClassicThemeRecord:(id)arg0 ;
-(void)addDefaultPresenterNotesStylesIfAbsent;
-(void)addTemplateSlideNode:(id)arg0 dolcContext:(id)arg1 ;
-(void)addTemplateSlideNode:(id)arg0 withThumbnails:(id)arg1 dolcContext:(id)arg2 ;
-(void)bootstrapBlackThemeOfSize:(struct CGSize )arg0 ;
-(void)bootstrapGradientThemeOfSize:(struct CGSize )arg0 ;
-(void)bootstrapThemeOfSize:(struct CGSize )arg0 alternate:(NSUInteger)arg1 ;
-(void)bootstrapWhiteThemeOfSize:(struct CGSize )arg0 ;
-(void)insertContainedModel:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertTemplateSlideNode:(id)arg0 withThumbnails:(id)arg1 atIndex:(NSUInteger)arg2 dolcContext:(id)arg3 ;
-(void)invalidateSlideNameCache;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveModel:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)p_cacheSlideNodes;
-(void)p_selectFallbackTemplateSlideAsDefault;
-(void)removeAllClassicThemeRecords;
-(void)removeAllTemplateSlides;
-(void)removeContainedModel:(id)arg0 ;
-(void)removeCustomTimingCurveWithName:(id)arg0 ;
-(void)removeTemplateSlideNode:(id)arg0 ;
-(void)resolveDefaultTemplateSlide;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)selectFallbackTemplateSlideAsDefault;
-(void)setCustomTimingCurve:(id)arg0 forName:(id)arg1 ;
-(void)takeLiveVideoSourceCollectionFromTheme:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif