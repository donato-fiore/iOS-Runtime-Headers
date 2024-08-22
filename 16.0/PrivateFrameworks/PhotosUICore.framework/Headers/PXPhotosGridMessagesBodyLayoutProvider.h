// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSGRIDMESSAGESBODYLAYOUTPROVIDER_H
#define PXPHOTOSGRIDMESSAGESBODYLAYOUTPROVIDER_H

@class NSString;
@protocol PXGItemsLayoutDelegate, PXChangeObserver, PXPhotosSectionBodyLayoutProvider, PXAssetImportStatusManager, PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXTapbackStatusManager;

#import <Foundation/Foundation.h>

#import "PXPhotosGridMessagesLayoutSpecManager.h"

@interface PXPhotosGridMessagesBodyLayoutProvider : NSObject <PXGItemsLayoutDelegate, PXChangeObserver, PXPhotosSectionBodyLayoutProvider>



@property (readonly, nonatomic) NSObject<PXAssetImportStatusManager> *assetImportStatusManager; // ivar: _assetImportStatusManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> *invalidationDelegate; // ivar: invalidationDelegate
@property (readonly, nonatomic) PXPhotosGridMessagesLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXTapbackStatusManager> *tapbackStatusManager; // ivar: _tapbackStatusManager


-(BOOL)shouldPreventFaultOutOfBodyLayout:(id)arg0 inAssetSectionLayout:(id)arg1 ;
-(CGFloat)itemsLayout:(id)arg0 aspectRatioForItem:(NSInteger)arg1 ;
-(NSInteger)itemsLayout:(id)arg0 itemForObjectReference:(id)arg1 options:(NSUInteger)arg2 ;
-(id)createSectionBodyLayoutForSectionedLayout:(id)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 spec:(id)arg3 outWantsDecoration:(*BOOL)arg4 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)itemsLayout:(id)arg0 objectReferenceForItem:(NSInteger)arg1 ;
-(struct CGSize )itemsLayout:(id)arg0 marginForItem:(NSInteger)arg1 ;
-(void)configureSectionBodyLayout:(id)arg0 inAssetSectionLayout:(id)arg1 forSectionedLayout:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)sectionedLayout:(id)arg0 bodyLayout:(id)arg1 didChangeDataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath )arg3 hasSectionChanges:(BOOL)arg4 ;


@end


#endif