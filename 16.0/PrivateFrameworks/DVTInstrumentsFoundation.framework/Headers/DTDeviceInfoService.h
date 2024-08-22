// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTDEVICEINFOSERVICE_H
#define DTDEVICEINFOSERVICE_H

@class DTXService, NSMutableDictionary, NSString;
@protocol DTDeviceInfoServiceAuthorizedAPI, OS_dispatch_queue;


#import "DTDSCSymbolicatorCache.h"

@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI>

 {
    NSMutableDictionary *_peerTrackingSelectorsByPid;
    NSObject<OS_dispatch_queue> *_trackingSymbolicatorQueue;
    TFPPidWatcher _dtsecurityPidWatcher;
    BOOL _expiredPidTrackingEnabled;
    DTDSCSymbolicatorCache *_sharedCacheSymbolicators;
    *kpep_db _kpepDB;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isApplication:(id)arg0 ;
+(void)registerCapabilities:(id)arg0 ;
-(id)_configurationProperties;
-(id)_getIOMFBProperties;
-(id)_lookupInt32Sysctl:(char *)arg0 ;
-(id)_lookupInt64Sysctl:(char *)arg0 ;
-(id)createSignatureFromLibraryUUID:(id)arg0 sharedCacheUUID:(id)arg1 andPath:(id)arg2 ;
-(id)deepSymbolOwnerSignatureForPid:(id)arg0 uuid:(id)arg1 ;
-(id)directoryListingForPath:(id)arg0 ;
-(id)execnameForPid:(id)arg0 ;
-(id)hardwareInformation;
-(id)iconDescriptionFileForAppPath:(id)arg0 ;
-(id)iconDescriptionForIconPath:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(id)isRunningPid:(id)arg0 ;
-(id)kpepDatabase;
-(id)lookupSysctl:(char *)arg0 ;
-(id)machKernelName;
-(id)machTimeInfo;
-(id)nameForGID:(id)arg0 ;
-(id)nameForUID:(id)arg0 ;
-(id)networkInformation;
-(id)productVersion;
-(id)runningProcesses;
-(id)symbolicatorSignatureForPid:(id)arg0 trackingSelector:(id)arg1 ;
-(id)symbolicatorSignaturesForExpiredPids;
-(id)sysmonCoalitionAttributes;
-(id)sysmonProcessAttributes;
-(id)sysmonSystemAttributes;
-(id)traceCodesFile;
-(id)uniqueID;
-(int)hwCPU64BitCapable;
-(int)hwCPUsubtype;
-(int)hwCPUtype;
-(int)numberOfCpus;
-(int)numberOfPhysicalCpus;
-(void)enableExpiredPidTracking:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)unregisterSignatureTrackingForPid:(id)arg0 ;


@end


#endif