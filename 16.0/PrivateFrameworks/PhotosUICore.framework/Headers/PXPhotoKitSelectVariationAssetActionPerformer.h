// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITSELECTVARIATIONASSETACTIONPERFORMER_H
#define PXPHOTOKITSELECTVARIATIONASSETACTIONPERFORMER_H

@class NSProgress;


#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) NSProgress *progress; // ivar: _progress


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)editOperationManager;
+(id)editOperationType;
-(void)cancelActionWithCompletionHandler:(id)arg0 ;
-(void)performBackgroundTask;


@end


#endif