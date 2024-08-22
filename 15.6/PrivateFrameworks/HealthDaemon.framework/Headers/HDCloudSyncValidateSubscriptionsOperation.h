// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCVALIDATESUBSCRIPTIONSOPERATION_H
#define HDCLOUDSYNCVALIDATESUBSCRIPTIONSOPERATION_H



#import "HDCloudSyncOperation.h"

@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation

@property (nonatomic) BOOL includeSecondaryContainers; // ivar: _includeSecondaryContainers


+(BOOL)shouldLogAtOperationStart;
-(void)main;


@end


#endif