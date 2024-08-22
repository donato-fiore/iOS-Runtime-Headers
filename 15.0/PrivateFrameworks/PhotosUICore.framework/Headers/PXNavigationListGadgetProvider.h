// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXNAVIGATIONLISTGADGETPROVIDER_H
#define PXNAVIGATIONLISTGADGETPROVIDER_H

@class NSPredicate, NSString, NSNumber;
@protocol PXNavigationListDataSectionManagerObserver, PXPreferencesObserver;


#import "PXGadgetProvider.h"
#import "PXNavigationListDataSectionManager.h"
#import "PXExtendedTraitCollection.h"

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver>



@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate; // ivar: _assetsFilterPredicate
@property (nonatomic) BOOL backgroundFetchingIsActive; // ivar: _backgroundFetchingIsActive
@property (retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *hiddenAlbumVisibleCache; // ivar: _hiddenAlbumVisibleCache
@property (readonly, nonatomic) BOOL isPresentedInPicker; // ivar: _isPresentedInPicker
@property (readonly, nonatomic) BOOL shouldShowNavigationListForDeviceAndLayoutClass;
@property (nonatomic) BOOL shouldShowNavigationListOnIpad; // ivar: _shouldShowNavigationListOnIpad
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_shouldHiddenAlbumBeVisible;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 extendedTraitCollection:(id)arg1 isPresentedInPicker:(BOOL)arg2 assetsFilterPredicate:(id)arg3 ;
-(void)_initializeDataSourceManagerIfNeeded;
-(void)_resetGadgets;
-(void)_updateGadgets;
-(void)dealloc;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pauseLoadingRemainingData;
-(void)preferencesDidChange;
-(void)startLoadingRemainingData;


@end


#endif