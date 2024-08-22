// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSDEVICEMESSENGERFILTER_H
#define AMSDEVICEMESSENGERFILTER_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface AMSDeviceMessengerFilter : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (nonatomic) NSInteger messageType; // ivar: _messageType


-(BOOL)matchesMessage:(id)arg0 ;


@end


#endif