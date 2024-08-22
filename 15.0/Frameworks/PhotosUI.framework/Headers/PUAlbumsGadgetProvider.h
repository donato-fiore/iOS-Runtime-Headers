// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMSGADGETPROVIDER_H
#define PUALBUMSGADGETPROVIDER_H

@class PXGadgetProvider, PXPhotoKitCollectionsDataSourceManager, NSString, PXExtendedTraitCollection, PXPhotoKitUIMediaProvider;
@protocol PXCollectionsDataSourceManagerObserver, PXChangeObserver, PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate;


#import "PUAlbumListCellContentViewHelper.h"

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate>



@property (readonly, nonatomic) NSUInteger albumListType; // ivar: _albumListType
@property (retain, nonatomic) PUAlbumListCellContentViewHelper *contentViewHelper; // ivar: _contentViewHelper
@property (nonatomic) NSInteger currentDataSourceIdentifier; // ivar: _currentDataSourceIdentifier
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (nonatomic) BOOL hasGeneratedGadgets; // ivar: _hasGeneratedGadgets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) NSString *seeAllAccessoryButtonTitle;
@property (readonly, nonatomic) BOOL shouldShowSeeAllAccessoryButton;
@property (readonly) Class superclass;


-(Class)_albumGadgetClassForCollection:(id)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_newGadgetForCollection:(id)arg0 ;
-(id)albumListCellContentViewHelperForAlbum:(id)arg0 ;
-(id)albumListCellContentViewHelperForLayout:(id)arg0 ;
-(id)gadgetForCollection:(id)arg0 ;
-(id)gadgetForIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithAlbumListType:(NSUInteger)arg0 dataSourceManager:(id)arg1 extendedTraitCollection:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_reconfigureGadgets;
-(void)_updateDataSourceWithChangeDetails:(id)arg0 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pauseLoadingRemainingData;
-(void)startLoadingRemainingData;


@end


#endif