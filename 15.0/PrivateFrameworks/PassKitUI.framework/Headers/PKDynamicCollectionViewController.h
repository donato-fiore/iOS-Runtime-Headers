// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDYNAMICCOLLECTIONVIEWCONTROLLER_H
#define PKDYNAMICCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, UICollectionViewDiffableDataSource, NSArray, NSDictionary, NSMutableDictionary, UICollectionView, NSString;
@protocol PKPaymentSetupViewControllerLifeCycleDelegate, UICollectionViewDelegate;



@interface PKDynamicCollectionViewController : UIViewController <PKPaymentSetupViewControllerLifeCycleDelegate, UICollectionViewDelegate>

 {
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_sectionIdentifiers;
    NSDictionary *_sectionMap;
    NSMutableDictionary *_supplementaryViewRegistrations;
    NSMutableDictionary *_itemsMap;
    NSMutableDictionary *_cellRegistrations;
    BOOL _viewDidAppear;
    BOOL _isViewControllerActive;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deselectSelectedCellsOnViewWillAppear; // ivar: _deselectSelectedCellsOnViewWillAppear
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL retainCellSelectionCellOnReload; // ivar: _retainCellSelectionCellOnReload
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (nonatomic) BOOL useItemIdentityWhenUpdating; // ivar: _useItemIdentityWhenUpdating


-(id)_cellRegistrationForSection:(id)arg0 itemIdentifier:(id)arg1 item:(id)arg2 ;
-(id)_sectionAtIndex:(NSInteger)arg0 ;
-(id)_sectionAtIndexPath:(id)arg0 ;
-(id)_sectionForIdentifier:(id)arg0 ;
-(id)_sectionIdentifierForIndex:(NSInteger)arg0 ;
-(id)cellForItem:(id)arg0 ;
-(id)init;
-(id)layout;
-(void)_deselectCellsForce:(BOOL)arg0 ;
-(void)_reloadDataForSections:(id)arg0 recreateSnapshot:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)deselectCells;
-(void)loadView;
-(void)reloadDataAnimated:(BOOL)arg0 ;
-(void)reloadDataForSectionIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDismissModalView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif