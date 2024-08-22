// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUNANDATASESSION_H
#define CUNANDATASESSION_H

@class WiFiAwareDataSession, NSString, WiFiAwarePublisher, WiFiAwarePublisherDataSessionHandle;
@protocol WiFiAwareDataSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUNANEndpoint.h"

@interface CUNANDataSession : NSObject <WiFiAwareDataSessionDelegate>

 {
    id *_activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    WiFiAwareDataSession *_wfaDataSessionClient;
}


@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int localInterfaceIndex; // ivar: _localInterfaceIndex
@property (nonatomic) unk peerAddress; // ivar: _peerAddress
@property (retain, nonatomic) CUNANEndpoint *peerEndpoint; // ivar: _peerEndpoint
@property (retain, nonatomic) WiFiAwarePublisher *publisher; // ivar: _publisher
@property (readonly) Class superclass;
@property (nonatomic) unsigned int trafficFlags; // ivar: _trafficFlags
@property (retain, nonatomic) WiFiAwarePublisherDataSessionHandle *wfaDataSessionServer; // ivar: _wfaDataSessionServer


-(BOOL)_dataSession:(id)arg0 confirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 error:(*id)arg3 ;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_terminateServerDataSession;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dataSession:(id)arg0 confirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 ;
-(void)dataSession:(id)arg0 failedToStartWithError:(NSInteger)arg1 ;
-(void)dataSession:(id)arg0 terminatedWithReason:(NSInteger)arg1 ;
-(void)dataSessionRequestStarted:(id)arg0 ;
-(void)dealloc;
-(void)generateStatisticsReportWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)reportIssue:(id)arg0 ;
-(void)updateLinkStatus:(int)arg0 ;


@end


#endif