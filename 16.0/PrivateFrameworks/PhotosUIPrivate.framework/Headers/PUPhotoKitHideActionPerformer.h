// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOKITHIDEACTIONPERFORMER_H
#define PUPHOTOKITHIDEACTIONPERFORMER_H



#import "PUPhotoKitActionPerformer.h"
#import "PUHidePhotosActionController.h"

@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) PUHidePhotosActionController *hideActionController; // ivar: _hideActionController
@property (nonatomic) BOOL isHiding; // ivar: _isHiding


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif