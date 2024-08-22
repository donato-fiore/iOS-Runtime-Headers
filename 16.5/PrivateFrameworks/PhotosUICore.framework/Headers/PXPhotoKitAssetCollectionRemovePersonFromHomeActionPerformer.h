// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITASSETCOLLECTIONREMOVEPERSONFROMHOMEACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONREMOVEPERSONFROMHOMEACTIONPERFORMER_H

@class PHFetchResult, NSString;
@protocol PXPhotoKitAssetCollectionActionPerformerInput, UIDragSession, UIDropSession;


#import "PXPhotoKitAssetCollectionActionPerformer.h"
#import "PXAssetsDataSource.h"
#import "PXAssetReference.h"

@interface PXPhotoKitAssetCollectionRemovePersonFromHomeActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput>



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
-(void)performUserInteractionTask;


@end


#endif