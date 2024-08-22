// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERSOURCE_H
#define NEFILTERSOURCE_H

@class NSURLRequest, NSURLResponse, NWPathEvaluator, NSUUID, NSString, NSURL, NSMutableData;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface NEFilterSource : NSObject

@property NSUInteger byteInboundCount; // ivar: _byteInboundCount
@property NSUInteger byteOutboundCount; // ivar: _byteOutboundCount
@property unsigned int controlUnit; // ivar: _controlUnit
@property (retain) NSURLRequest *currentRequest; // ivar: _currentRequest
@property (retain) NSURLResponse *currentResponse; // ivar: _currentResponse
@property (readonly) NSInteger direction; // ivar: _direction
@property (retain) NWPathEvaluator *evaluator; // ivar: _evaluator
@property BOOL expectRemediation; // ivar: _expectRemediation
@property (retain) NSUUID *flowUUID; // ivar: _flowUUID
@property (readonly) *ne_filter_globals globals; // ivar: _globals
@property NSUInteger lastPendingDataStartIndex; // ivar: _lastPendingDataStartIndex
@property NSUInteger lastSendDataLength; // ivar: _lastSendDataLength
@property (retain) NSString *organization; // ivar: _organization
@property (retain) NSURL *parentURL; // ivar: _parentURL
@property NSUInteger passLength; // ivar: _passLength
@property NSUInteger peekIndex; // ivar: _peekIndex
@property (retain) NSMutableData *pendingData; // ivar: _pendingData
@property NSUInteger pendingDataStartIndex; // ivar: _pendingDataStartIndex
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property BOOL registered; // ivar: _registered
@property (retain) NSString *remediationButtonText; // ivar: _remediationButtonText
@property (retain) NSString *remediationURL; // ivar: _remediationURL
@property (retain) NSObject<OS_dispatch_group> *sendDataGroup; // ivar: _sendDataGroup
@property (readonly) NSUInteger socketIdentifier; // ivar: _socketIdentifier
@property (copy) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property int sourceAppPid; // ivar: _sourceAppPid
@property (readonly) NSInteger status; // ivar: _status
@property (retain) NSURL *url; // ivar: _url
@property (retain) NSString *urlAppendString; // ivar: _urlAppendString


+(BOOL)filterRequired;
-(BOOL)generateCryptoSignature:(unsigned char)arg0 length:(*unsigned int)arg1 ;
-(BOOL)sendDataToPluginWithConnection:(id)arg0 completionHandler:(id)arg1 ;
-(id)filterOptions;
-(id)initWithDecisionQueue:(id)arg0 ;
-(id)initWithParentURL:(id)arg0 decisionQueue:(id)arg1 ;
-(id)initWithURL:(id)arg0 direction:(NSInteger)arg1 socketIdentifier:(NSUInteger)arg2 ;
-(id)mergeURLString:(id)arg0 withAppendString:(id)arg1 ;
-(id)replacementData;
-(void)addData:(id)arg0 withCompletionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)connectToFilterUnit:(unsigned int)arg0 withCompletionHandler:(id)arg1 ;
-(void)dataCompleteWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishedLoadingWithDecisionHandler:(id)arg0 ;
-(void)handleFinishedLoadingWithDecisionHandler:(id)arg0 ;
-(void)initGlobals;
-(void)prepareAgentForRequest:(id)arg0 handler:(id)arg1 ;
-(void)prepareAgentForResponse:(id)arg0 handler:(id)arg1 ;
-(void)prepareAgentForURL:(id)arg0 urlRequest:(id)arg1 urlResponse:(id)arg2 parentURL:(id)arg3 direction:(NSInteger)arg4 flowUUID:(id)arg5 handler:(id)arg6 ;
-(void)prepareAgentWithHandler:(id)arg0 ;
-(void)receivedData:(id)arg0 decisionHandler:(id)arg1 ;
-(void)receivedResponse:(id)arg0 decisionHandler:(id)arg1 ;
-(void)remediateWithDecisionHandler:(id)arg0 ;
-(void)willSendRequest:(id)arg0 decisionHandler:(id)arg1 ;


@end


#endif