// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEPICKERVIEWCONTROLLER_H
#define PXPEOPLEPICKERVIEWCONTROLLER_H

@class UICollectionViewController, UICollectionViewFlowLayout, UICollectionViewDiffableDataSource, NSString, NSArray, NSUUID, PHPhotoLibrary, PHFetchResult, NSDiffableDataSourceSnapshot;
@protocol PXSectionedDataSourceManagerObserver, UICollectionViewDelegateFlowLayout, PXPeoplePickerConfigurationControllerDelegate, PXPeoplePickerViewControllerActionHandler;


#import "PXPeoplePickerDataSourceManager.h"
#import "PXSelectionCoordinator.h"

@interface PXPeoplePickerViewController : UICollectionViewController <PXSectionedDataSourceManagerObserver, UICollectionViewDelegateFlowLayout>

 {
    UICollectionViewFlowLayout *_layout;
}


@property (weak, nonatomic) NSObject<PXPeoplePickerConfigurationControllerDelegate> *configControllerDelegate; // ivar: _configControllerDelegate
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSInteger dataType; // ivar: _dataType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *disabledLocalIdentifiers; // ivar: _disabledLocalIdentifiers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (readonly, nonatomic) PHFetchResult *people; // ivar: _people
@property (weak, nonatomic) NSObject<PXPeoplePickerViewControllerActionHandler> *peoplePickerActionHandler; // ivar: _peoplePickerActionHandler
@property (retain, nonatomic) PXPeoplePickerDataSourceManager *personDataSourceManager; // ivar: _personDataSourceManager
@property (readonly, copy, nonatomic) NSArray *personLocalIdentifiers; // ivar: _personLocalIdentifiers
@property (readonly, copy, nonatomic) NSArray *preselectedLocalIdentifiers; // ivar: _preselectedLocalIdentifiers
@property (readonly, copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator; // ivar: _selectionCoordinator
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(id)_personAtIndexPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPersonIdentifiers:(id)arg0 selectedLocalIdentifiers:(id)arg1 disabledLocalIdentifiers:(id)arg2 prompt:(id)arg3 selectionCoordinator:(id)arg4 library:(id)arg5 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_configureCellForCollectionView:(id)arg0 cell:(id)arg1 indexPath:(id)arg2 ;
-(void)_configureDataSourceManager;
-(void)_facesDidChange:(id)arg0 ;
-(void)_performAction:(NSInteger)arg0 forPerson:(id)arg1 ;
-(void)_performAction:(NSInteger)arg0 forPersonAtIndexPath:(id)arg1 ;
-(void)_updatePersonDataSource;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)deselectAllPeople;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif