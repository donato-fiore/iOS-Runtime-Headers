// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREDEVICEINTERNAL_H
#define AVCAPTUREDEVICEINTERNAL_H


#import <Foundation/Foundation.h>

#import "AVCaptureDeviceInput.h"

@interface AVCaptureDeviceInternal : NSObject {
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    BOOL usingDevice;
    AVCaptureDeviceInput *activeInput;
}






@end


#endif