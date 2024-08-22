// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVEXTERNALDEVICEINTERNAL_H
#define AVEXTERNALDEVICEINTERNAL_H

@class NSArray, NSData, NSMutableDictionary;
@protocol AVExternalDeviceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVDispatchOnce.h"

@interface AVExternalDeviceInternal : NSObject {
    *OpaqueFigEndpoint _figEndpoint;
    id<AVExternalDeviceDelegate> *_delegate;
    AVWeakReference *_weakReference;
    NSArray *_HIDs;
    AVDispatchOnce *_makeHIDsOnlyOnce;
    NSData *_MFiCertSerial;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_oemIcons;
    NSArray *_screenInfo;
    NSObject<OS_dispatch_queue> *_viewAreasQueue;
    NSMutableDictionary *_currentViewAreas;
    AVDispatchOnce *_makeIconsOnlyOnce;
}






@end


#endif