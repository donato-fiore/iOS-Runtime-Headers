// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIRESULTSCOLLECTIONVIEWCONTROLLER_H
#define SEARCHUIRESULTSCOLLECTIONVIEWCONTROLLER_H

@class NSString, NSMutableSet, UIView, NSArray, UIControl<UITextInput>;
@protocol SearchUITableHeaderViewDelegate, SearchUITableHeaderCommandDelegate, SearchUIResultsTableBridgingProtocol, SearchUICommandDelegate, SFFeedbackListener, SearchUIKeyboardableTableViewDelegate, SearchUIResultsViewDelegate, SearchUISizingDelegate;


#import "SearchUICollectionViewController.h"
#import "SearchUITableModel.h"

@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController <SearchUITableHeaderViewDelegate, SearchUITableHeaderCommandDelegate, SearchUIResultsTableBridgingProtocol>



@property (nonatomic) CGFloat cachedHeaderHeight; // ivar: _cachedHeaderHeight
@property (copy, nonatomic) id *cellWillDisplayHandler;
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (retain, nonatomic) NSMutableSet *expandedSections; // ivar: _expandedSections
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener;
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat headerHeight;
@property (retain, nonatomic) NSArray *hiddenSections; // ivar: _hiddenSections
@property (weak) NSObject<SearchUIKeyboardableTableViewDelegate> *interactionDelegate;
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (weak) NSObject<SearchUIResultsViewDelegate> *resultsViewDelegate;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded; // ivar: _sectionsThatHaveBeenExpanded
@property (nonatomic) BOOL shortenTopFloatingHeader;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (weak) NSObject<SearchUISizingDelegate> *sizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (copy, nonatomic) id *tableViewDidUpdateHandler;
@property (copy, nonatomic) id *tableViewWillUpdateHandler;
@property (weak) UIControl<UITextInput> *textField;
@property (nonatomic) BOOL threeDTouchEnabled;


+(id)hiddenSectionsFromSections:(id)arg0 ;
-(BOOL)sectionShouldBeExpanded:(id)arg0 ;
-(BOOL)updateMustAccountForLayout;
-(NSInteger)_focusItemDeferralMode;
-(id)cellForItemAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)commandEnvironment;
-(id)init;
-(id)majorScrollView;
-(id)preferredFocusEnvironments;
-(void)didPresentToResumeSearch:(BOOL)arg0 ;
-(void)expandCellsIfNeeded;
-(void)highlightResult:(id)arg0 ;
-(void)highlightRowAtIndexPath:(id)arg0 ;
-(void)performExpansion:(BOOL)arg0 withSectionIndex:(NSUInteger)arg1 ;
-(void)purgeAndResetTable;
-(void)replaceResult:(id)arg0 withResult:(id)arg1 ;
-(void)resignTextFieldIfNeeded;
-(void)returnKeyPressed;
-(void)scrollTableToTop;
-(void)setFocusableIndexPath:(id)arg0 ;
-(void)showMoreSectionsWithShowMoreButtonRowModel:(id)arg0 ;
-(void)toggleExpansionForSection:(id)arg0 ;
-(void)updateWithResultSections:(id)arg0 scrollToTop:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismiss;


@end


#endif