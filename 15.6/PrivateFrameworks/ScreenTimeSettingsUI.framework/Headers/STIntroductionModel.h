// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STINTRODUCTIONMODEL_H
#define STINTRODUCTIONMODEL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "STAllowance.h"
#import "STDeviceBedtime.h"

@interface STIntroductionModel : NSObject

@property (retain) STAllowance *allowance; // ivar: _allowance
@property (retain) STDeviceBedtime *bedtime; // ivar: _bedtime
@property BOOL deviceForChild; // ivar: _deviceForChild
@property (retain) NSString *parentalControlsPasscode; // ivar: _parentalControlsPasscode
@property (copy) NSString *recoveryAltDSID; // ivar: _recoveryAltDSID




@end


#endif