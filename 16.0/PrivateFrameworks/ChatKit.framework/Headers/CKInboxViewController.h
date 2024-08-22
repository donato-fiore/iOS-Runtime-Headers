// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINBOXVIEWCONTROLLER_H
#define CKINBOXVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSDictionary, UICollectionViewDiffableDataSource, UIViewController<CKConversationListControllerProtocol>, NSString, UICollectionViewCell, UITextView;
@protocol IMFocusStateManagerDelegate, UITextViewDelegate, CKInboxViewControllerDelegate;



@interface CKInboxViewController : UICollectionViewController <IMFocusStateManagerDelegate, UITextViewDelegate>

 {
    BOOL _isVisible;
}


@property (retain, nonatomic) NSArray *categoriesCellsDataArray; // ivar: _categoriesCellsDataArray
@property (retain, nonatomic) NSDictionary *cellDataForFilterMode; // ivar: _cellDataForFilterMode
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // ivar: _collectionViewDataSource
@property (retain, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController; // ivar: _conversationListController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKInboxViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UICollectionViewCell *initiallySelectedCell; // ivar: _initiallySelectedCell
@property (retain, nonatomic) NSArray *junkCellsDataArray; // ivar: _junkCellsDataArray
@property (retain, nonatomic) UITextView *pinnedFooterTextView; // ivar: _pinnedFooterTextView
@property (retain, nonatomic) NSArray *primaryCellsData; // ivar: _primaryCellsData
@property (retain, nonatomic) NSArray *recentlyDeletedCellDataArray; // ivar: _recentlyDeletedCellDataArray
@property (retain, nonatomic) UITextView *scrollingFooterTextView; // ivar: _scrollingFooterTextView
@property (readonly) Class superclass;


-(BOOL)_spamFilteringEnabled;
-(BOOL)_wantsThreeColumnLayout;
-(BOOL)shouldHideInboxFooterTextView;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)wantsCollapsedAppearance;
-(NSInteger)_categoriesSectionIndex;
-(NSInteger)_folderIndentationAtIndexPath:(id)arg0 ;
-(NSInteger)_junkSectionIndex;
-(NSInteger)_lastSectionIndex;
-(NSInteger)_primarySectionIndex;
-(NSInteger)_recentlyDeleteIndex;
-(NSUInteger)_filterModeForIndexPath:(id)arg0 ;
-(id)_conversationList;
-(id)_getHeaderStringForExtension:(id)arg0 ;
-(id)_getSpamExtensionName;
-(id)_setHeaderAttributedStringForFont:(id)arg0 ;
-(id)_unreadCountStringForIndexPath:(id)arg0 ;
-(id)_updateCategoriesCellsDataArray;
-(id)footerTextView;
-(id)initWithConversationListController:(id)arg0 ;
-(void)_chatUnreadCountDidChange:(id)arg0 ;
-(void)_contentSizeCategoryChanged;
-(void)_conversationListDidFinishSorting:(id)arg0 ;
-(void)_localeDidChange;
-(void)_messageFilteringEnabledDidChange:(id)arg0 ;
-(void)_spamFilteringStateChanged;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)focusStateDidChange;
-(void)reloadCollectionViewData;
-(void)setupCollectionView;
-(void)updateBackButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif