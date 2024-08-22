// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMPHOTOKITFORCESYNCMOMENTSHAREACTIONPERFORMER_H
#define PXCMMPHOTOKITFORCESYNCMOMENTSHAREACTIONPERFORMER_H

@protocol PXCMMPhotoKitActionPerformer;


#import "PXCMMActionPerformer.h"
#import "PXCMMPhotoKitSession.h"

@interface PXCMMPhotoKitForceSyncMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>



@property (readonly, nonatomic) PXCMMPhotoKitSession *session;


-(BOOL)canPerformActionWithSession:(id)arg0 ;
-(void)performBackgroundTask;


@end


#endif