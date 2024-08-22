// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRFIRMWAREUPDATESTATUS_H
#define HMMTRFIRMWAREUPDATESTATUS_H

@class NSNumber, HAPMatterFirmwareUpdateStatus;

#import <Foundation/Foundation.h>

#import "HMMTRAccessoryServer.h"

@interface HMMTRFirmwareUpdateStatus : NSObject

@property (retain, nonatomic) HMMTRAccessoryServer *accessoryServer; // ivar: _accessoryServer
@property (retain, nonatomic) NSNumber *downloadedFirmwareVersionNumber; // ivar: _downloadedFirmwareVersionNumber
@property (retain, nonatomic) HAPMatterFirmwareUpdateStatus *localFirmwareUpdateStatus; // ivar: _localFirmwareUpdateStatus


+(id)logCategory;
-(id)initWithFirmwareUpdateStatus:(id)arg0 accessoryServer:(id)arg1 ;
-(id)readForHAPFirmwareUpdateReadinessCharacteristic:(id)arg0 ;
-(id)readForHAPFirmwareUpdateStatusCharacteristic:(id)arg0 ;
-(id)readForMatterFirmwareUpdateStatusCharacteristic:(id)arg0 ;
-(void)checkCurrentFirmwareVersionNumber:(id)arg0 ;
-(void)updateDownloadedFirmwareVersionNumber:(id)arg0 ;
-(void)updateFirmwareUpdateStatus:(NSInteger)arg0 ;


@end


#endif