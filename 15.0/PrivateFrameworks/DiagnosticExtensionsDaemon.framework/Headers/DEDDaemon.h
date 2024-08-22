// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDDAEMON_H
#define DEDDAEMON_H

@class NSOperationQueue, NSString;
@protocol DEDWorkerProtocol, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDDiagnosticCollector.h"
#import "DEDConfiguration.h"
#import "DEDController.h"

@interface DEDDaemon : NSObject <DEDWorkerProtocol>



@property (retain) DEDDiagnosticCollector *_diagnosticCollector; // ivar: __diagnosticCollector
@property (retain) NSOperationQueue *backgroundOpQueue; // ivar: _backgroundOpQueue
@property (retain) DEDConfiguration *config; // ivar: _config
@property (retain) DEDController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *diskAccessQueue; // ivar: _diskAccessQueue
@property BOOL embeddedInApp; // ivar: _embeddedInApp
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;
@property (retain) NSOperationQueue *userInitiatedOpQueue; // ivar: _userInitiatedOpQueue


+(id)sharedInstance;
-(BOOL)observesOperations;
-(NSInteger)transportType;
-(id)attachmentHandler;
-(id)diagnosticCollector;
-(id)init;
-(void)_startDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 runSetup:(BOOL)arg3 ;
-(void)_streamOperationStatus;
-(void)_syncSessionStatusWithSession:(id)arg0 withIdentifiers:(BOOL)arg1 ;
-(void)_syncSessionStatusWithSessionID:(id)arg0 withIdentifiers:(BOOL)arg1 ;
-(void)adoptFiles:(id)arg0 forSession:(id)arg1 ;
-(void)cancelNotificationForSession:(id)arg0 ;
-(void)cancelSession:(id)arg0 ;
-(void)commitSession:(id)arg0 ;
-(void)configureForEmbedded:(BOOL)arg0 ;
-(void)finallyStartDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 ;
-(void)getSessionStateWithSession:(id)arg0 ;
-(void)getSessionStatusWithSession:(id)arg0 ;
-(void)listAvailableExtensionsForSession:(id)arg0 ;
-(void)pingSession:(id)arg0 ;
-(void)scheduleNotificationForSession:(id)arg0 ;
-(void)setupDeferredDiagnosticsWithExtensionInfo:(id)arg0 ;
-(void)start;
-(void)startDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 deferRunUntil:(id)arg2 session:(id)arg3 ;
-(void)startDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 ;
-(void)syncSessionStatusWithSession:(id)arg0 ;
-(void)teardownDeferredDiagnosticsWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 ;
-(void)terminateExtension:(id)arg0 info:(id)arg1 session:(id)arg2 ;


@end


#endif