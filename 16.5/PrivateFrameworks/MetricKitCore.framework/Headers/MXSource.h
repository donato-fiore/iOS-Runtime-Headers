// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSOURCE_H
#define MXSOURCE_H

@class NSString, NSFileManager, NSMutableSet, NSXPCListener;
@protocol MXSourceXPCServer, NSXPCListenerDelegate, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MXSource : NSObject <MXSourceXPCServer, NSXPCListenerDelegate>



@property (retain) NSObject<OS_os_log> *MXSourceLogHandle; // ivar: _MXSourceLogHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue; // ivar: _iVarQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (readonly, retain) NSMutableSet *services; // ivar: _services
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)sharedSource;
+(void)sanitizeDeviceMetadataForDiagnostic:(id)arg0 ;
-(BOOL)createDirectoryAtPath:(id)arg0 forClient:(id)arg1 withError:(*id)arg2 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)validateHangTracerData:(id)arg0 ;
-(BOOL)validatePayload:(id)arg0 ;
-(BOOL)validatePowerlogData:(id)arg0 ;
-(BOOL)validateReportCrashData:(id)arg0 ;
-(BOOL)validateSpinTracerData:(id)arg0 ;
-(BOOL)writeDiagnosticReport:(id)arg0 atAppContainerPath:(id)arg1 forClient:(id)arg2 withError:(*id)arg3 ;
-(id)applicationContainerPathForBundleID:(id)arg0 ;
-(id)bundleIDFromPid:(int)arg0 ;
-(id)bundleIDFromURL:(id)arg0 ;
-(id)getDiagnosticPayloadForClient:(id)arg0 dateString:(id)arg1 ;
-(id)init;
-(id)setupSourceDirectoryForSource:(NSInteger)arg0 andClient:(id)arg1 ;
-(void)cleanDataDirectoryForSource:(NSInteger)arg0 ;
-(void)cleanDiagnosticsDirectoryForSource:(NSInteger)arg0 andClient:(id)arg1 ;
-(void)createServicesForClient:(id)arg0 ;
-(void)deliverDummyPayloadForClient:(id)arg0 ;
-(void)removeDeliveredDiagnosticsForSourceID:(NSInteger)arg0 dateString:(id)arg1 ;
-(void)removeFilesForSourceID:(NSInteger)arg0 ;
-(void)removeFilesForSourceID:(NSInteger)arg0 andClient:(id)arg1 ;
-(void)stopServices;
-(void)writeDiagnosticDataWithPayload:(id)arg0 ;
-(void)writeMetricDataWithPayload:(id)arg0 ;


@end


#endif