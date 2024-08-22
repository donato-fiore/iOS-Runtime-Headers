// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXCORE_H
#define MXCORE_H

@class NSMutableDictionary, NSString, NSMutableSet, NSXPCListener;
@protocol MXXPCServer, NSXPCListenerDelegate, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MXSource.h"

@interface MXCore : NSObject <MXXPCServer, NSXPCListenerDelegate>



@property (retain) NSObject<OS_os_log> *MXCoreLogHandle; // ivar: _MXCoreLogHandle
@property (retain) NSObject<OS_os_log> *MXCoreXcodeSupportLogHandle; // ivar: _MXCoreXcodeSupportLogHandle
@property (retain, nonatomic) NSMutableDictionary *clientDictionary; // ivar: _clientDictionary
@property (retain, nonatomic) NSMutableDictionary *clientTeamIDs; // ivar: _clientTeamIDs
@property (retain, nonatomic) NSString *currentDataActivityDate; // ivar: _currentDataActivityDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue; // ivar: _iVarQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (readonly, retain) NSMutableSet *services; // ivar: _services
@property (retain) MXSource *source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)sharedCore;
-(BOOL)checkSourceDataAvailable;
-(BOOL)createDirectoryAtPath:(id)arg0 forClient:(id)arg1 withError:(*id)arg2 ;
-(BOOL)deliverMetricPayloadsForClient:(id)arg0 atPath:(id)arg1 withError:(id)arg2 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)readClientAvailabilityPreference;
-(BOOL)shouldDeliverToClient:(id)arg0 ;
-(BOOL)writeMetricReport:(id)arg0 atAppContainerPath:(id)arg1 forClient:(id)arg2 withError:(*id)arg3 ;
-(id)applicationContainerPath;
-(id)applicationContainerPathForBundleID:(id)arg0 ;
-(id)bundleIDFromAuditToken:(struct ? )arg0 ;
-(id)bundleIDFromPid:(int)arg0 ;
-(id)bundleIDFromURL:(id)arg0 ;
-(id)diagnosticsForClient:(id)arg0 ;
-(id)getDailyActivityCriteria;
-(id)getDummyDiagnosticPayloadForClient:(id)arg0 dateString:(id)arg1 ;
-(id)getDummyPayloadForClient:(id)arg0 dateString:(id)arg1 ;
-(id)getMetricPayloadForClient:(id)arg0 ;
-(id)init;
-(id)metricsForClient:(id)arg0 ;
-(id)readClientDictionary;
-(id)teamIDFromAuditToken:(struct ? )arg0 ;
-(void)cleanServiceDiagnosticsDirectoriesForClient:(id)arg0 ;
-(void)cleanServicesDataDirectories;
-(void)createServices;
-(void)deliverDummyPayloadForXcodeClient:(id)arg0 ;
-(void)performDataActivity;
-(void)registerClient;
-(void)retrieveDiagnostics;
-(void)retrieveMetrics;
-(void)scheduleDataActivity;
-(void)stopServices;
-(void)updateClientAvailabilityWithBool:(BOOL)arg0 ;
-(void)updateClientDictionary;


@end


#endif