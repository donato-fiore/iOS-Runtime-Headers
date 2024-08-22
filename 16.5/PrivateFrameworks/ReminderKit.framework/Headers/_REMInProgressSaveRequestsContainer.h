// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMINPROGRESSSAVEREQUESTSCONTAINER_H
#define _REMINPROGRESSSAVEREQUESTSCONTAINER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _REMInProgressSaveRequestsContainer : NSObject

@property (retain, nonatomic) NSMutableArray *inProgressSaveRequests; // ivar: _inProgressSaveRequests


-(id)_firstMatchInSaveRequests:(id)arg0 ;
-(id)_latestSaveInProgressAccountForObjectID:(id)arg0 saveRequest:(id)arg1 ;
-(id)_latestSaveInProgressListForObjectID:(id)arg0 fallbackAccount:(id)arg1 fallbackParentList:(id)arg2 saveRequest:(id)arg3 ;
-(id)_latestSaveInProgressReminderForObjectID:(id)arg0 fallbackAccount:(id)arg1 fallbackList:(id)arg2 fallbackParentList:(id)arg3 fallbackParentReminder:(id)arg4 saveRequest:(id)arg5 ;
-(id)init;
-(id)latestSaveInProgressAccount:(id)arg0 ;
-(id)latestSaveInProgressList:(id)arg0 ;
-(id)latestSaveInProgressReminder:(id)arg0 ;
-(id)latestSaveInProgressReminderForReminderChangeItem:(id)arg0 ;
-(void)saveRequestSaveDidFinish:(id)arg0 ;
-(void)saveRequestSaveDidStart:(id)arg0 ;


@end


#endif