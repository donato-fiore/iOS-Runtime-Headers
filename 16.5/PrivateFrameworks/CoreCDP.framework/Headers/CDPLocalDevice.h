// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPLOCALDEVICE_H
#define CDPLOCALDEVICE_H

@protocol CDPLocalDeviceSecretProxy;

#import <Foundation/Foundation.h>


@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> *_localSecretProxy;
}




+(BOOL)hasLocalSecret;
+(id)sharedInstance;
-(BOOL)_currentProcessCreatesDaemonTypeProxy;
-(BOOL)_isHomePod;
-(BOOL)currentProcessHasEntitlement:(id)arg0 ;
-(BOOL)hasLocalSecret;
-(BOOL)supportsSecureBackupRecovery;
-(id)deviceClass;
-(id)deviceName;
-(id)hardwareModel;
-(id)init;
-(id)marketingModel;
-(id)modelVersion;
-(id)osVersion;
-(id)serialNumber;


@end


#endif