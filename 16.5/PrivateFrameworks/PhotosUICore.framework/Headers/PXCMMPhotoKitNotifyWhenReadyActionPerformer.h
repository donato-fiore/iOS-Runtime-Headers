// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMPHOTOKITNOTIFYWHENREADYACTIONPERFORMER_H
#define PXCMMPHOTOKITNOTIFYWHENREADYACTIONPERFORMER_H

@protocol PXCMMPhotoKitActionPerformer;


#import "PXCMMActionPerformer.h"
#import "PXCMMPhotoKitSession.h"

@interface PXCMMPhotoKitNotifyWhenReadyActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>



@property (readonly, nonatomic) PXCMMPhotoKitSession *session;


-(BOOL)_needsToNotifyForMomentShare:(id)arg0 localAssetCount:(NSInteger)arg1 ;
-(void)performBackgroundTask;


@end


#endif