// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUFILECLIENT_H
#define CUFILECLIENT_H

@class RPCompanionLinkClient, NSMutableArray, NSNumber, NSString;
@protocol CUActivatable, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUFileQuery.h"

@interface CUFileClient : NSObject <CUActivatable>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _clinkActivated;
    RPCompanionLinkClient *_clinkClient;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSUInteger _lastRequestTicks;
    NSMutableArray *_queryArray;
    CUFileQuery *_currentQuery;
    NSNumber *_sessionID;
    NSObject<OS_dispatch_source> *_sessionTimer;
    int _state;
    *LogCategory _ucat;
}


@property (copy, nonatomic) NSString *destinationID; // ivar: _destinationID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_completeQuery:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_reportError:(id)arg0 where:(char *)arg1 ;
-(void)_run;
-(void)_runCLinkActivate;
-(void)_runPrepare;
-(void)_runQueries;
-(void)_runQueryResponse:(id)arg0 query:(id)arg1 error:(id)arg2 ;
-(void)_runSendQuery:(id)arg0 ;
-(void)_runSessionStartRequest;
-(void)_runSessionStartResponse:(id)arg0 error:(id)arg1 ;
-(void)_sendKeepAlive:(CGFloat)arg0 ;
-(void)_sendSessionStop;
-(void)_sessionTimerFired;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)performQuery:(id)arg0 ;


@end


#endif