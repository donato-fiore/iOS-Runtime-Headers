// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVEXTERNALDEVICEHIDINTERNAL_H
#define AVEXTERNALDEVICEHIDINTERNAL_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVExternalDeviceHIDInternal : NSObject {
    AVWeakReference *weakReferenceToExternalDevice;
    NSString *UUID;
    NSString *screenID;
    NSNumber *inputMode;
}






@end


#endif