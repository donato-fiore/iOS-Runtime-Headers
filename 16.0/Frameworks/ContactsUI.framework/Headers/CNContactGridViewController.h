// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTGRIDVIEWCONTROLLER_H
#define CNCONTACTGRIDVIEWCONTROLLER_H

@class UICollectionViewController, UIColor, CNContactFormatter, NSString, NSIndexPath, NSArray, NSDictionary, NSMutableDictionary;
@protocol CNContactDataSourceDelegate, CNAvatarViewDelegate, CNQuickActionsViewDelegate, CNContactDataSource, CNContactGridViewControllerDelegate, CNKeyDescriptor;


#import "CNContactGridViewLayout.h"

@interface CNContactGridViewController : UICollectionViewController <CNContactDataSourceDelegate, CNAvatarViewDelegate, CNQuickActionsViewDelegate>



@property (nonatomic) UIEdgeInsets avatarMargins; // ivar: _avatarMargins
@property (nonatomic) CGSize avatarSize; // ivar: _avatarSize
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactGridViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNKeyDescriptor> *descriptorForRequiredKeys;
@property (retain) CNContactGridViewLayout *gridLayout; // ivar: _gridLayout
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indexOfContactWithExpandedInlineActions;
@property (copy) NSIndexPath *indexPathOfContactWithExpandedInlineActions;
@property (copy, nonatomic) NSArray *inlineActionsCategories; // ivar: _inlineActionsCategories
@property (nonatomic) BOOL inlineActionsEnabled; // ivar: _inlineActionsEnabled
@property (nonatomic) NSInteger monogrammerStyle; // ivar: _monogrammerStyle
@property (copy, nonatomic) NSDictionary *nameTextAttributes; // ivar: _nameTextAttributes
@property (nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (retain, nonatomic) NSMutableDictionary *preloadedActionsManagers; // ivar: _preloadedActionsManagers
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)_globalIndexForIndexPath:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_contactAtIndexPath:(id)arg0 ;
-(id)_indexPathForGlobalIndex:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)viewControllerForActionsView:(id)arg0 ;
-(void)_configureCell:(id)arg0 ;
-(void)_updateItemSize;
-(void)actionsView:(id)arg0 didPerformAction:(id)arg1 ;
-(void)actionsView:(id)arg0 willShowActions:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)contactDataSourceDidChange:(id)arg0 ;
-(void)preloadInlineActionsForContactsAtIndexes:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg0 ;


@end


#endif