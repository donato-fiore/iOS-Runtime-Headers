// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXMETRICMANAGER_H
#define MXMETRICMANAGER_H

@class NSXPCConnection, NSArray, NSHashTable;
@protocol MXXPCClient, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface MXMetricManager : NSObject <MXXPCClient>



@property BOOL checkedDiagnostics; // ivar: _checkedDiagnostics
@property BOOL checkedMetrics; // ivar: _checkedMetrics
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue; // ivar: _iVarQueue
@property (retain, nonatomic) NSObject<OS_os_log> *managerLogHandle; // ivar: _managerLogHandle
@property (nonatomic) int metricToken; // ivar: _metricToken
@property (retain) NSArray *pastDiagnosticPayloads; // ivar: _pastDiagnosticPayloads
@property (retain) NSArray *pastPayloads; // ivar: _pastPayloads
@property (retain, nonatomic) NSHashTable *subscribers; // ivar: _subscribers


+(BOOL)extendLaunchMeasurementForTaskID:(id)arg0 error:(*id)arg1 ;
+(BOOL)finishExtendedLaunchMeasurementForTaskID:(id)arg0 error:(*id)arg1 ;
+(id)makeLogHandleWithCategory:(id)arg0 ;
+(id)sharedManager;
-(BOOL)_cachedPayloadAvailable;
-(id)_createXPCConnection;
-(id)init;
-(id)mergeDiagnosticsAtLocation:(id)arg0 ;
-(void)_checkAndDeliverDiagnosticReports;
-(void)_checkAndDeliverMetricReports;
-(void)addSubscriber:(id)arg0 ;
-(void)dealloc;
-(void)deliverDiagnosticPayload:(id)arg0 ;
-(void)deliverMetricPayload:(id)arg0 ;
-(void)registrationProcessed;
-(void)removeSubscriber:(id)arg0 ;


@end


#endif