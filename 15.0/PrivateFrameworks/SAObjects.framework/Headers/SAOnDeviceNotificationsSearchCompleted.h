// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAONDEVICENOTIFICATIONSSEARCHCOMPLETED_H
#define SAONDEVICENOTIFICATIONSSEARCHCOMPLETED_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAOnDeviceNotificationsSearchCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *notifications;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif