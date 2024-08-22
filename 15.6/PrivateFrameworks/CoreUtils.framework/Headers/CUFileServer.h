// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUFILESERVER_H
#define CUFILESERVER_H

@class RPCompanionLinkClient, NSMutableDictionary, NSString, NSURL;
@protocol CUActivatable, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CUFileServer : NSObject <CUActivatable>

 {
    BOOL _activateCalled;
    RPCompanionLinkClient *_clinkClient;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSUInteger _lastSessionID;
    char _rootPath;
    NSMutableDictionary *_sessionMap;
    NSObject<OS_dispatch_source> *_sessionTimer;
    *LogCategory _ucat;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSURL *rootDirectoryURL; // ivar: _rootDirectoryURL
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_handleKeepAlive:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleQuery:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleQuery:(id)arg0 session:(id)arg1 ;
-(void)_handleRequestFiles:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleSessionStart:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleSessionStop:(id)arg0 responseHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_sessionInvalidate:(id)arg0 ;
-(void)_sessionTimerFired;
-(void)_update;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif