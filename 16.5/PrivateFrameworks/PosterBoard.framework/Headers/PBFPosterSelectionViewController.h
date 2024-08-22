// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERSELECTIONVIEWCONTROLLER_H
#define PBFPOSTERSELECTIONVIEWCONTROLLER_H

@class UICollectionViewController, UIBarButtonItem, UICollectionViewDiffableDataSource, NSSet, NSUUID, PRSwitcherConfiguration, NSArray, NSDictionary, NSMapTable, NSString;
@protocol PBFPosterExtensionDataStoreObserver, PBFPosterSelectionViewControllerDelegate;


#import "PBFPosterGalleryDataProvider.h"
#import "PBFPosterExtensionDataStore.h"

@interface PBFPosterSelectionViewController : UICollectionViewController <PBFPosterExtensionDataStoreObserver>

 {
    UIBarButtonItem *_doneButtonItem;
    PBFPosterGalleryDataProvider *_galleryDataProvider;
    UICollectionViewDiffableDataSource *_dataSource;
    NSSet *_allowedConfigurationUUIDs;
    NSUUID *_selectedConfigurationUUID;
    PBFPosterExtensionDataStore *_dataStore;
    PRSwitcherConfiguration *_switcherConfiguration;
    NSArray *_configurations;
    NSDictionary *_uuidsToConfigurations;
    NSMapTable *_configurationsToMetadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBFPosterSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_cancelBarButtonItem;
-(id)_cellForItemAtIndexPath:(id)arg0 identifier:(id)arg1 ;
-(id)_doneBarButtonItem;
-(id)compositionalLayout;
-(id)initWithAllowedConfigurationUUIDs:(id)arg0 selectedConfigurationUUID:(id)arg1 galleryDataProvider:(id)arg2 dataStore:(id)arg3 ;
-(id)sectionWithEnvironment:(id)arg0 ;
-(void)_applySnapshotForCurrentStateWithAnimation:(BOOL)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_reloadDataWithAnimation:(BOOL)arg0 ;
-(void)_validateDoneButton;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif