// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMPHOTOKITACCEPTMOMENTSHAREACTIONPERFORMER_H
#define PXCMMPHOTOKITACCEPTMOMENTSHAREACTIONPERFORMER_H

@protocol PXCMMPhotoKitActionPerformer;


#import "PXCMMActionPerformer.h"
#import "PXCMMPhotoKitSession.h"

@interface PXCMMPhotoKitAcceptMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>



@property (readonly, nonatomic) PXCMMPhotoKitSession *session;


-(BOOL)canPerformActionWithSession:(id)arg0 ;
-(void)performBackgroundTask;


@end


#endif