// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMSYSTEMINFO_IOS_H
#define FMSYSTEMINFO_IOS_H



#import "FMSystemInfo.h"

@interface FMSystemInfo_ios : FMSystemInfo



-(BOOL)_boolDeviceInfoForKey:(struct __CFString *)arg0 ;
-(BOOL)hasSEP;
-(BOOL)isDeviceSecured;
-(id)_deviceInfoForKey:(struct __CFString *)arg0 ;
-(id)_deviceInfoNumberForKey:(struct __CFString *)arg0 ;
-(id)btMacAddress;
-(id)chipId;
-(id)deviceClass;
-(id)deviceModelName;
-(id)deviceName;
-(id)deviceUDID;
-(id)ecid;
-(id)imei;
-(id)meid;
-(id)osBuildVersion;
-(id)osVersion;
-(id)productName;
-(id)productType;
-(id)serialNumber;
-(id)wifiMacAddress;


@end


#endif