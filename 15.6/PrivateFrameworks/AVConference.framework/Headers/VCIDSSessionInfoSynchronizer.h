// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCIDSSESSIONINFOSYNCHRONIZER_H
#define VCIDSSESSIONINFOSYNCHRONIZER_H

@class NSMutableArray, NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCConnectionManager.h"

@interface VCIDSSessionInfoSynchronizer : NSObject {
    NSMutableArray *_peerSubscribedStreams;
    NSMutableDictionary *_peerPublishedStreams;
    NSMutableArray *_publishedStreams;
    NSMutableDictionary *_subscribedStreams;
    id *_delegate;
    unsigned int _currentParticipantGenerationCounter;
    NSNumber *_primaryLinkID;
    NSNumber *_duplicationLinkID;
    VCConnectionManager *_connectionManager;
    id *_reportingAgentWeak;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _sessionInfoRequestBytesUsed;
    int _sessionInfoResponseBytesUsed;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    CGFloat _lastUpdateTimestamp;
    unsigned int _subscribedStreamsRetryCount;
}


@property (retain, nonatomic) NSNumber *duplicationLinkID;
@property (copy, nonatomic) id *errorReponseCallback; // ivar: _errorReponseCallback
@property (copy, nonatomic) id *peerPublishedStreamCallback; // ivar: _peerPublishedStreamCallback
@property (copy, nonatomic) id *peerSubscribedStreamCallback; // ivar: _peerSubscribedStreamCallback
@property (retain, nonatomic) NSNumber *primaryLinkID;
@property (readonly) id *reportingAgent;


-(id)initWithDelegate:(id)arg0 connectionManager:(id)arg1 reportingAgent:(id)arg2 ;
-(id)sessionInfoSynchronizerDelegate;
-(void)checkVCIDSSessionInfoNeedUpdate:(unsigned char)arg0 ;
-(void)dealloc;
-(void)deregisterPeriodicTask;
-(void)flushRealTimeReportingStats;
-(void)optInAllStreamsForConnection:(id)arg0 ;
-(void)optInStreamIDsForConnection:(id)arg0 ;
-(void)optInStreamIDsForNewPrimaryConnection:(id)arg0 oldPrimaryConnection:(id)arg1 ;
-(void)optOutStreamIDsForNonPrimaryConnection:(id)arg0 sentOnConnection:(id)arg1 ;
-(void)periodicTask:(*void)arg0 ;
-(void)registerPeriodicTask;
-(void)resetParticipantGenerationCounter;
-(void)retryVCIDSSessionInfoSubscribedStreamIDs;
-(void)sendVCIDSSessionInfoSubscribedStreamIDs:(id)arg0 ;
-(void)setErrorResponseCallback:(id)arg0 ;
-(void)setVCIDSSessionInfoPublishedStreamIDs:(id)arg0 ;
-(void)setVCIDSSessionInfoSubscribedStreamIDs:(id)arg0 ;
-(void)updateVCIDSSessionInfoResponse:(id)arg0 ;


@end


#endif