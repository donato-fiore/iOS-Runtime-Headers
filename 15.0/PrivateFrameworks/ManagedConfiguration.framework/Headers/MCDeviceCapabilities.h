// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDEVICECAPABILITIES_H
#define MCDEVICECAPABILITIES_H


#import <Foundation/Foundation.h>


@interface MCDeviceCapabilities : NSObject

@property (readonly, nonatomic) BOOL supportsBlockLevelEncryption; // ivar: _supportsBlockLevelEncryption
@property (readonly, nonatomic) BOOL supportsFileLevelEncryption; // ivar: _supportsFileLevelEncryption


+(id)currentDevice;
-(BOOL)_mediaDiskIsEncrypted;
-(BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg0 localizedIncompatibilityMessage:(id)arg1 outError:(*id)arg2 ;
-(id)init;


@end


#endif