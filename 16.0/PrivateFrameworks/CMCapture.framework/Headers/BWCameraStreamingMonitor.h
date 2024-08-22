// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWCAMERASTREAMINGMONITOR_H
#define BWCAMERASTREAMINGMONITOR_H

@class STMediaStatusDomainPublisher, NSMutableDictionary, PAAccessLogger;
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
    PAAccessLogger *_privacyAccountingAccessLogger;
}




+(id)sharedCameraStreamingMonitor;
+(void)initialize;
-(id)initWithMediaStatusDomainPublisher:(id)arg0 msnReportingEnabled:(BOOL)arg1 systemStatusReportingEnabled:(BOOL)arg2 privacyAccountingAccessLogger:(id)arg3 ;
-(void)dealloc;
-(void)setCameraAccess:(BOOL)arg0 deviceType:(int)arg1 clientAuditToken:(struct ? )arg2 tccIdentity:(id)arg3 completionHandler:(id)arg4 ;
-(void)setStreaming:(BOOL)arg0 deviceType:(int)arg1 portType:(id)arg2 clientAuditToken:(struct ? )arg3 tccIdentity:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif