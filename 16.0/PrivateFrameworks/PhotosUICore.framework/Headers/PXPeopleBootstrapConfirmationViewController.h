// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEBOOTSTRAPCONFIRMATIONVIEWCONTROLLER_H
#define PXPEOPLEBOOTSTRAPCONFIRMATIONVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSString, NSTimer;
@protocol PXPeopleSuggestionManagerDelegate, PXPeopleFlowViewController, PXPeopleFlowViewControllerActionDelegate, PXPeoplePickerConfigurationControllerDelegate;


#import "PXPeopleBootstrapContext.h"
#import "PXPeopleSuggestionManager.h"

@interface PXPeopleBootstrapConfirmationViewController : UICollectionViewController <PXPeopleSuggestionManagerDelegate, PXPeopleFlowViewController>



@property (weak, nonatomic) NSObject<PXPeopleFlowViewControllerActionDelegate> *actionDelegate; // ivar: actionDelegate
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext; // ivar: _bootstrapContext
@property (weak, nonatomic) NSObject<PXPeoplePickerConfigurationControllerDelegate> *configControllerDelegate; // ivar: _configControllerDelegate
@property (retain, nonatomic) NSArray *currentSuggestions; // ivar: _currentSuggestions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSelectionEverChanged; // ivar: _hasSelectionEverChanged
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize lastSize; // ivar: _lastSize
@property (retain, nonatomic) NSTimer *loadingDelayTimer; // ivar: _loadingDelayTimer
@property (readonly, nonatomic) CGSize preferredSize;
@property (readonly, nonatomic) NSArray *presentationStatuses;
@property (readonly, nonatomic) BOOL shouldConfirmAdvancement;
@property (readonly, nonatomic) PXPeopleSuggestionManager *suggestionManager; // ivar: _suggestionManager
@property (nonatomic) BOOL suggestionsPresented; // ivar: _suggestionsPresented
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode
@property (nonatomic) NSUInteger viewState; // ivar: _viewState
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (nonatomic) BOOL willAppear; // ivar: _willAppear


-(CGFloat)_wonkyAutomaticContentOffset;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_localizedPromptString;
-(id)_sortedIndexPathsForVisibleCells;
-(id)_titleForHeaderView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithContext:(id)arg0 dataSource:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )_sectionInsets;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_badgeLoadingCells;
-(void)_cacheCurrentSuggestions;
-(void)_evaluateIfSuggestionPresentationFinished;
-(void)_finishedPresentingSuggestions;
-(void)_markSkippedSuggestions;
-(void)_noSuggestionsFound;
-(void)_startLoadingTimer;
-(void)_toggleConfirmedForCollectionViewCell:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_updateHeaderContent;
-(void)_updateNavigationBarForCurrentTraitCollection;
-(void)_updateViewWithViewState:(NSUInteger)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)keyFaceUpdated:(id)arg0 ;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)suggestionManager:(id)arg0 hasNewSuggestionsAvailable:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateImageForCell:(id)arg0 withPerson:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg0 ;
-(void)willTransitionToNextInFlow;


@end


#endif