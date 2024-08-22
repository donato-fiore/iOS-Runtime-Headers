// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWITCHUSERACCOUNTINTENT_H
#define SWITCHUSERACCOUNTINTENT_H

@class INIntent;


#import "TVRUserAccount.h"
#import "TVRDevice.h"

@interface SwitchUserAccountIntent : INIntent

@property (copy, nonatomic) TVRUserAccount *account;
@property (copy, nonatomic) TVRDevice *device;




@end


#endif