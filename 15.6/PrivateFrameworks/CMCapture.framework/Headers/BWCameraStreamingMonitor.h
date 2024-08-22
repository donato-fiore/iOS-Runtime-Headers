// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWCAMERASTREAMINGMONITOR_H
#define BWCAMERASTREAMINGMONITOR_H

@class STMediaStatusDomainPublisher, NSMutableDictionary, BKSApplicationStateMonitor, PAAccessLogger;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWCameraStreamingMonitor : NSObject {
    unsigned int _cameraTypeBitMask;
    STMediaStatusDomainPublisher *_mediaStatusDomainPublisher;
    NSObject<OS_dispatch_queue> *_cameraStreamingMonitorQueue;
    BOOL _msnReportingEnabled;
    BOOL _systemStatusReportingEnabled;
    NSMutableDictionary *_clientInfoByPID;
    NSMutableDictionary *_managedClientInfoByBundleID;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    PAAccessLogger *_privacyAccountingAccessLogger;
}




+(id)sharedCameraStreamingMonitor;
+(void)initialize;
-(id)initWithMediaStatusDomainPublisher:(id)arg0 msnReportingEnabled:(BOOL)arg1 systemStatusReportingEnabled:(BOOL)arg2 privacyAccountingAccessLogger:(id)arg3 ;
-(void)dealloc;
-(void)setCameraAccess:(BOOL)arg0 clientAuditToken:(struct ? )arg1 tccIdentity:(id)arg2 completionHandler:(id)arg3 ;
-(void)setStreaming:(BOOL)arg0 portType:(id)arg1 clientAuditToken:(struct ? )arg2 tccIdentity:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif