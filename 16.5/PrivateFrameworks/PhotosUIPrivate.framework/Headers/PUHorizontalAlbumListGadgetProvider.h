// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUHORIZONTALALBUMLISTGADGETPROVIDER_H
#define PUHORIZONTALALBUMLISTGADGETPROVIDER_H

@class PXGadgetProvider, PXPhotoKitCollectionsDataSourceManager, NSString, PXExtendedTraitCollection;
@protocol PXSettingsKeyObserver, PXChangeObserver, PXCollectionsDataSourceManagerObserver;


#import "PUAlbumsGadgetProvider.h"
#import "PUSessionInfo.h"

@interface PUHorizontalAlbumListGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXCollectionsDataSourceManagerObserver>



@property (retain, nonatomic) PUAlbumsGadgetProvider *albumsGadgetProvider; // ivar: _albumsGadgetProvider
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_canProvideGadgets;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_fromMyMacConfiguration;
-(id)_newConfiguration;
-(id)_peoplePlacesAndMediaTypesConfiguration;
-(id)_seeAllViewController;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 extendedTraitCollection:(id)arg1 sessionInfo:(id)arg2 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_handleDataSourceChange;
-(void)_resetGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pauseLoadingRemainingData;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)startLoadingRemainingData;


@end


#endif