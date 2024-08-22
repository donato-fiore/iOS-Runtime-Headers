// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCVALIDATEPUSHTARGETOPERATION_H
#define HDCLOUDSYNCVALIDATEPUSHTARGETOPERATION_H

@class NSArray, NSMutableDictionary;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    NSArray *_targets;
    NSMutableDictionary *_targetsBySequenceToDelete;
    BOOL _requiresOwnershipRoll;
}




+(BOOL)shouldLogAtOperationStart;
+(id)operationTagDependencies;
-(id)initWithConfiguration:(id)arg0 ;
-(void)main;


@end


#endif