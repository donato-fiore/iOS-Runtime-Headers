// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPUSHREGISTRATION_H
#define MSPUSHREGISTRATION_H

@class NSString, NSArray;


#import "MSMailDefaultService.h"

@interface MSPushRegistration : MSMailDefaultService

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSArray *mailboxNames; // ivar: _mailboxNames
@property (copy, nonatomic) NSString *notificationNamePrefix; // ivar: _notificationNamePrefix


-(id)init;
-(void)registerForPush:(id)arg0 ;


@end


#endif