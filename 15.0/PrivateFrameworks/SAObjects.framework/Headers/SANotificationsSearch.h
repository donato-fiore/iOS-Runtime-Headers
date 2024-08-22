// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANOTIFICATIONSSEARCH_H
#define SANOTIFICATIONSSEARCH_H

@class NSString, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *afterNotificationId;
@property (copy, nonatomic) NSNumber *isOnDeviceSearch;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSString *sourceAppId;
@property (copy, nonatomic) NSNumber *supportsSpokenNotifications;


+(id)notificationsSearch;
+(id)notificationsSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif