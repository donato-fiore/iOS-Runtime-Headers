// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPOSTUPDATEPERSONALREQUESTSETTINGSNOTIFICATION_H
#define SAPOSTUPDATEPERSONALREQUESTSETTINGSNOTIFICATION_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAPostUpdatePersonalRequestSettingsNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;


-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif