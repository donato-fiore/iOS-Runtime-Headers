// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MMCSCONTROLLER_H
#define MMCSCONTROLLER_H

@class NSTimer, NSMutableDictionary, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface MMCSController : NSObject {
    id *_powerAssertion;
    NSTimer *_powerAssertionTimer;
    *_mmcs_engine _engine;
    *__CFURL _chunkStoreURL;
    NSUInteger _currentItemID;
    NSMutableDictionary *_requestIDToBlockMap;
    NSMutableDictionary *_requestIDToTransfersMap;
    NSMutableDictionary *_requestIDToRemainingTransfersMap;
    NSMutableDictionary *_transferToRequestIDsMap;
}


@property NSInteger connectionBehavior; // ivar: _connectionBehavior
@property (readonly) BOOL isActive;
@property (retain) NSRecursiveLock *transferIDContextMapLock; // ivar: _transferIDContextMapLock
@property (readonly) NSMutableDictionary *transferIDToContextMap; // ivar: _transferIDToContextMap
@property (readonly) NSMutableDictionary *transfers; // ivar: _transfers


+(void)preMMCSWarm:(id)arg0 ;
-(BOOL)_getTransfers:(id)arg0 requestURL:(id)arg1 requestorID:(id)arg2 sourceAppID:(id)arg3 token:(id)arg4 error:(*id)arg5 ;
-(BOOL)_putTransfers:(id)arg0 requestURL:(id)arg1 requestorID:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 token:(id)arg5 error:(*id)arg6 ;
-(BOOL)_unregisterTransfers:(id)arg0 ;
-(BOOL)unregisterFiles:(id)arg0 ;
-(id)_MMCSICloudRequestHeadersCopy:(struct __CFString *)arg0 ;
-(id)_optionsForFiles:(id)arg0 sourceAppID:(id)arg1 ;
-(id)_registeredTransferForGUID:(id)arg0 ;
-(id)_registeredTransferForItemID:(NSUInteger)arg0 ;
-(id)getContentHeadersAsString;
-(id)init;
-(id)parseContentHeaderAsDictionary:(id)arg0 treatValuesAsArrays:(BOOL)arg1 ;
-(struct _mmcs_engine *)_engine;
-(void)_MMCSRegisterItems:(struct _mmcs_engine *)arg0 requestorContext:(*void)arg1 requestOptions:(id)arg2 completionCallback:(*unk)arg3 ;
-(void)_addPreauthorizationOptions:(id)arg0 forFiles:(id)arg1 ;
-(void)_cancelRequest:(id)arg0 ;
-(void)_getItemCompleted:(id)arg0 path:(id)arg1 error:(id)arg2 ;
-(void)_getItemUpdated:(id)arg0 progress:(CGFloat)arg1 state:(int)arg2 error:(id)arg3 ;
-(void)_handleRegistrationForMMCSPutFile:(id)arg0 preauthenticate:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)_invalidatePowerAssertionTimer;
-(void)_itemCompleted:(id)arg0 ;
-(void)_processCompletedItem:(id)arg0 error:(id)arg1 ;
-(void)_putItemCompleted:(id)arg0 error:(id)arg1 ;
-(void)_putItemUpdated:(id)arg0 progress:(CGFloat)arg1 state:(int)arg2 error:(id)arg3 ;
-(void)_registerFiles:(id)arg0 preauthenticate:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)_registerPowerAssertionIfNeeded;
-(void)_registerTransfers:(id)arg0 preauthenticate:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)_releasePowerAssertion;
-(void)_releasePowerAssertionAndSimulateCrash;
-(void)_schedulePowerAssertionTimer;
-(void)_setScheduledTransfers:(id)arg0 block:(id)arg1 ;
-(void)_unregisterPowerAssertion;
-(void)addRequestorContext:(id)arg0 transferID:(id)arg1 ;
-(void)cancelPutRequestID:(id)arg0 ;
-(void)dealloc;
-(void)getFiles:(id)arg0 requestURL:(id)arg1 requestorID:(id)arg2 sourceAppID:(id)arg3 authToken:(id)arg4 completionBlock:(id)arg5 ;
-(void)putFiles:(id)arg0 requestURL:(id)arg1 requestorID:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 authToken:(id)arg5 preauthenticate:(BOOL)arg6 completionBlock:(id)arg7 ;
-(void)registerFilesForDownload:(id)arg0 completionBlock:(id)arg1 ;
-(void)registerFilesForUpload:(id)arg0 withPreauthentication:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)removeRequestorContext:(id)arg0 transferID:(id)arg1 ;


@end


#endif