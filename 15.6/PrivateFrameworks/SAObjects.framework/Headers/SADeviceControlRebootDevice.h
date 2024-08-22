// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADEVICECONTROLREBOOTDEVICE_H
#define SADEVICECONTROLREBOOTDEVICE_H



#import "SABaseClientBoundCommand.h"

@interface SADeviceControlRebootDevice : SABaseClientBoundCommand



+(id)rebootDevice;
+(id)rebootDeviceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif