// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDCIRCLECONTROLLER_H
#define CDPDCIRCLECONTROLLER_H

@class NSArray;
@protocol OS_dispatch_queue, CDPDCircleProxy, CDPDCircleDelegate, CDPDOctagonTrustProxy, CDPStateUIProviderInternal;

#import <Foundation/Foundation.h>

#import "CDPDCircleStateObserver.h"

@interface CDPDCircleController : NSObject {
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    NSObject<OS_dispatch_queue> *_retryQueue;
    NSUInteger _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
}


@property (retain, nonatomic) NSObject<CDPDCircleProxy> *circleProxy; // ivar: _circleProxy
@property (weak, nonatomic) NSObject<CDPDCircleDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<CDPDOctagonTrustProxy> *octagonProxy; // ivar: _octagonProxy
@property (retain, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider; // ivar: _uiProvider


-(BOOL)canRetryCliqueStatus;
-(BOOL)synchronizeCircleViews;
-(NSInteger)nextRetryInterval;
-(NSUInteger)circleStatus;
-(id)_peerDeviceNamesByPeerID;
-(id)initWithUiProvider:(id)arg0 delegate:(id)arg1 circleProxy:(id)arg2 octagonTrustProxy:(id)arg3 ;
-(id)peerID;
-(void)_attemptCustodianBackupRecoveryWithInfo:(id)arg0 result:(id)arg1 ignoreBackups:(BOOL)arg2 completion:(id)arg3 ;
-(void)_joinCircleFallbackWithResult:(id)arg0 ignoreBackups:(BOOL)arg1 completion:(id)arg2 ;
-(void)_joinCircleIgnoringBackups:(BOOL)arg0 completion:(id)arg1 ;
-(void)_populateWalrusStatusOnContext:(id)arg0 ;
// -(void)_requestCircleJoinWithObserver:(id)arg0 requestBlock:(id)arg1 completion:(unk)arg2  ;
-(void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id)arg0 ;
-(void)_requestToJoinAndWaitForSuccessWithHandler:(id)arg0 ;
-(void)_requestToJoinWithObserver:(id)arg0 completion:(id)arg1 ;
// -(void)_requestToJoinWithRequestBlock:(id)arg0 completion:(unk)arg1  ;
-(void)_silentReauthWithCompletion:(id)arg0 ;
-(void)applyToJoinCircleWithJoinHandler:(id)arg0 ;
-(void)cancelApplicationToJoinCircle;
-(void)dealloc;
-(void)joinCircleIgnoringBackups:(BOOL)arg0 completion:(id)arg1 ;
-(void)joinCircleWithCompletion:(id)arg0 ;
-(void)prepareCircleStateForRecovery;
-(void)promptForCredentials:(id)arg0 ;
-(void)resetCircleIncludingCloudKitData:(BOOL)arg0 cloudKitResetReasonDescription:(id)arg1 withCompletion:(id)arg2 ;
-(void)useCircleInfoToUpdateNameForDevices:(id)arg0 ;


@end


#endif