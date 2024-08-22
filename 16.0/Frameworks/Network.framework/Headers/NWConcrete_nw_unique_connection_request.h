// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_UNIQUE_CONNECTION_REQUEST_H
#define NWCONCRETE_NW_UNIQUE_CONNECTION_REQUEST_H

@class NSString;
@protocol OS_nw_unique_connection_request, OS_nw_endpoint, OS_nw_parameters, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_connection.h"

@interface NWConcrete_nw_unique_connection_request : NSObject <OS_nw_unique_connection_request>

 {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *userParameters;
    char service;
    NSUInteger sequenceNumber;
    NSUInteger uniqueID;
    unsigned char uuid;
    unsigned char signature;
    char * incomingReqBytesToVerify;
    unsigned int incomingReqBytesToVerifyLen;
    NWConcrete_nw_connection *connection;
    NSObject<OS_nw_path_evaluator> *pathEvaluator;
    id *requestCompletionBlock;
    *void rejectTimer;
    *void preexistingConnectionTimer;
    BOOL isIncoming;
    BOOL isPending;
    BOOL pendingRequestAccepted;
    BOOL isWaitingForListenerReady;
    BOOL isWaitingForActiveConnection;
    BOOL hasRequestedPubKey;
    BOOL hasBeenProcessed;
    BOOL isWaitingForPathUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif