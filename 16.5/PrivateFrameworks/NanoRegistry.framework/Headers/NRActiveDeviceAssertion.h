// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRACTIVEDEVICEASSERTION_H
#define NRACTIVEDEVICEASSERTION_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NRDevice.h"

@interface NRActiveDeviceAssertion : NSObject {
    NRDevice *_device;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, retain, nonatomic) NRDevice *device;
@property (readonly, nonatomic) BOOL isActive;


-(id)description;
-(void)dealloc;
-(void)invalidate;


@end


#endif