// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMPHOTOKITDELETEACTIONPERFORMER_H
#define PXCMMPHOTOKITDELETEACTIONPERFORMER_H

@protocol PXCMMPhotoKitActionPerformer;


#import "PXCMMActionPerformer.h"
#import "PXCMMPhotoKitSession.h"

@interface PXCMMPhotoKitDeleteActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>



@property (readonly, nonatomic) PXCMMPhotoKitSession *session;


-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif