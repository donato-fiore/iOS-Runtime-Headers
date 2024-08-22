// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERSOURCE_H
#define NEFILTERSOURCE_H

@class NSMutableData, NWPathEvaluator, NSUUID, NSURLResponse, NSURLRequest, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface NEFilterSource : NSObject {
    BOOL _registered;
    BOOL _expectRemediation;
    unsigned int _controlUnit;
    NSMutableData *_pendingData;
    NWPathEvaluator *_evaluator;
    NSUUID *_flowUUID;
    NSUInteger _lastPendingDataStartIndex;
    NSUInteger _lastSendDataLength;
    NSUInteger _pendingDataStartIndex;
    NSUInteger _peekIndex;
    NSUInteger _passLength;
    NSURLResponse *_currentResponse;
    NSURLRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_urlAppendString;
    NSString *_remediationURL;
    NSString *_remediationButtonText;
    NSString *_organization;
    NSURL *_parentURL;
    *ne_filter_globals _globals;
    NSUInteger _byteInboundCount;
    NSUInteger _byteOutboundCount;
    NSObject<OS_dispatch_group> *_sendDataGroup;
}


@property (readonly) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger socketIdentifier; // ivar: _socketIdentifier
@property (copy) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property int sourceAppPid; // ivar: _sourceAppPid
@property (readonly) NSInteger status; // ivar: _status
@property (retain) NSURL *url; // ivar: _url


+(BOOL)filterRequired;
-(id)initWithDecisionQueue:(id)arg0 ;
-(id)initWithURL:(id)arg0 direction:(NSInteger)arg1 socketIdentifier:(NSUInteger)arg2 ;
-(void)addData:(id)arg0 withCompletionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)dataCompleteWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishedLoadingWithDecisionHandler:(id)arg0 ;
-(void)receivedData:(id)arg0 decisionHandler:(id)arg1 ;
-(void)receivedResponse:(id)arg0 decisionHandler:(id)arg1 ;
-(void)remediateWithDecisionHandler:(id)arg0 ;
-(void)willSendRequest:(id)arg0 decisionHandler:(id)arg1 ;


@end


#endif