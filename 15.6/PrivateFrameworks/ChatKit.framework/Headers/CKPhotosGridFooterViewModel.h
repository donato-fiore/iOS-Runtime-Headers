// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPHOTOSGRIDFOOTERVIEWMODEL_H
#define CKPHOTOSGRIDFOOTERVIEWMODEL_H

@class PXFooterViewModel, PXAssetsDataSourceManager, NSArray, PXAssetsDataSourceCountsController, NSString;
@protocol PXChangeObserver, IMPhotoLibraryPersistenceManagerListener;



@interface CKPhotosGridFooterViewModel : PXFooterViewModel <PXChangeObserver, IMPhotoLibraryPersistenceManagerListener>

 {
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    NSArray *_syndicationIdentifiers;
    PXAssetsDataSourceCountsController *_assetsCountsController;
    ? _detailedCounts;
    NSInteger _savedCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initAssetsDataSourceManager:(id)arg0 syndicationIdentifiers:(id)arg1 ;
-(void)_updateDetailedCounts;
-(void)_updateSavedCount;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryPersistedSyndicatedAssetSetDidChange;
-(void)setDetailedCounts:(struct ? )arg0 ;
-(void)setSavedCount:(NSInteger)arg0 ;


@end


#endif