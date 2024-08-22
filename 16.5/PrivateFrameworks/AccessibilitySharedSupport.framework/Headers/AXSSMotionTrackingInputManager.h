// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSMOTIONTRACKINGINPUTMANAGER_H
#define AXSSMOTIONTRACKINGINPUTMANAGER_H

@class NSMutableArray, NSArray, NSString;
@protocol AXSSMotionTrackingCameraManagerDelegate, AXSSMotionTrackingVideoFileInputManagerDelegate, AXSSMotionTrackingHIDManagerDelegate, AXSSMotionTrackingInputManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXSSMotionTrackingCameraManager.h"
#import "AXSSMotionTrackingHIDManager.h"
#import "AXSSMotionTrackingVideoFileInputManager.h"
#import "AXSSMotionTrackingInputConfiguration.h"
#import "AXSSMotionTrackingInput.h"

@interface AXSSMotionTrackingInputManager : NSObject <AXSSMotionTrackingCameraManagerDelegate, AXSSMotionTrackingVideoFileInputManagerDelegate, AXSSMotionTrackingHIDManagerDelegate>



@property (retain, nonatomic) NSMutableArray *_allCameraInputs; // ivar: __allCameraInputs
@property (retain, nonatomic) NSMutableArray *_allInputs; // ivar: __allInputs
@property (retain, nonatomic) AXSSMotionTrackingCameraManager *_cameraManager; // ivar: __cameraManager
@property (retain, nonatomic) NSMutableArray *_compatibleCameraInputs; // ivar: __compatibleCameraInputs
@property (retain, nonatomic) NSMutableArray *_compatibleInputs; // ivar: __compatibleInputs
@property (retain, nonatomic) NSMutableArray *_hidInputs; // ivar: __hidInputs
@property (retain, nonatomic) AXSSMotionTrackingHIDManager *_hidManager; // ivar: __hidManager
@property (nonatomic) BOOL _monitoring; // ivar: __monitoring
@property (readonly, nonatomic) BOOL _supportsCameraInputs;
@property (readonly, nonatomic) BOOL _supportsHIDInputs;
@property (retain, nonatomic) AXSSMotionTrackingVideoFileInputManager *_videoFileInputManager; // ivar: __videoFileInputManager
@property (retain, nonatomic) NSMutableArray *_videoFileInputs; // ivar: __videoFileInputs
@property (readonly, copy, nonatomic) NSArray *allInputs;
@property (readonly, copy, nonatomic) NSArray *compatibleInputs;
@property (copy, nonatomic) AXSSMotionTrackingInputConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSSMotionTrackingInputManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXSSMotionTrackingInput *inputToUse; // ivar: _inputToUse
@property (readonly) Class superclass;


-(BOOL)_supportsMotionTrackingType:(NSUInteger)arg0 ;
-(id)_compatibleCameraInputMatchingCaptureDeviceUniqueID:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_inputUpdated;
-(void)_updateMonitoring;
-(void)motionTrackingCameraManager:(id)arg0 updatedCompatibleCaptureDevices:(id)arg1 ;
-(void)motionTrackingHIDManager:(id)arg0 updatedDevices:(id)arg1 ;
-(void)motionTrackingVideoFileInputManager:(id)arg0 updatedVideoFileInputNames:(id)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif