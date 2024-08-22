// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPENDINGCHARACTERISTIC_H
#define HMDPENDINGCHARACTERISTIC_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDCharacteristicWriteRequest.h"

@interface HMDPendingCharacteristic : NSObject

@property (readonly) id *handler; // ivar: _handler
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) HMDCharacteristicWriteRequest *writeRequest; // ivar: _writeRequest


-(id)initWithCharacteristic:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;


@end


#endif