// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOUSBHOSTDEVICE_H
#define IOUSBHOSTDEVICE_H



#import "IOUSBHostObject.h"

@interface IOUSBHostDevice : IOUSBHostObject

@property (readonly) *IOUSBConfigurationDescriptor configurationDescriptor;


+(struct __CFDictionary *)createMatchingDictionaryWithVendorID:(id)arg0 productID:(id)arg1 bcdDevice:(id)arg2 deviceClass:(id)arg3 deviceSubclass:(id)arg4 deviceProtocol:(id)arg5 speed:(id)arg6 productIDArray:(id)arg7 ;
-(BOOL)allocateDownstreamBusCurrentWithWakeUnits:(*NSUInteger)arg0 sleepUnits:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)configureWithValue:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)configureWithValue:(NSUInteger)arg0 matchInterfaces:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)resetWithError:(*id)arg0 ;


@end


#endif