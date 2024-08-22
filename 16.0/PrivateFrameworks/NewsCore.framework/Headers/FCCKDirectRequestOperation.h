// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKDIRECTREQUESTOPERATION_H
#define FCCKDIRECTREQUESTOPERATION_H

@class NSArray, NSString, NSDictionary, NSMutableArray, NSMutableDictionary, NSError;


#import "FCOperation.h"
#import "FCEdgeCacheHint.h"
#import "FCNetworkEvent.h"

@interface FCCKDirectRequestOperation : FCOperation {
    BOOL _production;
    BOOL _operationFailsOnRequestFailure;
    BOOL _ignoreCache;
    int _networkEventType;
    NSArray *_requests;
    NSString *_containerName;
    NSInteger _requestType;
    CGFloat _timeoutIntervalForRequest;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    id *_criticalNodeFailureTest;
    id *_requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    NSMutableArray *_resultResponses;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}




-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif