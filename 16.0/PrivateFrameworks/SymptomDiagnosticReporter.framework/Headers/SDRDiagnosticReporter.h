// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDRDIAGNOSTICREPORTER_H
#define SDRDIAGNOSTICREPORTER_H

@class NSXPCConnection;
@protocol SDRDiagnosticReporterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SDRDiagnosticReporter : NSObject {
    NSXPCConnection *_connection;
}


@property (weak, nonatomic) NSObject<SDRDiagnosticReporterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)isABCEnabled;
+(void)initialize;
-(BOOL)addSignatureContentForSession:(id)arg0 key:(id)arg1 content:(id)arg2 reply:(id)arg3 ;
-(BOOL)addToSession:(id)arg0 event:(id)arg1 payload:(id)arg2 reply:(id)arg3 ;
-(BOOL)addToSession:(id)arg0 events:(id)arg1 payload:(id)arg2 reply:(id)arg3 ;
-(BOOL)cancelSession:(id)arg0 ;
-(BOOL)endSession:(id)arg0 ;
-(BOOL)getDiagnosticPayloadsForSignatures:(id)arg0 reply:(id)arg1 ;
-(BOOL)groupCaseIdentifierForSignature:(id)arg0 reply:(id)arg1 ;
-(BOOL)isSignatureValid:(id)arg0 ;
-(BOOL)snapshotWithSignature:(id)arg0 duration:(CGFloat)arg1 event:(id)arg2 payload:(id)arg3 reply:(id)arg4 ;
-(BOOL)snapshotWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 reply:(id)arg5 ;
-(BOOL)snapshotWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(id)arg6 ;
-(BOOL)snapshotWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 reply:(id)arg4 ;
-(BOOL)snapshotWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 wantsRemoteCase:(BOOL)arg4 reply:(id)arg5 ;
-(BOOL)snapshotWithSignature:(id)arg0 duration:(CGFloat)arg1 payload:(id)arg2 reply:(id)arg3 ;
-(BOOL)snapshotWithSignature:(id)arg0 withIDSDestinations:(id)arg1 validFor:(CGFloat)arg2 duration:(CGFloat)arg3 events:(id)arg4 payload:(id)arg5 actions:(id)arg6 reply:(id)arg7 ;
-(BOOL)startSessionWithSignature:(id)arg0 duration:(CGFloat)arg1 event:(id)arg2 payload:(id)arg3 reply:(id)arg4 ;
-(BOOL)startSessionWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 reply:(id)arg5 ;
-(BOOL)startSessionWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(id)arg6 ;
-(BOOL)startSessionWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 reply:(id)arg4 ;
-(BOOL)startSessionWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 wantsRemoteCase:(BOOL)arg4 reply:(id)arg5 ;
-(BOOL)startSessionWithSignature:(id)arg0 duration:(CGFloat)arg1 payload:(id)arg2 reply:(id)arg3 ;
-(BOOL)startSessionWithSignature:(id)arg0 withIDSDestinations:(id)arg1 validFor:(CGFloat)arg2 duration:(CGFloat)arg3 events:(id)arg4 payload:(id)arg5 actions:(id)arg6 reply:(id)arg7 ;
-(BOOL)triggerRemoteSessionForSignature:(id)arg0 caseGroupID:(id)arg1 reply:(id)arg2 ;
-(id)_payloadAugmentedWithSandboxExtensionTokensDict:(id)arg0 ;
-(id)actionsDictionary:(id)arg0 withIDSDestinations:(id)arg1 validFor:(CGFloat)arg2 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)signatureWithDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 detectedProcess:(id)arg3 triggerThresholdValues:(id)arg4 ;
-(id)signatureWithDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 originatingProcess:(id)arg3 triggerThreshold:(id)arg4 ;
-(id)signatureWithDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 subtypeContext:(id)arg3 detectedProcess:(id)arg4 triggerThresholdValues:(id)arg5 ;
-(void)caseSummariesListCallbackWithResult:(id)arg0 service:(id)arg1 caseSummaryType:(id)arg2 count:(NSUInteger)arg3 container:(id)arg4 reply:(id)arg5 ;
-(void)casesListCallbackWithResult:(id)arg0 service:(id)arg1 identifier:(id)arg2 count:(NSUInteger)arg3 container:(id)arg4 reply:(id)arg5 ;
-(void)dealloc;
-(void)getAllDiagnosticCasesWithReply:(id)arg0 ;
-(void)getAutoBugCaptureConfiguration:(id)arg0 ;
-(void)getDiagnosticCaseSummariesOfType:(id)arg0 reply:(id)arg1 ;
-(void)getDiagnosticCaseSummariesWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)purgeAutoBugCaptureFilesWithSubPaths:(id)arg0 reply:(id)arg1 ;
-(void)setupXPCInterface;


@end


#endif