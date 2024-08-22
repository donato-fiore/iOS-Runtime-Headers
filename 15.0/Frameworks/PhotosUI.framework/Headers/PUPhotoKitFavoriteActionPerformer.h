// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOKITFAVORITEACTIONPERFORMER_H
#define PUPHOTOKITFAVORITEACTIONPERFORMER_H



#import "PUPhotoKitActionPerformer.h"

@interface PUPhotoKitFavoriteActionPerformer : PUPhotoKitActionPerformer

@property (nonatomic) BOOL favorite; // ivar: _favorite


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)performBackgroundTask;


@end


#endif