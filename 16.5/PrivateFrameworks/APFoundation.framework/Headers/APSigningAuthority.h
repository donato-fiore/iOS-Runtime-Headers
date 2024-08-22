// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSIGNINGAUTHORITY_H
#define APSIGNINGAUTHORITY_H

@class NSString;
@protocol APSigningAuthorizable, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "APSigningServerRequestor.h"
#import "APSigningContextsStorage.h"

@interface APSigningAuthority : NSObject <APSigningAuthorizable>



@property (nonatomic) *void context; // ivar: _context
@property (nonatomic) NSUInteger contextIdx; // ivar: _contextIdx
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger failureError; // ivar: _failureError
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPersisted; // ivar: _isPersisted
@property (nonatomic) BOOL isStashed; // ivar: _isStashed
@property (nonatomic) BOOL isUsed; // ivar: _isUsed
@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // ivar: _osTransaction
@property (retain, nonatomic) APSigningServerRequestor *serverRequestor; // ivar: _serverRequestor
@property (copy, nonatomic) id *setupCompletionHandler; // ivar: _setupCompletionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // ivar: _setupQueue
@property (retain, nonatomic) APSigningContextsStorage *signingContextsStorage; // ivar: _signingContextsStorage
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL tryStashed; // ivar: _tryStashed


-(BOOL)_createAttribute:(**void)arg0 ;
-(BOOL)_createContext:(**void)arg0 withAttribute:(**void)arg1 initRequest:(**void)arg2 initRequestLength:(*unsigned int)arg3 ;
-(id)_createContext;
-(id)_getEncodedStringFromFPDIDataRef:(*void)arg0 withLength:(unsigned int)arg1 ;
-(id)_signatureForData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithStoredContext:(NSUInteger)arg0 ;
-(id)initWithTryStashed:(BOOL)arg0 ;
-(id)initWithTryStashed:(BOOL)arg0 signingServerRequestor:(id)arg1 setupCompletionHandler:(id)arg2 ;
-(id)signatureForData:(id)arg0 error:(*id)arg1 ;
-(id)signatureForRawData:(id)arg0 error:(*id)arg1 ;
-(void)_destroyObject:(**void)arg0 ofType:(NSInteger)arg1 ;
-(void)_handleInitResponse:(*void)arg0 length:(unsigned int)arg1 error:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)_handleSetupResponse:(*void)arg0 length:(unsigned int)arg1 error:(id)arg2 ;
-(void)_sendInitRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_sendSetupRequest:(id)arg0 ;
-(void)_setFailureStateWithError:(NSInteger)arg0 ;
-(void)_setup;
-(void)dealloc;
-(void)verifyStoredContext;


@end


#endif