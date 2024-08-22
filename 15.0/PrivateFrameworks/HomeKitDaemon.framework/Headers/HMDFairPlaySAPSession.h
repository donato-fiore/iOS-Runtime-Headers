// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDFAIRPLAYSAPSESSION_H
#define HMDFAIRPLAYSAPSESSION_H

@class HMFObject, NSUUID;
@protocol OS_dispatch_queue, HMDFairPlaySAPSessionDelegate;



@interface HMDFairPlaySAPSession : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, weak) NSObject<HMDFairPlaySAPSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) FairPlayHWInfo_ hardwareInfo; // ivar: _hardwareInfo
@property (readonly, nonatomic) *FPSAPContextOpaque_ session; // ivar: _session
@property (readonly, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)_closeWithError:(id)arg0 ;
-(void)_handleServerCertificate:(id)arg0 error:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleServerSAPExchangeData:(id)arg0 error:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_setupSAPSessionWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)_teardown;
-(void)close;
-(void)dealloc;
-(void)openWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)signatureForData:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)verifySignedData:(id)arg0 signature:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif