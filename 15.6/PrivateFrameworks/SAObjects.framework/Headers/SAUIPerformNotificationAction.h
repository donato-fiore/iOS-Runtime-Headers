// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIPERFORMNOTIFICATIONACTION_H
#define SAUIPERFORMNOTIFICATIONACTION_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAUIPerformNotificationAction : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *notificationIdentifier;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif