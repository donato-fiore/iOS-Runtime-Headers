// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAVATARPICKERVIEWCONTROLLER_H
#define CKAVATARPICKERVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, CNGroupAvatarViewController, CNContactStore, NSMapTable;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate, CKAvatarTitleCollectionReusableViewDelegate, CKAvatarPickerViewControllerDelegate;


#import "CKEntity.h"
#import "CKConversation.h"
#import "CKAvatarPickerLayout.h"
#import "CKAvatarTitleCollectionReusableView.h"

@interface CKAvatarPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate, CKAvatarTitleCollectionReusableViewDelegate>



@property (retain, nonatomic) CKEntity *cachedAppleEntity; // ivar: _cachedAppleEntity
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAvatarPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController; // ivar: _groupAvatarViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indicatorType; // ivar: _indicatorType
@property (retain, nonatomic) CKAvatarPickerLayout *layout; // ivar: _layout
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) CNContactStore *suggestionsEnabledContactStore; // ivar: _suggestionsEnabledContactStore
@property (readonly) Class superclass;
@property (retain, nonatomic) CKAvatarTitleCollectionReusableView *titleView; // ivar: _titleView
@property (readonly, nonatomic) CGRect titleViewFrame;
@property (retain, nonatomic) NSMapTable *visibleTitleViews; // ivar: _visibleTitleViews


-(BOOL)avatarPickerLayoutShouldShowTitle:(id)arg0 ;
-(BOOL)avatarWantsTapAtPoint:(struct CGPoint )arg0 fromView:(id)arg1 ;
-(BOOL)chatIsReportedAsSpam;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)hasTitle;
-(NSInteger)_avatarTitleAccessoryImageType;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_preferredAvatarLayoutMode;
-(id)_configureCollectionView:(id)arg0 avatarViewCellForItemAtIndexPath:(id)arg1 ;
-(id)_configureCollectionView:(id)arg0 bannerViewCellForItemAtIndexPath:(id)arg1 ;
-(id)_configureCollectionView:(id)arg0 groupIdentityCellForItemAtIndexPath:(id)arg1 ;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg0 ;
-(id)_cutoutSupplementaryViewAtIndexPath:(id)arg0 ;
-(id)_titleSupplementaryViewAtIndexPath:(id)arg0 ;
-(id)avatarDisplayName;
-(id)avatarView:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithConversation:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(int)chatWasDetectedAsSMSSpam;
-(void)_animateInTitleView;
-(void)_animateOutTitleView;
-(void)_chatItemsDidChange:(id)arg0 ;
-(void)_chatPropertiesChanged:(id)arg0 ;
-(void)_handleAddressBookChange:(id)arg0 ;
-(void)_handleConversationIsFilteredChange:(id)arg0 ;
-(void)_handleConversationRecipientsDidChange:(id)arg0 ;
-(void)_handleGroupNameChange:(id)arg0 ;
-(void)_setTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)beganTouchingAvatarView;
-(void)beganTouchingTitleLabel;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)endedTouchingAvatarView;
-(void)endedTouchingTitleLabel;
-(void)loadView;
-(void)sendUpdatedRecentParticipantsToContacts;
-(void)setAvatarPickerActive:(BOOL)arg0 ;
-(void)tappedAvatarPickerViewController;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateGroupAvatarView;


@end


#endif