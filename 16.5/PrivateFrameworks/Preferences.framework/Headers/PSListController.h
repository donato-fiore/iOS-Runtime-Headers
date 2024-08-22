// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSLISTCONTROLLER_H
#define PSLISTCONTROLLER_H

@class NSMutableArray, NSMutableDictionary, UITableView, NSArray, NSString, UIView, UIKeyboard, NSIndexPath, UIColor, NSDictionary;
@protocol UIAppearance, UITableViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UIAlertViewDelegate, UIPopoverPresentationControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol, PSURLControllerHandlerDelegate, PSSpecifierDataSource, PSListControllerAppearanceProvider, PSListControllerNavigationCoordinator;


#import "PSViewController.h"
#import "PSURLControllerHandler.h"

@interface PSListController : PSViewController <UIAppearance, UITableViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UIAlertViewDelegate, UIPopoverPresentationControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol, PSURLControllerHandlerDelegate>

 {
    NSMutableArray *_prequeuedReusablePSTableCells;
    NSMutableDictionary *_cells;
    BOOL _cachesCells;
    BOOL _reusesCells;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    BOOL _keyboardWasVisible;
    BOOL _popupIsModal;
    BOOL _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    CGPoint _contentOffsetWithKeyboard;
    NSString *_highlightItemName;
    BOOL _isVisible;
    id<PSSpecifierDataSource> *_dataSource;
    BOOL _requestingSpecifiersFromDataSource;
    BOOL _sectionContentInsetInitialized;
    UIView *_containerView;
    UIKeyboard *_keyboard;
    NSIndexPath *_savedSelectedIndexPath;
    id<PSListControllerAppearanceProvider> *_appearanceProvider;
    id<PSListControllerNavigationCoordinator> *_navigationCoordinator;
}


@property (retain, nonatomic) UIColor *altTextColor; // ivar: _altTextColor
@property (retain, nonatomic) NSObject<PSListControllerAppearanceProvider> *appearanceProvider;
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *buttonTextColor; // ivar: _buttonTextColor
@property (retain, nonatomic) UIColor *cellAccessoryColor; // ivar: _cellAccessoryColor
@property (retain, nonatomic) UIColor *cellAccessoryHighlightColor; // ivar: _cellAccessoryHighlightColor
@property (retain, nonatomic) UIColor *cellHighlightColor; // ivar: _cellHighlightColor
@property (nonatomic) BOOL contentSizeDidChange; // ivar: _contentSizeDidChange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL edgeToEdgeCells; // ivar: _edgeToEdgeCells
@property (retain, nonatomic) UIColor *editableInsertionPointColor; // ivar: _editableInsertionPointColor
@property (retain, nonatomic) UIColor *editablePlaceholderTextColor; // ivar: _editablePlaceholderTextColor
@property (retain, nonatomic) UIColor *editableSelectionBarColor; // ivar: _editableSelectionBarColor
@property (retain, nonatomic) UIColor *editableSelectionHighlightColor; // ivar: _editableSelectionHighlightColor
@property (retain, nonatomic) UIColor *editableTextColor; // ivar: _editableTextColor
@property (retain, nonatomic) UIColor *footerHyperlinkColor; // ivar: _footerHyperlinkColor
@property (nonatomic) BOOL forceSynchronousIconLoadForCreatedCells; // ivar: _forceSynchronousIconLoadForCreatedCells
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PSListControllerNavigationCoordinator> *navigationCoordinator;
@property (readonly, nonatomic) NSInteger observerType;
@property (retain, nonatomic) UIColor *padSelectionColor; // ivar: _padSelectionColor
@property (retain, nonatomic) NSDictionary *pendingURLResourceDictionary; // ivar: _pendingURLResourceDictionary
@property (nonatomic, getter=isPrefetchingEnabled) BOOL prefetchingEnabled; // ivar: _prefetchingEnabled
@property (retain, nonatomic) UIColor *segmentedSliderTrackColor; // ivar: _segmentedSliderTrackColor
@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (nonatomic, getter=isShowingSetupController) BOOL showingSetupController; // ivar: _showingSetupController
@property (retain, nonatomic) NSObject<PSSpecifierDataSource> *specifierDataSource;
@property (copy, nonatomic) NSString *specifierIDPendingPush; // ivar: _specifierIDPendingPush
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) NSArray *unprotectedSpecifiers;
@property (retain, nonatomic) PSURLControllerHandler *urlHandler; // ivar: _urlHandler
@property (copy, nonatomic) id *urlHandlingCompletion; // ivar: _urlHandlingCompletion
@property (nonatomic) BOOL usesDarkTheme; // ivar: _usesDarkTheme


+(BOOL)displaysButtonBar;
+(id)aggregateReportingDomainOverride;
+(id)appearance;
+(id)appearanceForTraitCollection:(id)arg0 ;
+(id)appearanceForTraitCollection:(id)arg0 whenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg0 whenContainedInInstancesOfClasses:(id)arg1 ;
+(id)appearanceWhenContainedIn:(Class)arg0 ;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg0 ;
+(void)registerDefaultAppearanceProviderClass:(Class)arg0 ;
+(void)registerDefaultNavigationCoordinatorClass:(Class)arg0 ;
+(void)setAggregateReportingDomainOverride:(id)arg0 ;
-(BOOL)_getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifierAtIndex:(NSInteger)arg2 groups:(id)arg3 ;
-(BOOL)_isEmptyGroup:(NSUInteger)arg0 ;
-(BOOL)_isRegularWidth;
-(BOOL)containsSpecifier:(id)arg0 ;
-(BOOL)getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifier:(id)arg2 ;
-(BOOL)getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifierAtIndex:(NSInteger)arg2 ;
-(BOOL)getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifierID:(id)arg2 ;
-(BOOL)handlePendingURL;
-(BOOL)isValidCellStyle:(NSInteger)arg0 ;
-(BOOL)performActionForSpecifier:(id)arg0 ;
-(BOOL)performButtonActionForSpecifier:(id)arg0 ;
-(BOOL)performConfirmationActionForSpecifier:(id)arg0 ;
-(BOOL)performConfirmationAlternateActionForSpecifier:(id)arg0 ;
-(BOOL)performConfirmationCancelActionForSpecifier:(id)arg0 ;
-(BOOL)performLoadActionForSpecifier:(id)arg0 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg0 resourceDictionary:(id)arg1 animatePush:(*BOOL)arg2 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg0 resourceDictionary:(id)arg1 animatePush:(*BOOL)arg2 withCompletion:(id)arg3 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 urlDictionary:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)_getKeyboardIntersectionHeightFromUserInfo:(id)arg0 ;
-(CGFloat)_tableView:(id)arg0 heightForCustomInSection:(NSInteger)arg1 isHeader:(BOOL)arg2 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(Class)tableViewClass;
-(NSInteger)_nextGroupInSpecifiersAfterIndex:(NSInteger)arg0 inArray:(id)arg1 ;
-(NSInteger)indexForIndexPath:(id)arg0 ;
-(NSInteger)indexForRow:(NSInteger)arg0 inGroup:(NSInteger)arg1 ;
-(NSInteger)indexOfGroup:(NSInteger)arg0 ;
-(NSInteger)indexOfSpecifier:(id)arg0 ;
-(NSInteger)indexOfSpecifierID:(id)arg0 ;
-(NSInteger)numberOfGroups;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)rowsForGroup:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 titleAlignmentForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 titleAlignmentForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)tableViewStyle;
-(float)verticalContentOffset;
-(id)_createGroupIndices:(id)arg0 ;
-(id)_customViewForSpecifier:(id)arg0 class:(Class)arg1 isHeader:(BOOL)arg2 ;
-(id)_tableView:(id)arg0 viewForCustomInSection:(NSInteger)arg1 isHeader:(BOOL)arg2 ;
-(id)bundle;
-(id)cachedCellForSpecifier:(id)arg0 ;
-(id)cachedCellForSpecifierID:(id)arg0 ;
-(id)controllerForRowAtIndexPath:(id)arg0 ;
-(id)controllerForSpecifier:(id)arg0 ;
-(id)findFirstVisibleResponder;
-(id)getGroupSpecifierForSpecifier:(id)arg0 ;
-(id)getGroupSpecifierForSpecifierID:(id)arg0 ;
-(id)indexPathForIndex:(NSInteger)arg0 ;
-(id)indexPathForSpecifier:(id)arg0 ;
-(id)init;
-(id)initForContentSize:(struct CGSize )arg0 ;
-(id)loadSpecifiersFromPlistName:(id)arg0 target:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg0 target:(id)arg1 bundle:(id)arg2 ;
-(id)popupStylePopoverController;
-(id)selectSpecifier:(id)arg0 ;
-(id)specifier;
-(id)specifierAtIndex:(NSInteger)arg0 ;
-(id)specifierAtIndexPath:(id)arg0 ;
-(id)specifierForID:(id)arg0 ;
-(id)specifierID;
-(id)specifiers;
-(id)specifiersForIDs:(id)arg0 ;
-(id)specifiersInGroup:(NSInteger)arg0 ;
-(id)table;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 detailTextForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(struct _NSRange )rangeOfSpecifiersInGroupID:(id)arg0 ;
-(void)_addIdentifierForSpecifier:(id)arg0 ;
-(void)_ensureAppearanceProviderAndNavigationCoordinator;
-(void)_insertContiguousSpecifiers:(id)arg0 atIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_loadBundleControllers;
-(void)_moveSpecifierAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_performHighlightForSpecifierWithID:(id)arg0 ;
-(void)_performHighlightForSpecifierWithID:(id)arg0 tryAgainIfFailed:(BOOL)arg1 ;
-(void)_removeContiguousSpecifiers:(id)arg0 animated:(BOOL)arg1 ;
-(void)_removeIdentifierForSpecifier:(id)arg0 ;
-(void)_returnKeyPressed:(id)arg0 ;
-(void)_scrollToSpecifierNamed:(id)arg0 ;
-(void)_scrollToSpecifierWithID:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setContentInset:(CGFloat)arg0 ;
-(void)_setNotShowingSetupController;
-(void)_unloadBundleControllers;
-(void)_updateSectionContentInsetWithAnimation:(BOOL)arg0 ;
-(void)addSpecifier:(id)arg0 ;
-(void)addSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)addSpecifiersFromArray:(id)arg0 ;
-(void)addSpecifiersFromArray:(id)arg0 animated:(BOOL)arg1 ;
-(void)beginUpdates;
-(void)clearCache;
-(void)clearPendingURL;
-(void)confirmationViewAcceptedForSpecifier:(id)arg0 ;
-(void)confirmationViewAlternateAcceptedForSpecifier:(id)arg0 ;
-(void)confirmationViewCancelledForSpecifier:(id)arg0 ;
-(void)contentSizeDidChange:(id)arg0 ;
-(void)createGroupIndices;
-(void)createPrequeuedPSTableCells:(NSUInteger)arg0 ;
-(void)dataSource:(id)arg0 performUpdates:(id)arg1 ;
-(void)dealloc;
-(void)delayedContentSizeDidChange;
-(void)didBecomeActive:(id)arg0 ;
-(void)dismissConfirmationViewAnimated:(BOOL)arg0 ;
-(void)dismissPopover;
-(void)dismissPopoverAnimated:(BOOL)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPopoverWithCompletion:(id)arg0 ;
-(void)endUpdates;
-(void)formSheetViewWillDisappear;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)highlightSpecifierWithID:(id)arg0 ;
-(void)insertContiguousSpecifiers:(id)arg0 afterSpecifier:(id)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg0 afterSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg0 afterSpecifierID:(id)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg0 afterSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg0 atEndOfGroup:(NSInteger)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg0 atEndOfGroup:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg0 atIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)insertSpecifier:(id)arg0 afterSpecifier:(id)arg1 ;
-(void)insertSpecifier:(id)arg0 afterSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertSpecifier:(id)arg0 afterSpecifierID:(id)arg1 ;
-(void)insertSpecifier:(id)arg0 afterSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertSpecifier:(id)arg0 atEndOfGroup:(NSInteger)arg1 ;
-(void)insertSpecifier:(id)arg0 atEndOfGroup:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)insertSpecifier:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertSpecifier:(id)arg0 atIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)invalidateSpecifiersForDataSource:(id)arg0 ;
-(void)lazyLoadBundle:(id)arg0 ;
-(void)loadView;
-(void)loseFocus;
-(void)migrateSpecifierMetadataFrom:(id)arg0 to:(id)arg1 ;
-(void)performSpecifierUpdates:(id)arg0 ;
-(void)popupViewWillDisappear;
-(void)prefetchResourcesFor:(id)arg0 ;
-(void)prepareSpecifiersMetadata;
-(void)pushController:(id)arg0 animate:(BOOL)arg1 ;
-(void)reload;
-(void)reloadIconForSpecifierForBundle:(id)arg0 ;
-(void)reloadSpecifier:(id)arg0 ;
-(void)reloadSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadSpecifierAtIndex:(NSInteger)arg0 ;
-(void)reloadSpecifierAtIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)reloadSpecifierID:(id)arg0 ;
-(void)reloadSpecifierID:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(void)removeContiguousSpecifiers:(id)arg0 ;
-(void)removeContiguousSpecifiers:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeLastSpecifier;
-(void)removeLastSpecifierAnimated:(BOOL)arg0 ;
-(void)removeSpecifier:(id)arg0 ;
-(void)removeSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeSpecifierAtIndex:(NSInteger)arg0 ;
-(void)removeSpecifierAtIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)removeSpecifierID:(id)arg0 ;
-(void)removeSpecifierID:(id)arg0 animated:(BOOL)arg1 ;
-(void)replaceContiguousSpecifiers:(id)arg0 withSpecifiers:(id)arg1 ;
-(void)replaceContiguousSpecifiers:(id)arg0 withSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)returnPressedAtEnd;
-(void)selectRowForSpecifier:(id)arg0 ;
-(void)setCachesCells:(BOOL)arg0 ;
-(void)setDesiredVerticalContentOffset:(float)arg0 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg0 ;
-(void)setReusesCells:(BOOL)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)setSpecifierID:(id)arg0 ;
-(void)setSpecifiers:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)showConfirmationViewForSpecifier:(id)arg0 ;
-(void)showConfirmationViewForSpecifier:(id)arg0 useAlert:(BOOL)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg0 useAlert:(BOOL)arg1 swapAlertButtons:(BOOL)arg2 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)showPINSheet:(id)arg0 ;
-(void)showPINSheet:(id)arg0 allowOptionsButton:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 prefetchRowsAtIndexPaths:(id)arg1 ;
-(void)updateSpecifiers:(id)arg0 withSpecifiers:(id)arg1 ;
-(void)updateSpecifiersInRange:(struct _NSRange )arg0 withSpecifiers:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif