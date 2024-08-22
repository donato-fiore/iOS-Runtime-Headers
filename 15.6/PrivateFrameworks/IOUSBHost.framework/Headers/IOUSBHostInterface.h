// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOUSBHOSTINTERFACE_H
#define IOUSBHOSTINTERFACE_H



#import "IOUSBHostObject.h"

@interface IOUSBHostInterface : IOUSBHostObject

@property (readonly) *IOUSBConfigurationDescriptor configurationDescriptor;
@property (readonly) CGFloat idleTimeout;
@property (readonly) *IOUSBInterfaceDescriptor interfaceDescriptor;


+(struct __CFDictionary *)createMatchingDictionaryWithVendorID:(id)arg0 productID:(id)arg1 bcdDevice:(id)arg2 interfaceNumber:(id)arg3 configurationValue:(id)arg4 interfaceClass:(id)arg5 interfaceSubclass:(id)arg6 interfaceProtocol:(id)arg7 speed:(id)arg8 productIDArray:(id)arg9 ;
-(BOOL)selectAlternateSetting:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)copyPipeWithAddress:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif