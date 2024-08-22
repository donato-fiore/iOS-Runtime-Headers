// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDMESSAGEPTASKXPCSTORE_H
#define IMDMESSAGEPTASKXPCSTORE_H

@class NSString;
@protocol IMDMessagePTaskStore;

#import <Foundation/Foundation.h>


@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
-(BOOL)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg0 taskFlags:(NSInteger)arg1 ;
-(BOOL)_networkCall_InsertRowGuid:(id)arg0 taskFlags:(NSInteger)arg1 ;
-(BOOL)deleteAllCompletedTasks;
-(BOOL)storePTask:(id)arg0 ;
-(BOOL)updateTaskFlagsForPTask:(id)arg0 ;
-(id)_networkCall_IMDMessagePTaskSelectWithLimit:(NSInteger)arg0 ;
-(id)loadMostRecentMessagePTasks;


@end


#endif