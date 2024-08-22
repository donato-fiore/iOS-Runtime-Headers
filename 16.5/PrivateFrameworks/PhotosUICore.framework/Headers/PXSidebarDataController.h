// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSIDEBARDATACONTROLLER_H
#define PXSIDEBARDATACONTROLLER_H

@class NSMutableDictionary, NSArray, NSPredicate, NSString, PHPhotoLibrary, PHAssetCollection, NSMapTable, NSOperationQueue;
@protocol PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver, PXSidebarDataSourceControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXOutlineDataSectionManager.h"
#import "PXPhotoLibraryLocalDefaults.h"
#import "PXNavigationListItemDataSectionManager.h"
#import "PXDataSectionManager.h"

@interface PXSidebarDataController : NSObject <PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver>

 {
    PXOutlineDataSectionManager *_rootDataSectionManager;
    NSMutableDictionary *_dataSectionManagers;
    NSMutableDictionary *_dataSectionObjects;
    NSArray *_arrangedObjectIdentifiers;
}


@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate; // ivar: _assetsFilterPredicate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSidebarDataSourceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults; // ivar: _localDefaults
@property (readonly, nonatomic) PXNavigationListItemDataSectionManager *mediaTypesItemManager; // ivar: _mediaTypesItemManager
@property (readonly, nonatomic) PXDataSectionManager *mediaTypesSectionManager; // ivar: _mediaTypesSectionManager
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PHAssetCollection *pickerAllPhotosVirtualCollection; // ivar: _pickerAllPhotosVirtualCollection
@property (retain, nonatomic) NSMapTable *requestDetailsBySidebarImageRequestID; // ivar: _requestDetailsBySidebarImageRequestID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOperationQueue *workQueue; // ivar: _workQueue


+(id)albumsDataSectionManagerWithMediaTypesItemManager:(id)arg0 workQueue:(id)arg1 sectionEnablementProvider:(id)arg2 additionalAssetsFilterPredicate:(id)arg3 ;
+(id)dataSectionManagerForCollection:(id)arg0 workQueue:(id)arg1 additionalAssetsFilterPredicate:(id)arg2 ;
+(id)devicesDataSectionManagerForLibrary:(id)arg0 ;
+(id)photosDataSectionManagerForLibrary:(id)arg0 workQueue:(id)arg1 sectionEnablementProvider:(id)arg2 additionalAssetsFilterPredicate:(id)arg3 ;
+(id)projectsDataSectionManagerForLibrary:(id)arg0 workQueue:(id)arg1 additionalAssetsFilterPredicate:(id)arg2 ;
+(id)prototypesDataSectionManagerForLibrary:(id)arg0 workQueue:(id)arg1 sectionEnablementProvider:(id)arg2 additionalAssetsFilterPredicate:(id)arg3 ;
-(BOOL)isItemExpanded:(id)arg0 ;
-(BOOL)moveGroupItem:(id)arg0 afterGroupItem:(id)arg1 ;
-(NSInteger)numberOfChildrenOfItem:(id)arg0 ;
-(NSInteger)requestImageForItem:(id)arg0 parentItem:(id)arg1 completion:(id)arg2 ;
-(id)_childDataSectionManagerForListItem:(id)arg0 ;
-(id)beginRequestForMediaProvider:(id)arg0 mediaRequestIDs:(id)arg1 ;
-(id)child:(NSInteger)arg0 ofItem:(id)arg1 ;
-(id)childDataSectionForItem:(id)arg0 ;
-(id)childrenOfListItem:(id)arg0 ;
-(id)dataSectionManagerForItem:(id)arg0 ;
-(id)infoForItem:(id)arg0 childIndex:(NSInteger)arg1 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 sectionEnablementProvider:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 sectionEnablementProvider:(id)arg1 options:(NSUInteger)arg2 additionalAssetsFilterPredicate:(id)arg3 pickerAllPhotosVirtualCollection:(id)arg4 ;
-(id)itemForIdentifier:(id)arg0 ;
-(id)outlineDataSectionManager:(id)arg0 arrangedSectionContent:(id)arg1 ;
-(id)sectionManagersForLibrary:(id)arg0 workQueue:(id)arg1 sectionEnablementProvider:(id)arg2 additionalAssetsFilterPredicate:(id)arg3 ;
-(void)_removeDataSectionManagerForKey:(id)arg0 ;
-(void)_setDataSectionManager:(id)arg0 forKey:(id)arg1 ;
-(void)_updateDataSectionForRemovedItems:(id)arg0 ;
-(void)_updateMediaTypesItemManager;
-(void)appearanceDidChange;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)cancelRequestDetails:(id)arg0 ;
-(void)didNavigateToListItem:(id)arg0 ;
-(void)markListItemAsRead:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setChangeProcessingPaused:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setExpanded:(BOOL)arg0 forItem:(id)arg1 ;


@end


#endif