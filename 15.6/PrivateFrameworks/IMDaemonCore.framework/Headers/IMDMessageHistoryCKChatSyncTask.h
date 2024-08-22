// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDMESSAGEHISTORYCKCHATSYNCTASK_H
#define IMDMESSAGEHISTORYCKCHATSYNCTASK_H

@class NSString;
@protocol IMDMessageHistorySyncTask;

#import <Foundation/Foundation.h>

#import "IMDCKSyncController.h"

@interface IMDMessageHistoryCKChatSyncTask : NSObject <IMDMessageHistorySyncTask>

 {
    IMDCKSyncController *_ckSyncController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *syncTaskCompletionBlock; // ivar: _syncTaskCompletionBlock


-(NSUInteger)syncTaskType;
-(id)initWithCKSyncController:(id)arg0 ;
-(void)_startICloudSyncWithActivity:(id)arg0 ;
-(void)dealloc;
-(void)startSyncTask:(id)arg0 ;


@end


#endif