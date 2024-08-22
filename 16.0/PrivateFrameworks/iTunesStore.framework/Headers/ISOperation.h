// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISOPERATION_H
#define ISOPERATION_H

@class NSOperation, NSLock, SSOperationProgress, NSArray, NSMutableArray, NSError, NSRunLoop, NSString;
@protocol ISOperationDelegate;


#import "ISOperation.h"

@interface ISOperation : NSOperation {
    id<ISOperationDelegate> *_delegate;
    NSLock *_lock;
    SSOperationProgress *_progress;
    BOOL _shouldMessageMainThread;
    NSArray *_serializationLockIdentifiers;
    NSMutableArray *_subOperations;
    BOOL _stopped;
}


@property (weak) NSObject<ISOperationDelegate> *delegate;
@property (retain) NSError *error; // ivar: _error
@property (retain) NSRunLoop *operationRunLoop; // ivar: _operationRunLoop
@property (retain) ISOperation *parentOperation; // ivar: _parentOperation
@property (retain) NSString *powerAssertionIdentifier; // ivar: _powerAssertionIdentifier
@property (readonly, nonatomic) SSOperationProgress *progress;
@property (readonly) NSInteger progressWeight;
@property (copy) NSArray *serializationLockIdentifiers;
@property BOOL shouldMessageMainThread;
@property BOOL shouldRunWithBackgroundPriority; // ivar: _shouldRunWithBackgroundPriority
@property BOOL success; // ivar: _success
@property (readonly) NSString *uniqueKey;


-(BOOL)copyAccountID:(*id)arg0 credentialSource:(*NSUInteger)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(*id)arg3 ;
-(BOOL)copyAccountID:(*id)arg0 credentialSource:(*NSUInteger)arg1 byHandlingAuthenticateResponse:(id)arg2 returningError:(*id)arg3 ;
-(BOOL)loadSoftwareMapReturningError:(*id)arg0 ;
-(BOOL)loadURLBagWithContext:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)runSubOperation:(id)arg0 onQueue:(id)arg1 error:(*id)arg2 ;
-(BOOL)runSubOperation:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)arg0 ;
-(BOOL)stopRunLoop;
-(NSUInteger)authenticatedAccountCredentialSource;
-(id)authenticatedAccountDSID;
-(id)copyActivePowerAssertionIdentifiers;
-(id)copySerializationLocks;
-(id)init;
-(id)loadedURLBagWithContext:(id)arg0 accountDSID:(id)arg1 returningError:(*id)arg2 ;
-(id)loadedURLBagWithContext:(id)arg0 returningError:(*id)arg1 ;
-(int)runRunLoopUntilStopped;
-(void)_addSubOperation:(id)arg0 ;
-(void)_failAfterException;
-(void)_keepAliveTimer:(id)arg0 ;
-(void)_main:(BOOL)arg0 ;
-(void)_removeSubOperation:(id)arg0 ;
-(void)_sendErrorToDelegate:(id)arg0 ;
-(void)_sendSuccessToDelegate;
-(void)_sendWillStartToDelegate;
-(void)cancel;
-(void)delegateDispatch:(id)arg0 ;
-(void)dispatchCompletionBlock;
-(void)lock;
-(void)main;
-(void)releasePowerAssertionsDuringBlock:(id)arg0 ;
-(void)run;
-(void)run:(BOOL)arg0 ;
-(void)sendDidTakeSerializationLocks;
-(void)sendProgressToDelegate;
-(void)unlock;


@end


#endif