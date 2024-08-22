// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUONEUPSUGGESTIONSCONTROLLER_H
#define PUONEUPSUGGESTIONSCONTROLLER_H

@class NSString, NSMutableDictionary;
@protocol PUBrowsingViewModelChangeObserver, PUOneUpSuggestionsControllerDelegate;

#import <Foundation/Foundation.h>

#import "PUBrowsingViewModel.h"
#import "PUAssetReference.h"
#import "PUOneUpSuggestionsProvider.h"

@interface PUOneUpSuggestionsController : NSObject <PUBrowsingViewModelChangeObserver>

 {
    BOOL _willPerformUpdates;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOneUpSuggestionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUAssetReference *focusedAssetReference; // ivar: _focusedAssetReference
@property (nonatomic, getter=isFocusedLongEnough) BOOL focusedLongEnough; // ivar: _focusedLongEnough
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInFocus) BOOL inFocus; // ivar: _inFocus
@property (nonatomic) CGFloat lastFocusedAssetReferenceChangeTime; // ivar: _lastFocusedAssetReferenceChangeTime
@property (readonly, nonatomic) NSMutableDictionary *suggestionInfos; // ivar: _suggestionInfos
@property (readonly, nonatomic) PUOneUpSuggestionsProvider *suggestionsProvider; // ivar: _suggestionsProvider
@property (readonly) Class superclass;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible; // ivar: _viewVisible


-(BOOL)_canBeginDisplayingSuggestionsForAssetReference:(id)arg0 ;
-(BOOL)_canKeepDisplayingSuggestionsForAssetReference:(id)arg0 ;
-(BOOL)_needsUpdate;
-(id)_suggestionInfoForAssetReference:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)init;
-(id)initWithSuggestionsProvider:(id)arg0 browsingViewModel:(id)arg1 ;
-(void)_dismissSuggestionInfo:(id)arg0 ;
-(void)_handleDataSourceChange:(id)arg0 ;
-(void)_handleSuggestionForAssetReference:(id)arg0 ;
-(void)_invalidateActiveSuggestionsWindow;
-(void)_invalidateFocusedAssetReference;
-(void)_invalidateFocusedLongEnough;
-(void)_invalidateInFocus;
-(void)_invalidateSuggestionsVisibility;
-(void)_removeSuggestionInfoForAssetReference:(id)arg0 ;
-(void)_requestSuggestionForAssetReference:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateActiveSuggestionsWindowIfNeeded;
-(void)_updateFocusedAssetReferenceIfNeeded;
-(void)_updateFocusedLongEnoughIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateInFocus;
-(void)_updateSuggestions;
-(void)invalidateLayout;
-(void)invalidateLayoutForAssetReference:(id)arg0 ;
-(void)invalidateSuggestions;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif