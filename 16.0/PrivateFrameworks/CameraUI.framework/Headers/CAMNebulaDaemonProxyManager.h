// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMNEBULADAEMONPROXYMANAGER_H
#define CAMNEBULADAEMONPROXYMANAGER_H

@class NSXPCConnection, NSString;
@protocol CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol, OS_dispatch_queue, CAMNebulaDaemonIrisClientProtocol, CAMNebulaDaemonTimelapseClientProtocol;

#import <Foundation/Foundation.h>


@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol>



@property (readonly, nonatomic) NSXPCConnection *_connection; // ivar: __connection
@property (readonly, nonatomic) NSInteger _connectionCount; // ivar: __connectionCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // ivar: __queue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CAMNebulaDaemonIrisClientProtocol> *irisClientDelegate; // ivar: _irisClientDelegate
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CAMNebulaDaemonTimelapseClientProtocol> *timelapseClientDelegate; // ivar: _timelapseClientDelegate


+(id)_clientProtocolInterface;
+(id)_daemonProtocolInterface;
-(id)init;
-(void)_closeConnectionToDaemon;
-(void)_ensureConnectionToDaemon;
-(void)_getProxyForExecutingBlock:(id)arg0 ;
-(void)closeConnectionToDaemon;
-(void)enqueueIrisVideoJobs:(id)arg0 ;
-(void)ensureConnectionToDaemon;
-(void)finishCaptureForTimelapseWithUUID:(id)arg0 ;
-(void)forceStopTimelapseCaptureWithReasons:(NSInteger)arg0 ;
-(void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg0 ;
-(void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(BOOL)arg0 ;
-(void)performIrisCrashRecovery;
-(void)pingAfterInterruption;
-(void)resumeTimelapseWithUUID:(id)arg0 ;
-(void)startTimelapseWithUUID:(id)arg0 ;
-(void)stopTimelapseWithUUID:(id)arg0 ;
-(void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg0 ;
-(void)updateTimelapseWithUUID:(id)arg0 ;


@end


#endif