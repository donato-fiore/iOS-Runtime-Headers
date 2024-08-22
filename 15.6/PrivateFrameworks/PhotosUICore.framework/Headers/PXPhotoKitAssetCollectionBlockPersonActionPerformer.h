// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITASSETCOLLECTIONBLOCKPERSONACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONBLOCKPERSONACTIONPERFORMER_H

@class PHFetchResult, NSString;
@protocol PXPhotoKitAssetCollectionActionPerformerInput, PXSuggestLessPeopleHelperDelegate, UIDragSession, UIDropSession;


#import "PXPhotoKitAssetCollectionActionPerformer.h"
#import "PXSuggestLessPeopleHelper.h"
#import "PXAssetsDataSource.h"
#import "PXAssetReference.h"

@interface PXPhotoKitAssetCollectionBlockPersonActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput, PXSuggestLessPeopleHelperDelegate>

 {
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}


@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<UIDragSession> *dragSession;
@property (readonly, nonatomic) NSObject<UIDropSession> *dropSession;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 presentViewController:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif