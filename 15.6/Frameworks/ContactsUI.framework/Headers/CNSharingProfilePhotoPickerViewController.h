// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSHARINGPROFILEPHOTOPICKERVIEWCONTROLLER_H
#define CNSHARINGPROFILEPHOTOPICKERVIEWCONTROLLER_H

@class UIViewController, CNContact, UIButton, NSString, NSArray, NSData, PRMonogramColor, UIImageView, UICollectionViewFlowLayout, UICollectionView;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarRecord, CNSharingProfilePhotoPickerViewControllerDelegate;


#import "CNPhotoPickerColorVariant.h"
#import "CNSharingProfileAvatarItemProviderConfiguration.h"
#import "CNSharingProfileAvatarItemProvider.h"
#import "CNSharingProfileLogger.h"
#import "CNSharingProfilePhotoPickerItem.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNSharingProfilePhotoPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>



@property (retain, nonatomic) CNPhotoPickerColorVariant *animojiBackgroundColor; // ivar: _animojiBackgroundColor
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration; // ivar: _avatarItemProviderConfiguration
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UIButton *customizeButton; // ivar: _customizeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNSharingProfilePhotoPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSmallScreenDevice; // ivar: _isSmallScreenDevice
@property (retain, nonatomic) CNSharingProfileAvatarItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (retain, nonatomic) NSData *memojiMetadata;
@property (retain, nonatomic) PRMonogramColor *monogramBackgroundColor; // ivar: _monogramBackgroundColor
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (retain, nonatomic) UIImageView *previewView; // ivar: _previewView
@property (retain, nonatomic) CNSharingProfilePhotoPickerItem *selectedItem; // ivar: _selectedItem
@property (retain, nonatomic) UICollectionViewFlowLayout *selectorLayout; // ivar: _selectorLayout
@property (retain, nonatomic) UICollectionView *selectorView; // ivar: _selectorView
@property (readonly) Class superclass;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


-(CGFloat)previewEdgeSize;
-(CGFloat)previewToSelectorSpacing;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)buildItems;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithContact:(id)arg0 avatarRecord:(id)arg1 avatarItemProviderConfiguration:(id)arg2 logger:(id)arg3 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didSelectCustomizeButton:(id)arg0 ;
-(void)reloadData;
-(void)reloadItems;
-(void)setupConstraints;
-(void)updateInteritemSpacing;
-(void)updatePreviewForSelectedItem;
-(void)updateWithContact:(id)arg0 fromFullPhotoPicker:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif