// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITEDITLOCATIONACTIONPERFORMER_H
#define PXPHOTOKITEDITLOCATIONACTIONPERFORMER_H

@class NSString;
@protocol PXPhotosDetailsLocationSearchDelegate;


#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitEditLocationActionPerformer : PXPhotoKitAssetActionPerformer <PXPhotosDetailsLocationSearchDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)locationSearchDataSource:(id)arg0 didSelectLocationSearchResult:(id)arg1 ;
-(void)locationSearchDataSourceDidRemoveLocation:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif