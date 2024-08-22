// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATEPOLICYCRITERIA_H
#define HMDACCESSORYFIRMWAREUPDATEPOLICYCRITERIA_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HMDAccessoryFirmwareUpdateTimeWindow.h"

@interface HMDAccessoryFirmwareUpdatePolicyCriteria : NSObject

@property BOOL anyUserAtHome; // ivar: _anyUserAtHome
@property (retain) NSArray *characteristicConfigurations; // ivar: _characteristicConfigurations
@property BOOL checkForScheduledAutomation; // ivar: _checkForScheduledAutomation
@property BOOL noUserAtHome; // ivar: _noUserAtHome
@property (retain) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow; // ivar: _updateTimeWindow


-(id)init;


@end


#endif