// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSYSTEMSESSION_H
#define SFSYSTEMSESSION_H

@class NSMutableArray, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSessionRequestInfo.h"
#import "SFSession.h"
#import "SFDevice.h"

@interface SFSystemSession : NSObject {
    SFSessionRequestInfo *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _pairVerifyDone;
    NSMutableArray *_requests;
    SFSession *_sfSession;
    int _state;
    BOOL _stateDone;
    NSError *_stateError;
}


@property (nonatomic) BOOL allowUnencrypted; // ivar: _allowUnencrypted
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice


-(id)init;
-(void)_cleanup;
-(void)_processRequests;
-(void)_processRequestsWithError:(id)arg0 ;
-(void)_run;
-(void)_runPairVerifyStart;
-(void)_runSFSessionStart;
-(void)activate;
-(void)getProfilesResponse:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)getProfilesWithCompletion:(id)arg0 ;
-(void)getSystemInfoWithCompletion:(id)arg0 ;
-(void)installProfileResponse:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)installProfileWithData:(id)arg0 completion:(id)arg1 ;
-(void)installProfileWithURL:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)rebootSystemWithCompletion:(id)arg0 ;
-(void)removeProfileWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif