// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACRECORDEDUSERACTIONMANAGER_H
#define CACRECORDEDUSERACTIONMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CACRecordedUserActionFlow.h"

@interface CACRecordedUserActionManager : NSObject {
    NSMutableArray *_recordedUserActions;
    CACRecordedUserActionFlow *_executingUserActionFlow;
}


@property (readonly) BOOL isExecuting; // ivar: _isExecuting
@property (readonly) BOOL isRecording; // ivar: _isRecording


+(id)sharedManager;
-(id)init;
-(id)recordedUserActionFlow;
-(void)addRecognizedSpokenCommand:(id)arg0 ;
-(void)beginExecutingRecordedUserActionFlow:(id)arg0 completionBlock:(id)arg1 ;
-(void)cancelExecution;
-(void)startRecordingUserActions;
-(void)stopRecordingUserActions;


@end


#endif