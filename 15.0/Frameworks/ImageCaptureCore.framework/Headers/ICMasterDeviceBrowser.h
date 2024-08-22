// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMASTERDEVICEBROWSER_H
#define ICMASTERDEVICEBROWSER_H

@class NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PTPCameraDeviceManager.h"
#import "MSCameraDeviceManager.h"
#import "RSCameraDeviceManager.h"

@interface ICMasterDeviceBrowser : NSObject {
    NSMutableArray *_suspendedBrowsers;
    NSInteger _numberOfBrowsingBrowsers;
    NSObject<OS_dispatch_source> *_suspensionTimer;
    NSObject<OS_dispatch_queue> *_suspensionTimerQueue;
    PTPCameraDeviceManager *_ptpDevManager;
    MSCameraDeviceManager *_msDevManager;
    RSCameraDeviceManager *_rsDevManager;
}


@property (readonly) NSMutableArray *browsers; // ivar: _browsers
@property (readonly) NSMutableArray *devices; // ivar: _devices


+(BOOL)exists;
+(id)defaultBrowser;
-(BOOL)startMSCameraBrowser;
-(BOOL)startPTPCameraBrowser;
-(BOOL)startRSCameraBrowser;
-(id)deviceWithDelegate:(id)arg0 ;
-(id)init;
-(int)start:(id)arg0 ;
-(void)addBrowser:(id)arg0 ;
-(void)dealloc;
-(void)handleCommandCompletionNotification:(id)arg0 ;
-(void)handleImageCaptureEventNotification:(id)arg0 ;
-(void)notifySuspension:(NSUInteger)arg0 ;
-(void)removeBrowser:(id)arg0 ;
-(void)runSuspensionTimer:(BOOL)arg0 ;
-(void)stop:(id)arg0 ;


@end


#endif