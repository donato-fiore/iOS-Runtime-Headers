// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITDUPLICATEACTIONPERFORMER_H
#define PUPHOTOKITDUPLICATEACTIONPERFORMER_H



#import "PUPhotoKitActionPerformer.h"
#import "PUDuplicateActionController.h"

@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer

@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) PUDuplicateActionController *duplicateActionController; // ivar: _duplicateActionController
@property (nonatomic) ? newStillImageTime; // ivar: _newStillImageTime


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)performBackgroundTask;


@end


#endif