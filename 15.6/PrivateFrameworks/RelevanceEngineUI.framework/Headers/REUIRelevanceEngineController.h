// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REUIRELEVANCEENGINECONTROLLER_H
#define REUIRELEVANCEENGINECONTROLLER_H

@class NSMutableDictionary, NSArray, NSMutableSet, NSMutableArray, RERelevanceEnginePreferences, NSString, NSSet, RERelevanceEngine;
@protocol RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate, REUIRelevanceEngineControllerDelegate;

#import <Foundation/Foundation.h>

#import "_REUIControllerTrainingContext.h"
#import "REUITrainingContext.h"

@interface REUIRelevanceEngineController : NSObject <RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate>

 {
    NSMutableDictionary *_sectionNameOrdering;
    NSMutableDictionary *_currentElementStates;
    ? _delegateCallbacks;
    NSArray *_hiddenIndices;
    NSMutableSet *_hiddenBundleIdentifiers;
    NSMutableArray *_pendingOperations;
    RERelevanceEnginePreferences *_preferences;
    _REUIControllerTrainingContext *_trainingContext;
    BOOL _isShowingContentElements;
    BOOL _performingBatch;
}


@property (nonatomic) BOOL allowsLocationUse; // ivar: _allowsLocationUse
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REUIRelevanceEngineControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) RERelevanceEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumNegativeDwellTime;
@property (nonatomic) CGFloat minimumPositiveDwellTime;
@property (nonatomic) NSUInteger onScreenElementCount;
@property (readonly, nonatomic) NSArray *sectionOrder; // ivar: _sectionOrder
@property (readonly) Class superclass;
@property (readonly, nonatomic) REUITrainingContext *trainingContext;
@property (nonatomic) BOOL wantsIdealizedContent; // ivar: _wantsIdealizedContent
@property (nonatomic) BOOL wantsLiveDataSources; // ivar: _wantsLiveDataSources


-(BOOL)_isElementHidden:(id)arg0 ;
-(BOOL)_sectionHasContent:(id)arg0 ;
-(BOOL)elementIsAvailable:(id)arg0 ;
-(BOOL)isDataSourceEnabled:(id)arg0 ;
-(BOOL)relevanceEngine:(id)arg0 isElementAtPathVisible:(id)arg1 ;
-(NSInteger)_indexForSection:(id)arg0 ;
-(NSUInteger)_numberOfItemsInSectionAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfItemsInSectionAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_contentAtIndexPath:(id)arg0 ;
-(id)_contentForElement:(id)arg0 ;
-(id)_controllerIndexPathForEngineIndexPath:(id)arg0 ;
-(id)_elementAtIndexPath:(id)arg0 ;
-(id)_engineIndexPathForControllerIndexPath:(id)arg0 ;
-(id)_indexPathForElementWithIdentifier:(id)arg0 ;
-(id)_indexPathForSectionPath:(id)arg0 ;
-(id)_sectionAtIndex:(NSInteger)arg0 ;
-(id)_sectionPathForIndexPath:(id)arg0 ;
-(id)_sectionSupportingNoContentElements;
-(id)actionAtIndexPath:(id)arg0 ;
-(id)contentAtIndexPath:(id)arg0 ;
-(id)elementAtIndexPath:(id)arg0 ;
-(id)elementIdentifierAtIndexPath:(id)arg0 ;
-(id)elementsOrdered:(NSUInteger)arg0 relativeToElement:(id)arg1 ;
-(id)generateDiffableSnapshot;
-(id)identifierForElementAtIndexPath:(id)arg0 ;
-(id)indexPathForElementWithIdentifier:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 sectionOrder:(id)arg1 ;
-(id)interactionTypeForElement:(id)arg0 ;
-(id)metadataForElementWithIdentifier:(id)arg0 ;
-(id)predictedContentForSectionAtIndex:(NSUInteger)arg0 atDate:(id)arg1 limit:(NSInteger)arg2 ;
-(id)predictedElementsForSectionAtIndex:(NSUInteger)arg0 atDate:(id)arg1 limit:(NSInteger)arg2 ;
-(id)predictionForElementAtIndexPath:(id)arg0 ;
-(void)_enumerateEngineElementsInSection:(NSUInteger)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateEngineElementsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_loadNewRelevanceEngine:(id)arg0 withCompletion:(id)arg1 ;
// -(void)_performBatchUpdateUsingBlock:(id)arg0 completion:(unk)arg1  ;
-(void)_performOperations:(id)arg0 toSection:(NSUInteger)arg1 ;
-(void)_performOrEnqueueOperation:(id)arg0 ;
-(void)_setElement:(id)arg0 atIndexPath:(id)arg1 hidden:(BOOL)arg2 ;
-(void)dealloc;
-(void)elemenAtIndexPathDidDisplay:(id)arg0 ;
-(void)elementAtIndexPathDidEndDisplay:(id)arg0 ;
-(void)elementAtIndexPathWasSelected:(id)arg0 ;
-(void)makeCurrent;
-(void)relevanceEngine:(id)arg0 didInsertElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didMoveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg0 didReloadElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didRemoveElement:(id)arg1 atPath:(id)arg2 ;
// -(void)relevanceEngine:(id)arg0 performBatchUpdateBlock:(id)arg1 completion:(unk)arg2  ;
-(void)relevanceEngineDidBeginUpdatingRelevance:(id)arg0 ;
-(void)relevanceEngineDidFinishUpdatingRelevance:(id)arg0 ;
-(void)resignCurrent;
-(void)setDataSource:(id)arg0 enabled:(BOOL)arg1 ;


@end


#endif