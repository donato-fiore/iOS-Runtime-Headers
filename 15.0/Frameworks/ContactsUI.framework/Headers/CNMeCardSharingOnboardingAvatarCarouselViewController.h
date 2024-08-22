// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGONBOARDINGAVATARCAROUSELVIEWCONTROLLER_H
#define CNMECARDSHARINGONBOARDINGAVATARCAROUSELVIEWCONTROLLER_H

@class UIViewController, UICollectionView, CNContact, NSString, NSArray, PRMonogramColor;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, AVTAvatarRecord, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate;


#import "CNMeCardSharingOnboardingAvatarCarouselItem.h"
#import "CNMeCardSharingOnboardingAvatarCarouselLayout.h"
#import "CNSharingProfileLogger.h"

@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>



@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem; // ivar: _animojiItem
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselLayout *layout; // ivar: _layout
@property (readonly, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (retain, nonatomic) PRMonogramColor *monogramColor; // ivar: _monogramColor
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem; // ivar: _monogramItem
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem; // ivar: _photoItem
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem; // ivar: _photoPickerItem
@property (readonly, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)animojiItemWithRecord:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)contactImageItemWithContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 avatarRecord:(id)arg1 logger:(id)arg2 ;
-(id)monogramImageItemWithContact:(id)arg0 ;
-(id)standardItems;
-(void)buildItems;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)notifyDelegateOfUpdateToCenterMostItem;
-(void)reloadForUpdatedContactPhoto;
-(void)reloadForUpdatedMonogram;
-(void)scrollToItemAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif