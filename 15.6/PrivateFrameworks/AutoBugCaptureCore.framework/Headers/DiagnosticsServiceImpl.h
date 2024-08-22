// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIAGNOSTICSSERVICEIMPL_H
#define DIAGNOSTICSSERVICEIMPL_H

@class NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, DiagnosticsServiceInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DiagnosticsServiceImpl : NSObject <NSXPCListenerDelegate, DiagnosticsServiceInterface>

 {
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *allowanceCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkRateLimitForAllowance:(id)arg0 time:(id)arg1 ;
-(BOOL)_checkRateLimitForConnection:(id)arg0 ;
-(BOOL)assertEntitlement:(id)arg0 entitlement:(id)arg1 private:(BOOL)arg2 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)validateSignature:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)responseDictWithSuccess:(BOOL)arg0 reasonCode:(NSInteger)arg1 ;
-(id)responseDictWithSuccess:(BOOL)arg0 sessionId:(id)arg1 ;
-(id)responseDictWithSuccess:(BOOL)arg0 sessionId:(id)arg1 groupId:(id)arg2 additionalDict:(id)arg3 reasonCode:(NSInteger)arg4 ;
-(void)abcEnabledAndReadyWithReply:(id)arg0 ;
-(void)addSignatureContentForSession:(id)arg0 key:(id)arg1 content:(id)arg2 reply:(id)arg3 ;
-(void)addToSession:(id)arg0 event:(id)arg1 payload:(id)arg2 reply:(id)arg3 ;
-(void)addToSession:(id)arg0 events:(id)arg1 payload:(id)arg2 reply:(id)arg3 ;
-(void)cancelSession:(id)arg0 ;
-(void)cloudKitUploadDecisionForCaseIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)endSession:(id)arg0 ;
-(void)getAutoBugCaptureConfiguration:(id)arg0 ;
-(void)getCasesListFromIdentifier:(id)arg0 count:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)getDiagnosticPayloadsForSignatures:(id)arg0 reply:(id)arg1 ;
-(void)getExpertSystemsStatus:(id)arg0 ;
-(void)getSessionStatisticsWithReply:(id)arg0 ;
-(void)homeKitResidentDevicesIDSIdentifiersWithReply:(id)arg0 ;
-(void)listCaseSummariesOfType:(id)arg0 fromIdentifier:(id)arg1 count:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)listCaseSummariesWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)purgeAutoBugCaptureFilesWithSubPaths:(id)arg0 reply:(id)arg1 ;
-(void)requestGroupCaseIdentifierForSignature:(id)arg0 reply:(id)arg1 ;
-(void)resetAllWithReply:(id)arg0 ;
-(void)resetDiagnosticCaseStorageWithReply:(id)arg0 ;
-(void)resetDiagnosticCaseUsageWithReply:(id)arg0 ;
-(void)shutdown;
-(void)snapshotWithSignature:(id)arg0 duration:(NSUInteger)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(id)arg6 ;
-(void)startSessionWithSignature:(id)arg0 duration:(NSUInteger)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(id)arg6 ;
-(void)submitRecentCaseSummariesWithCount:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)submitRecentCaseSummariesWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)triggerRemoteSessionForSignature:(id)arg0 groupIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)uploadCasesWithIdentifiersToCloudKit:(id)arg0 ;
-(void)uploadRecentCases:(NSUInteger)arg0 ;


@end


#endif