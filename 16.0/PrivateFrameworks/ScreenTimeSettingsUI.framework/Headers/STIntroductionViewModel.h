// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STINTRODUCTIONVIEWMODEL_H
#define STINTRODUCTIONVIEWMODEL_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "STAllowance.h"
#import "STDeviceBedtime.h"

@interface STIntroductionViewModel : NSObject

@property (retain) STAllowance *allowance; // ivar: _allowance
@property (retain) STDeviceBedtime *bedtime; // ivar: _bedtime
@property BOOL communicationSafetyEnabled; // ivar: _communicationSafetyEnabled
@property BOOL deviceForChild; // ivar: _deviceForChild
@property (retain) NSString *parentalControlsPasscode; // ivar: _parentalControlsPasscode
@property (copy) NSString *recoveryAltDSID; // ivar: _recoveryAltDSID
@property (copy) NSDictionary *restrictions; // ivar: _restrictions




@end


#endif