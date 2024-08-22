// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPOSTPERSONALDOMAINACTIVITYNOTIFICATION_H
#define SAPOSTPERSONALDOMAINACTIVITYNOTIFICATION_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAPostPersonalDomainActivityNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;
@property (copy, nonatomic) NSString *notificationBody;
@property (copy, nonatomic) NSString *originatingDeviceName;


-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif