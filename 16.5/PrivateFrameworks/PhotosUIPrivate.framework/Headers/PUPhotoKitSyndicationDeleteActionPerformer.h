// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOKITSYNDICATIONDELETEACTIONPERFORMER_H
#define PUPHOTOKITSYNDICATIONDELETEACTIONPERFORMER_H



#import "PUPhotoKitDestructiveActionsPerformer.h"

@interface PUPhotoKitSyndicationDeleteActionPerformer : PUPhotoKitDestructiveActionsPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(NSInteger)destructivePhotosAction;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif