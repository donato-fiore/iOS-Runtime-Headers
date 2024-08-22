// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMAUTOMATIONBATCHMESSAGEOPERATIONS_H
#define IMAUTOMATIONBATCHMESSAGEOPERATIONS_H


#import <Foundation/Foundation.h>


@interface IMAutomationBatchMessageOperations : NSObject



-(id)beginRecordingMessagesToReplayDatabase:(id)arg0 error:(*id)arg1 ;
-(id)sendMessagesfromReplayDatabase:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(id)stopRecordingDatabaseError:(*id)arg0 ;


@end


#endif