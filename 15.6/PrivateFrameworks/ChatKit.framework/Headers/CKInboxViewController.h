// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKINBOXVIEWCONTROLLER_H
#define CKINBOXVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, UICollectionView, UICollectionViewDiffableDataSource, UIViewController<CKConversationListControllerProtocol>, NSString, UITextView;
@protocol UITextViewDelegate, UICollectionViewDelegate;



@interface CKInboxViewController : UIViewController <UITextViewDelegate, UICollectionViewDelegate>

 {
    BOOL _isVisible;
}


@property (retain, nonatomic) NSMutableArray *categoriesCellDataArray; // ivar: _categoriesCellDataArray
@property (nonatomic) NSInteger categoriesIndexSection; // ivar: _categoriesIndexSection
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // ivar: _collectionViewDataSource
@property (retain, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController; // ivar: _conversationListController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *footerCellDataArray; // ivar: _footerCellDataArray
@property (nonatomic) NSInteger footerIndexSection; // ivar: _footerIndexSection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *junkCellDataArray; // ivar: _junkCellDataArray
@property (nonatomic) NSInteger junkIndexSection; // ivar: _junkIndexSection
@property (nonatomic) NSInteger primaryIndexSection; // ivar: _primaryIndexSection
@property (retain, nonatomic) UITextView *scrollingFooterTextView; // ivar: _scrollingFooterTextView
@property (retain, nonatomic) UITextView *stickyFooterTextView; // ivar: _stickyFooterTextView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *tableCellDataArray; // ivar: _tableCellDataArray


-(BOOL)_spamFilteringEnabled;
-(BOOL)shouldHideInboxFooterTextView;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(NSUInteger)_filterModeForIndexPath:(id)arg0 ;
-(id)_conversationList;
-(id)_getHeaderStringForExtension:(id)arg0 ;
-(id)_getSpamExtensionName;
-(id)_indexPathForFilterMode:(NSUInteger)arg0 ;
-(id)_setHeaderAttributedString;
-(id)_unreadCountStringForIndexPath:(id)arg0 ;
-(id)footerTextView;
-(id)initWithConversationListController:(id)arg0 ;
-(void)_chatUnreadCountDidChange:(id)arg0 ;
-(void)_contentSizeCategoryChanged;
-(void)_highlightCurrentfilterMode;
-(void)_spamFilteringStateChanged;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)reloadCollectionViewData;
-(void)reloadCollectionViewDataWithConversationListUpdate:(BOOL)arg0 ;
-(void)updateBackButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif