// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEFEEDBACKMANAGER_H
#define CPLENGINEFEEDBACKMANAGER_H

@class NSMutableArray, NSArray, NSDate, NSURL, NSString;
@protocol CPLEngineComponent, OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;

#import <Foundation/Foundation.h>

#import "CPLEngineLibrary.h"

@interface CPLEngineFeedbackManager : NSObject <CPLEngineComponent>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportSendFeedbackTask> *_sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    BOOL _opened;
    BOOL _closed;
    BOOL _deactivated;
    NSString *_libraryIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableFeedback; // ivar: _disableFeedback
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)componentName;
-(id)initWithEngineLibrary:(id)arg0 ;
-(void)_appendMessage:(id)arg0 ;
-(void)_appendMessages:(id)arg0 ;
-(void)_load;
-(void)_reallySendFeedbackToServer;
-(void)_save;
-(void)_sendFeedbackToServerIfNecessary;
-(void)closeAndDeactivate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getStatusWithCompletionHandler:(id)arg0 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)reportEndOfResetWithUUID:(id)arg0 reason:(id)arg1 ;
-(void)reportFetchChangesRewindToFeatureVersion:(NSUInteger)arg0 ;
-(void)reportMessage:(id)arg0 ;
-(void)reportMessages:(id)arg0 ;
-(void)reportMiscInformation:(id)arg0 ;
-(void)reportResetType:(id)arg0 reason:(id)arg1 uuid:(id)arg2 ;
-(void)reportSetting:(id)arg0 hasBeenSetToValue:(id)arg1 ;
-(void)sendFeedbackToServerIfNecessary;
-(void)testKey:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif