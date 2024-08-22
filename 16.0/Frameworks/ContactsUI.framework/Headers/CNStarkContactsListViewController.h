// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSTARKCONTACTSLISTVIEWCONTROLLER_H
#define CNSTARKCONTACTSLISTVIEWCONTROLLER_H

@class NSString, NSArray, AVExternalDevice, UIView;
@protocol CNContactListViewControllerDelegate;


#import "CNContactListViewController.h"
#import "CNContactListCollectionView.h"
#import "CNStarkNoContentBannerView.h"

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate>



@property (retain, nonatomic) CNContactListCollectionView *contactListTableView; // ivar: _contactListTableView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayedContactProperties; // ivar: _displayedContactProperties
@property (retain, nonatomic) AVExternalDevice *externalDevice; // ivar: _externalDevice
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL limitedUI; // ivar: _limitedUI
@property (retain, nonatomic) CNStarkNoContentBannerView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UIView *siriHeaderView; // ivar: _siriHeaderView
@property (readonly) Class superclass;


// +(id)collectionViewLayoutWithFloatingHeaderViews:(BOOL)arg0 contactListStyleApplier:(id)arg1 directionalLayoutMargins:(id)arg2 hasNoContacts:(unk)arg3  ;
+(id)makeContactsDisplayedProperties;
-(BOOL)canManageDuplicateContacts;
-(BOOL)shouldShowDuplicateBannerView;
-(CGFloat)headerViewWidthForSize:(struct CGSize )arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemsAtIndexPaths:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contactListStyleApplier;
-(id)createCollectionView;
-(id)init;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 searchable:(BOOL)arg1 environment:(id)arg2 shouldUseLargeTitle:(BOOL)arg3 ;
-(struct NSDirectionalEdgeInsets )viewDirectionalLayoutMargins;
-(void)contactDataSourceDidChange:(id)arg0 ;
-(void)contactListViewController:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactListViewController:(id)arg0 didSelectContact:(id)arg1 shouldScrollToContact:(BOOL)arg2 ;
-(void)dealloc;
-(void)handleSiriHeaderViewTap:(id)arg0 ;
-(void)limitedUINotification:(id)arg0 ;
-(void)postMessageOverlayIfNecessary;
-(void)refreshTableViewHeaderWithSize:(struct CGSize )arg0 ;
-(void)setupDataSource;
-(void)showContactListTableView;
-(void)showOverlayView;
-(void)updateLimitedUI;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif