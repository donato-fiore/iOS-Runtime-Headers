// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMSYSTEMINFO_H
#define FMSYSTEMINFO_H


#import <Foundation/Foundation.h>


@interface FMSystemInfo : NSObject



+(id)sharedInstance;
-(BOOL)hasSEP;
-(BOOL)isDeviceSecured;
-(BOOL)isInternalBuild;
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
-(id)ownerAccount;
-(id)productName;
-(id)productType;
-(id)serialNumber;
-(id)wifiMacAddress;


@end


#endif