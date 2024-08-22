// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRACTIVEDEVICEASSERTION_H
#define NRACTIVEDEVICEASSERTION_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NRDevice.h"

@interface NRActiveDeviceAssertion : NSObject {
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NRDevice *_device;
}


@property (readonly, retain, nonatomic) NRDevice *device;
@property (readonly, nonatomic) BOOL isActive;


-(id)description;
-(void)dealloc;
-(void)invalidate;


@end


#endif