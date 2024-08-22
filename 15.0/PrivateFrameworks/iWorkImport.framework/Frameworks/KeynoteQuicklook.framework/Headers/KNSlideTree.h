// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNSLIDETREE_H
#define KNSLIDETREE_H

@class TSPContainedObject, NSMutableOrderedSet, NSMutableDictionary, NSMapTable, NSString, NSArray, NSNumberFormatter;
@protocol KNSlideCollection;


#import "KNSlideNode.h"

@interface KNSlideTree : TSPContainedObject <KNSlideCollection>

 {
    NSMutableOrderedSet *_slideNodes;
    NSMutableDictionary *_slideNodesForUniqueIdentifiersCache;
    NSMutableDictionary *_slideNodesForFormulaReferenceNamesCache;
    NSMapTable *_formulaReferenceNamesForSlideNodesCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) KNSlideNode *defaultSlideNodeForNewSelection;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayedSlideNodes; // ivar: _displayedSlideNodeCache
@property (retain) NSNumberFormatter *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *slideNodes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visibleSlideNodes;


+(BOOL)areMultipleMasterTypesInCollection:(id)arg0 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg0 atDepths:(id)arg1 minimumValidDepth:(NSUInteger)arg2 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg0 atDepths:(id)arg1 minimumValidDepth:(NSUInteger)arg2 canExceedSlideTreeMaxDepth:(BOOL)arg3 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg0 minimumValidDepth:(NSUInteger)arg1 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg0 minimumValidDepth:(NSUInteger)arg1 canExceedSlideTreeMaxDepth:(BOOL)arg2 ;
-(BOOL)containsSlideNode:(id)arg0 ;
-(BOOL)slideNodeIsDisplayed:(id)arg0 ;
-(NSUInteger)byBuildPageIndexForSlideIndex:(NSUInteger)arg0 andEventIndex:(NSUInteger)arg1 ;
-(NSUInteger)indexOfSlideNode:(id)arg0 ;
-(NSUInteger)numberOfSlidesUsingTemplateSlide:(id)arg0 ;
-(NSUInteger)slideNumberForSlideNode:(id)arg0 ;
-(NSUInteger)visiblePageCountIsSeparatedByBuilds:(BOOL)arg0 ;
-(id)childrenOfSlideNode:(id)arg0 ;
-(id)defaultSlideNodeForNewSelectionNearestToIndex:(NSUInteger)arg0 ;
-(id)descendantsOfSlideNode:(id)arg0 omitSkippedSlideNodes:(BOOL)arg1 omitCollapsedSlideNodes:(BOOL)arg2 ;
-(id)formulaReferenceNameForSlideNode:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 owner:(id)arg2 ;
-(id)initWithOwner:(id)arg0 ;
-(id)objectEnumerator;
-(id)orderedSlideNodesInSelection:(id)arg0 ;
-(id)parentOfSlideNode:(id)arg0 ;
-(id)slideNamesMatchingPrefix:(id)arg0 ;
-(id)slideNodeAfterSlideNode:(id)arg0 omitSkippedSlideNodes:(BOOL)arg1 omitCollapsedSlideNodes:(BOOL)arg2 ;
-(id)slideNodeAtIndex:(NSUInteger)arg0 ignoreHiddenNodes:(BOOL)arg1 ;
-(id)slideNodeBeforeSlideNode:(id)arg0 omitSkippedSlideNodes:(BOOL)arg1 omitCollapsedSlideNodes:(BOOL)arg2 ;
-(id)slideNodeForFormulaReferenceName:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)slideNodeWithUniqueIdentifier:(id)arg0 ;
-(id)slideNodesInAscendingOrder:(id)arg0 ;
-(id)slidesUsingTemplateSlide:(id)arg0 ;
-(id)unhiddenSlideNodeAtIndex:(NSUInteger)arg0 ;
-(void)addSlideNode:(id)arg0 atDepth:(NSUInteger)arg1 dolcContext:(id)arg2 ;
-(void)addSlideNodeForDocumentUpgrade:(id)arg0 atDepth:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)insertSlideNodes:(id)arg0 atIndexes:(id)arg1 slideNodesChangingDepths:(id)arg2 depthsOfSlideNodesChangingDepths:(id)arg3 dolcContext:(id)arg4 ;
-(void)invalidateSlideNameCache;
-(void)moveSlideNodes:(id)arg0 fromIndexes:(id)arg1 toIndexes:(id)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4 ;
-(void)p_cacheSlideNodes;
-(void)p_clearSlideNodeCache;
-(void)reloadDisplayedNodes;
-(void)removeAll;
-(void)removeSlideNodes:(id)arg0 atIndexes:(id)arg1 slideNodesChangingDepths:(id)arg2 depthsOfSlideNodesChangingDepths:(id)arg3 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)slideIndex:(*NSUInteger)arg0 andEventIndex:(*NSUInteger)arg1 forByBuildPageIndex:(NSUInteger)arg2 ;


@end


#endif