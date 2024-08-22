// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIAGNOSTICCASEMANAGER_H
#define DIAGNOSTICCASEMANAGER_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;
@protocol DiagnosticReportGeneratorDelegate, DiagnosticLiaisonDelegate, OS_dispatch_source, OS_dispatch_queue, DiagnosticCaseManagerStorageDelegate;

#import <Foundation/Foundation.h>

#import "AnalyticsWorkspace.h"
#import "DiagnosticCaseStorageAnalytics.h"
#import "DiagnosticCaseSummaryAnalytics.h"
#import "DiagnosticsController.h"
#import "ABCConfigurationManager.h"
#import "DiagnosticLiaison.h"
#import "DiagnosticStatisticsManager.h"

@interface DiagnosticCaseManager : NSObject <DiagnosticReportGeneratorDelegate, DiagnosticLiaisonDelegate>

 {
    AnalyticsWorkspace *_workspace;
    NSMutableArray *_pendingStatisticsUpdateCases;
    NSMutableSet *_reportOutlets;
    NSInteger _saveCount;
    NSMutableArray *_requestedReportGenerators;
    DiagnosticCaseStorageAnalytics *_caseStorageAnalytics;
    DiagnosticCaseSummaryAnalytics *_caseSummaryAnalytics;
    DiagnosticsController *_diagnosticsController;
    NSObject<OS_dispatch_source> *periodicTimer;
    BOOL _initializationComplete;
    NSMutableSet *sessionsWaitingToEnd;
    NSMutableDictionary *activeProbes;
    NSMutableDictionary *activeIDSMessages;
    NSMutableDictionary *_activeTransactions;
    BOOL _shouldPurgeStorageAfterSave;
}


@property (readonly, copy, nonatomic) NSMutableArray *activeCases; // ivar: _activeCases
@property (nonatomic) unsigned int avgCasesPerDay; // ivar: _avgCasesPerDay
@property (readonly, nonatomic) ABCConfigurationManager *configManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DiagnosticsController *diagnosticsController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DiagnosticLiaison *liaison; // ivar: _liaison
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableDictionary *reportGenerators; // ivar: _reportGenerators
@property (readonly, nonatomic) DiagnosticStatisticsManager *statsManager; // ivar: _statsManager
@property (weak, nonatomic) NSObject<DiagnosticCaseManagerStorageDelegate> *storageDelegate; // ivar: _storageDelegate
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSMutableArray *totalCases; // ivar: _totalCases


+(BOOL)isException:(id)arg0 containedInString:(id)arg1 ;
+(BOOL)isString:(id)arg0 inExceptionList:(id)arg1 ;
-(BOOL)allowDampeningExceptionFor:(id)arg0 ;
-(BOOL)closeCase:(id)arg0 ;
-(BOOL)disableDampening;
-(BOOL)finalizeDiagnosticCaseWithId:(id)arg0 closureType:(short)arg1 onlyIfReady:(BOOL)arg2 ;
-(BOOL)hasOpenCases;
-(BOOL)isAdmissible:(id)arg0 dampenedBy:(*short)arg1 ;
-(BOOL)isAllowedTransientException:(id)arg0 ;
-(BOOL)requestReportGenerator:(id)arg0 options:(id)arg1 ;
-(BOOL)sendReportsForCase:(id)arg0 ;
-(BOOL)statisticsRowForDiagnosticCase:(id)arg0 matchesWith:(id)arg1 ;
-(NSInteger)dailyCountLimitForDomain:(id)arg0 type:(id)arg1 subtype:(id)arg2 domainPredicates:(id)arg3 ;
-(NSUInteger)_processProbeActions:(id)arg0 session:(id)arg1 ;
-(NSUInteger)collectDiagnosticExtensionLogsWithParameters:(id)arg0 options:(id)arg1 diagCase:(id)arg2 reply:(id)arg3 ;
-(id)_updateSignatureWithBuildVariantInfoAndFlags:(id)arg0 ;
-(id)caseStorageAnalytics;
-(id)caseStorageForCaseID:(id)arg0 ;
-(id)caseSummariesOfType:(id)arg0 fromIdentifier:(id)arg1 count:(NSUInteger)arg2 ;
-(id)caseSummariesWithIdentifiers:(id)arg0 ;
-(id)casesDiagnosedInTheLast:(CGFloat)arg0 from:(CGFloat)arg1 matchingDomain:(id)arg2 ;
-(id)casesMatchingDomain:(id)arg0 type:(id)arg1 subtype:(id)arg2 process:(id)arg3 withinLast:(CGFloat)arg4 ;
-(id)createDiagnosticCaseWithSignature:(id)arg0 flags:(NSUInteger)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 ;
-(id)createTemporaryDiagnosticCaseStorageForUUID:(id)arg0 ;
-(id)diagnosticCaseDictionariesFromIdentifier:(id)arg0 withEvents:(BOOL)arg1 count:(NSUInteger)arg2 ;
-(id)diagnosticCaseWithId:(id)arg0 ;
-(id)initWithWorkspace:(id)arg0 liaison:(id)arg1 ;
-(id)lookUpDiagnosticCaseStorageForUUID:(id)arg0 ;
-(id)responseDictWithSuccess:(BOOL)arg0 sessionId:(id)arg1 reasonCode:(NSInteger)arg2 ;
-(int)addSignatureContentToCaseWithId:(id)arg0 key:(id)arg1 content:(id)arg2 ;
-(int)addToCaseWithId:(id)arg0 events:(id)arg1 payload:(id)arg2 ;
-(int)cancelCaseWithId:(id)arg0 ;
-(unsigned int)dampeningFactorForSignature:(id)arg0 caseTime:(id)arg1 limit:(NSInteger)arg2 ;
-(unsigned int)defaultDampeningFactorForSignature:(id)arg0 limit:(NSInteger)arg1 ;
-(void)_forceCloseDiagnosticCaseStorage;
-(void)_processActionsForPacketCaptureProbe:(id)arg0 session:(id)arg1 ;
-(void)_processRemoteIDSTriggers:(id)arg0 validFor:(CGFloat)arg1 signature:(id)arg2 sessionID:(id)arg3 reply:(id)arg4 ;
-(void)_processReportActions:(id)arg0 session:(id)arg1 ;
-(void)_processTriggerActions:(id)arg0 session:(id)arg1 ;
-(void)_saveAllCases;
-(void)_updateCaseStatisticsWithCase:(id)arg0 ;
-(void)addCaseReportOutlet:(id)arg0 ;
-(void)addSignatureContentForSession:(id)arg0 key:(id)arg1 content:(id)arg2 reply:(id)arg3 ;
-(void)addToSession:(id)arg0 event:(id)arg1 payload:(id)arg2 queue:(id)arg3 reply:(id)arg4 ;
-(void)addToSession:(id)arg0 events:(id)arg1 payload:(id)arg2 queue:(id)arg3 reply:(id)arg4 ;
-(void)addToSession:(id)arg0 events:(id)arg1 payload:(id)arg2 reply:(id)arg3 ;
-(void)addTransactionForCaseID:(id)arg0 ;
-(void)buildSpecificRestrictionsForSignature:(id)arg0 result:(id)arg1 ;
-(void)cancelProbesForSession:(id)arg0 ;
-(void)cancelSessionWithIdentifier:(id)arg0 ;
-(void)caseAllowanceForSignaure:(id)arg0 timestamp:(id)arg1 result:(id)arg2 ;
-(void)configureWithWorkspace:(id)arg0 ;
-(void)endSession:(id)arg0 forced:(BOOL)arg1 onlyIfReady:(BOOL)arg2 ;
-(void)endSessionIfProbesCompletedFor:(id)arg0 ;
-(void)endSessionWithIdentifier:(id)arg0 forced:(BOOL)arg1 ;
-(void)endSessionWithIdentifier:(id)arg0 forced:(BOOL)arg1 onlyIfReady:(BOOL)arg2 ;
-(void)endSessions:(id)arg0 forced:(BOOL)arg1 ;
-(void)forceCloseDiagnosticCaseStorage;
-(void)getHistoricalDiagnosicCaseDictionaryFromIdentifier:(id)arg0 withEvents:(BOOL)arg1 count:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)listCaseSummariesOfType:(id)arg0 fromIdentifier:(id)arg1 count:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)listCaseSummariesWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)payloadsForSignatures:(id)arg0 reply:(id)arg1 ;
-(void)periodicSessionManagement;
-(void)postProcessActionsForClosedCase:(id)arg0 ;
-(void)promoteTemporaryCase:(id)arg0 ;
-(void)recordDiagnosticCaseSummaryForCase:(id)arg0 ;
-(void)remoteTriggerDeliveryUpdateEvent:(id)arg0 ;
-(void)removeAllCases;
-(void)removeCaseStorageWithID:(id)arg0 ;
-(void)removeClosedCasesFromTotalCases;
-(void)removeTransactionForCaseID:(id)arg0 ;
-(void)removeTransientCasesWithSignature:(id)arg0 beforeTime:(CGFloat)arg1 ;
-(void)reportGeneratorEnded:(id)arg0 reportInfo:(id)arg1 error:(id)arg2 ;
-(void)requestGroupCaseIdentifierForSignature:(id)arg0 reply:(id)arg1 ;
-(void)requestSnapshotWithSignature:(id)arg0 flags:(NSUInteger)arg1 events:(id)arg2 ;
-(void)resetAll;
-(void)resetAllForCustomerBuilds;
-(void)resetDiagnosticCaseStorage;
-(void)saveAllCases;
-(void)setUpGeneralCaseReportGenerators;
-(void)shutdown;
-(void)startCollectingNextReportForDiagnosticCase:(id)arg0 ;
-(void)startPacketCaptureForSession:(id)arg0 duration:(id)arg1 ;
-(void)startPeriodicTimer;
-(void)startSessionWithSignature:(id)arg0 duration:(CGFloat)arg1 events:(id)arg2 payload:(id)arg3 triggerRemote:(BOOL)arg4 queue:(id)arg5 reply:(id)arg6 ;
-(void)startSessionWithSignature:(id)arg0 flags:(NSUInteger)arg1 preferredTimeout:(CGFloat)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(id)arg6 ;
-(void)stopPeriodicTimer;
-(void)updateAverageCasesPerDay;
-(void)updateSignatureWithBundleIdentifier:(id)arg0 reply:(id)arg1 ;


@end


#endif