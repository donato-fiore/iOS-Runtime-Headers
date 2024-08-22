// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SANOTIFICATIONONDEVICEOBJECT_H
#define SANOTIFICATIONONDEVICEOBJECT_H

@class NSString, NSData;


#import "SANotificationObject.h"

@interface SANotificationOnDeviceObject : SANotificationObject

@property (copy, nonatomic) NSString *announcementType;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSData *request;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif