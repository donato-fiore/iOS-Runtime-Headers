// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYASSETACTIONPERFORMER_H
#define PXSTORYASSETACTIONPERFORMER_H

@protocol PXStoryViewActionPerformer;


#import "PXPhotoKitAssetActionPerformer.h"

@interface PXStoryAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (readonly, weak, nonatomic) NSObject<PXStoryViewActionPerformer> *storyViewActionPerformer; // ivar: _storyViewActionPerformer


+(BOOL)canPerformWithActionManager:(id)arg0 ;


@end


#endif