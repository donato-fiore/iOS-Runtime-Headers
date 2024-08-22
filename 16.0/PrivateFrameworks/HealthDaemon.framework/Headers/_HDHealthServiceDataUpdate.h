// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDHEALTHSERVICEDATAUPDATE_H
#define _HDHEALTHSERVICEDATAUPDATE_H

@class HKDevice, NSError;

#import <Foundation/Foundation.h>

#import "HDHealthServiceCharacteristic.h"

@interface _HDHealthServiceDataUpdate : NSObject

@property (readonly, nonatomic) HDHealthServiceCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, nonatomic) HKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger sessionIdentifier; // ivar: _sessionIdentifier


-(id)initWithSessionIdentifier:(NSUInteger)arg0 characteristic:(id)arg1 device:(id)arg2 error:(id)arg3 ;


@end


#endif