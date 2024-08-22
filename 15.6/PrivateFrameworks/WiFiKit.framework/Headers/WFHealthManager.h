// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHEALTHMANAGER_H
#define WFHEALTHMANAGER_H

@class NSSet, NWPathEvaluator, NSArray;
@protocol WFHealthManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFDiagnosticsManager.h"
#import "WFInterface.h"
#import "WFNetworkScanRecord.h"
#import "WFNetworkProfile.h"

@interface WFHealthManager : NSObject

@property (nonatomic) NSInteger completedVelocityTestTimes; // ivar: _completedVelocityTestTimes
@property (readonly, nonatomic) BOOL currentNetworkHasNoInternetConnection;
@property (retain, nonatomic) NSSet *currentNetworkIssues; // ivar: _currentNetworkIssues
@property (weak, nonatomic) NSObject<WFHealthManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WFDiagnosticsManager *diagnosticsManager; // ivar: _diagnosticsManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsQueue; // ivar: _diagnosticsQueue
@property (retain, nonatomic) NWPathEvaluator *evaluator; // ivar: _evaluator
@property (nonatomic) BOOL failNoInternetDiagnosticsTests; // ivar: _failNoInternetDiagnosticsTests
@property (retain, nonatomic) NSArray *failedTestsIDs; // ivar: _failedTestsIDs
@property (retain, nonatomic) WFInterface *interface; // ivar: _interface
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) WFNetworkProfile *profile; // ivar: _profile
@property (nonatomic) BOOL shouldFileNewMetrics; // ivar: _shouldFileNewMetrics


-(id)initWithInterface:(id)arg0 ;
-(void)_updateCurrentNetworkIssues;
-(void)currentNetworkDidChange:(id)arg0 ;
-(void)dealloc;
-(void)forceUpdateNetworkIssues;
-(void)linkQualityDidChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)runNoInternetDiagnostics;
-(void)runNoInternetDiagnosticsAfter:(NSInteger)arg0 ;


@end


#endif