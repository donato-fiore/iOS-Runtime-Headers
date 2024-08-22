// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDLOCALTRANSPORT_H
#define DEDLOCALTRANSPORT_H

@class NSString;
@protocol DEDClientProtocol, DEDWorkerProtocol, OS_os_log;

#import <Foundation/Foundation.h>


@interface DEDLocalTransport : NSObject <DEDClientProtocol, DEDWorkerProtocol>



@property (weak) NSObject<DEDClientProtocol> *clientDelegate; // ivar: _clientDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;
@property (weak) NSObject<DEDWorkerProtocol> *workerDelegate; // ivar: _workerDelegate


-(NSInteger)transportType;
-(id)initWithClientDelegate:(id)arg0 ;
-(id)initWithWorkerDelegate:(id)arg0 ;
-(void)adoptFiles:(id)arg0 forSession:(id)arg1 ;
-(void)cancelNotificationForSession:(id)arg0 ;
-(void)cancelSession:(id)arg0 ;
-(void)commitSession:(id)arg0 ;
-(void)deviceSupportsDiagnosticExtensions:(id)arg0 session:(id)arg1 ;
-(void)didAdoptFilesWithError:(id)arg0 forSession:(id)arg1 ;
-(void)didCancelSession:(id)arg0 ;
-(void)didCommitSession:(id)arg0 ;
-(void)didGetState:(NSInteger)arg0 info:(id)arg1 sessionID:(id)arg2 ;
-(void)finishedDiagnosticWithIdentifier:(id)arg0 result:(id)arg1 session:(id)arg2 ;
-(void)getSessionStateWithSession:(id)arg0 ;
-(void)getSessionStatusWithSession:(id)arg0 ;
-(void)hasCollected:(id)arg0 isCollecting:(id)arg1 inSession:(id)arg2 ;
-(void)hasCollected:(id)arg0 isCollecting:(id)arg1 withIdentifiers:(id)arg2 inSession:(id)arg3 ;
-(void)listAvailableExtensionsForSession:(id)arg0 ;
-(void)pingSession:(id)arg0 ;
-(void)pongSession:(id)arg0 ;
-(void)scheduleNotificationForSession:(id)arg0 ;
-(void)startDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 deferRunUntil:(id)arg2 session:(id)arg3 ;
-(void)startDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 ;
-(void)syncSessionStatusWithSession:(id)arg0 ;
-(void)terminateExtension:(id)arg0 info:(id)arg1 session:(id)arg2 ;
-(void)uploadProgress:(NSUInteger)arg0 total:(NSUInteger)arg1 session:(id)arg2 ;


@end


#endif