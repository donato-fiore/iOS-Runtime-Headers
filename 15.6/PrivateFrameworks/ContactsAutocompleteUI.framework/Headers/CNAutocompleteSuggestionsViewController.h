// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETESUGGESTIONSVIEWCONTROLLER_H
#define CNAUTOCOMPLETESUGGESTIONSVIEWCONTROLLER_H

@class UIViewController, CNAvatarImageRenderer, UICollectionView, NSString, UICollectionViewDiffableDataSource, NSMutableArray, NSArray, UICollectionViewLayout, NSNumber;
@protocol UICollectionViewDelegate, CNAutocompleteSearchConsumer, CNAutocompleteSuggestionsViewControllerDelegate, NSObject, OS_dispatch_source;


#import "CNAutocompleteSearchManager.h"

@interface CNAutocompleteSuggestionsViewController : UIViewController <UICollectionViewDelegate, CNAutocompleteSearchConsumer>



@property (nonatomic) CGFloat additionalBottomInset; // ivar: _additionalBottomInset
@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // ivar: _avatarRenderer
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAutocompleteSuggestionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) NSMutableArray *fetchedRecipients; // ivar: _fetchedRecipients
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSObject<NSObject> *keyboardWillHideNotificationObserver; // ivar: _keyboardWillHideNotificationObserver
@property (retain, nonatomic) NSObject<NSObject> *keyboardWillShowNotificationObserver; // ivar: _keyboardWillShowNotificationObserver
@property (nonatomic) CGRect latestKeyboardFrame; // ivar: _latestKeyboardFrame
@property (retain, nonatomic) UICollectionViewLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSArray *otherRecipientAddresses; // ivar: _otherRecipientAddresses
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) CNAutocompleteSearchManager *searchManager; // ivar: _searchManager
@property (nonatomic) NSUInteger searchType; // ivar: _searchType
@property (retain, nonatomic) NSArray *selectedRecipients; // ivar: _selectedRecipients
@property (copy, nonatomic) id *suggestionPreWarmCompletionBlock; // ivar: _suggestionPreWarmCompletionBlock
@property (nonatomic) BOOL suggestionsAreUpdating; // ivar: _suggestionsAreUpdating
@property (retain, nonatomic) NSObject<OS_dispatch_source> *suggestionsFetchDebounceTimer; // ivar: _suggestionsFetchDebounceTimer
@property (retain, nonatomic) NSString *suggestionsHeaderTitle; // ivar: _suggestionsHeaderTitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *taskID; // ivar: _taskID


+(id)os_log;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)useAccessibleLayout;
-(id)compositionalLayout;
-(id)contactsForAvatarForRecipient:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSearchType:(NSUInteger)arg0 ;
-(id)selectedRecipientHandles;
-(id)unknownContactForRecipient:(id)arg0 ;
-(struct CGSize )itemSize;
-(void)adjustInsetsForKeyboardFrame:(struct CGRect )arg0 ;
-(void)buildCollectionView;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)conformResultsForDeselection:(id)arg0 ;
-(void)conformResultsForSelection;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)dealloc;
-(void)fetchRecipients;
-(void)fetchRecipientsIfNeeded;
-(void)fetchSuggestedRecipientsWithCompletionBlock:(id)arg0 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg0 ;
-(void)imageForRecipient:(id)arg0 imageUpdateBlock:(id)arg1 ;
-(void)invalidateSelectedRecipients;
-(void)prepareForReuse;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)titleLabelTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif