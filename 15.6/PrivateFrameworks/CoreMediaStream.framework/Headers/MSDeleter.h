// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSDELETER_H
#define MSDELETER_H

@class NSMutableArray, NSString;
@protocol MSDeleter, MSDeleteStreamsProtocolDelegate, MSDeleterDelegate;


#import "MSCupidStateMachine.h"
#import "MSDeleteStreamsProtocol.h"
#import "MSObjectQueue.h"
#import "MSMediaStreamDaemon.h"

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate>

 {
    MSDeleteStreamsProtocol *_protocol;
    int _state;
    MSObjectQueue *_deleteQueue;
    NSMutableArray *_requestedDeleteWrappers;
    int _maxErrorCount;
}


@property (nonatomic) int batchSize; // ivar: _batchSize
@property (nonatomic) MSMediaStreamDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MSDeleterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isInRetryState;
+(id)_clearInstantiatedDeletersByPersonID;
+(id)deleterForPersonID:(id)arg0 ;
+(id)existingDeleterForPersonID:(id)arg0 ;
+(id)nextActivityDate;
+(id)nextActivityDateForPersonID:(id)arg0 ;
+(id)personIDsWithOutstandingActivities;
+(void)_setMasterNextActivityDate:(id)arg0 forPersonID:(id)arg1 ;
+(void)abortAllActivities;
+(void)forgetPersonID:(id)arg0 ;
+(void)stopAllActivities;
-(BOOL)_isAllowedToDelete;
-(BOOL)_isInRetryState;
-(id)_abortedError;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_abort;
-(void)_forget;
-(void)_sendDeleteRequest;
-(void)_stop;
-(void)_updateMasterManifest;
-(void)abort;
-(void)deactivate;
-(void)dealloc;
-(void)deleteAssetCollections:(id)arg0 ;
-(void)deleteProtocol:(id)arg0 didFinishSuccessfulCollections:(id)arg1 failedCollections:(id)arg2 error:(id)arg3 ;
-(void)deleteProtocol:(id)arg0 didReceiveAuthenticationError:(id)arg1 ;
-(void)performOutstandingActivities;
-(void)stop;


@end


#endif