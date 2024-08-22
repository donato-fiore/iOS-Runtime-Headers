// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITASSETCOLLECTIONCREATEMEMORYACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONCREATEMEMORYACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionCreateMemoryActionPerformer : PXPhotoKitAssetCollectionActionPerformer



+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)createBarButtonItemForAssetCollectionReference:(id)arg0 withTarget:(id)arg1 action:(SEL)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif