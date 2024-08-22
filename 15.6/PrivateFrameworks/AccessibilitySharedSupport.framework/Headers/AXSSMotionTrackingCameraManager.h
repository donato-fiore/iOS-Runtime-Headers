// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSSMOTIONTRACKINGCAMERAMANAGER_H
#define AXSSMOTIONTRACKINGCAMERAMANAGER_H

@class NSMutableArray, AVCaptureDeviceDiscoverySession, NSArray, AVCaptureDevice;
@protocol AXSSMotionTrackingCameraManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingCameraManager : NSObject

@property (retain, nonatomic) NSMutableArray *_allCaptureDevices; // ivar: __allCaptureDevices
@property (retain, nonatomic) AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession; // ivar: __captureDeviceDiscoverySession
@property (retain, nonatomic) NSMutableArray *_compatibleCaptureDevices; // ivar: __compatibleCaptureDevices
@property (nonatomic) BOOL _monitoring; // ivar: __monitoring
@property (readonly, copy, nonatomic) NSArray *allCaptureDevices;
@property (readonly, copy, nonatomic) NSArray *compatibleCaptureDevices;
@property (readonly, nonatomic) AVCaptureDevice *defaultCaptureDevice;
@property (weak, nonatomic) NSObject<AXSSMotionTrackingCameraManagerDelegate> *delegate; // ivar: _delegate


+(id)_sortedCaptureDevicesFromDevices:(id)arg0 ;
-(id)init;
-(void)_allCaptureDevicesChanged:(id)arg0 ;
-(void)_captureDeviceConnected:(id)arg0 ;
-(void)_captureDeviceDisconnected:(id)arg0 ;
-(void)_captureDeviceUpdated;
-(void)_resetDiscoverySession;
-(void)_startDiscoverySession;
-(void)_stopDiscoverySession;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif