// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONCONTENTSYNDICATIONSAVETOLIBRARYACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONCONTENTSYNDICATIONSAVETOLIBRARYACTIONPERFORMER_H

@class PHFetchResult, NSString;
@protocol PXAssetsSharingHelperDelegate;


#import "PXPhotoKitAssetCollectionActionPerformer.h"
#import "PXContentSyndicationPhotoKitAssetArrivalObserver.h"

@interface PXPhotoKitAssetCollectionContentSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXAssetsSharingHelperDelegate>

 {
    PHFetchResult *_assetsToSaveFetchResult;
    PXContentSyndicationPhotoKitAssetArrivalObserver *_assetArrivalObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createBarButtonItemForAssetCollectionReference:(id)arg0 withTarget:(id)arg1 action:(SEL)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(BOOL)assetsSharingHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetsSharingHelper:(id)arg0 presentViewController:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif