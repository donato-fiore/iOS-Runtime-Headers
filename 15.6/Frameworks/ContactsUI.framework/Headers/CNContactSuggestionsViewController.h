// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTSUGGESTIONSVIEWCONTROLLER_H
#define CNCONTACTSUGGESTIONSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, _PSContactSuggester, NSArray, NSString, UICollectionViewDiffableDataSource, NSMutableArray, UICollectionViewLayout;
@protocol UICollectionViewDelegate, CNContactSuggestionsViewControllerDelegate;


#import "CNAvatarImageRenderer.h"

@interface CNContactSuggestionsViewController : UIViewController <UICollectionViewDelegate>



@property (nonatomic) BOOL allowsMultiSelection; // ivar: _allowsMultiSelection
@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // ivar: _avatarRenderer
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly) _PSContactSuggester *contactSuggester; // ivar: _contactSuggester
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactSuggestionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) NSMutableArray *fetchedContacts; // ivar: _fetchedContacts
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *ignoredContactIdentifiers; // ivar: _ignoredContactIdentifiers
@property (retain, nonatomic) NSArray *interactionDomains; // ivar: _interactionDomains
@property (retain, nonatomic) UICollectionViewLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSArray *overrideSuggestedContacts; // ivar: _overrideSuggestedContacts
@property (readonly, nonatomic) NSArray *selectedContacts;
@property (retain, nonatomic) NSString *suggestionsHeaderTitle; // ivar: _suggestionsHeaderTitle
@property (readonly) Class superclass;


+(id)os_log;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)useAccessibleLayout;
-(CGFloat)estimatedHeightForSuggestionCount:(NSInteger)arg0 ;
-(id)compositionalLayout;
-(id)filterResults:(id)arg0 ;
-(id)init;
-(struct CGSize )itemSize;
-(void)buildCollectionView;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)fetchContacts;
-(void)fetchContactsIfNeeded;
-(void)fetchIgnoredContactIdentifiersIfNeeded;
-(void)imageForContact:(id)arg0 imageUpdateBlock:(id)arg1 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif