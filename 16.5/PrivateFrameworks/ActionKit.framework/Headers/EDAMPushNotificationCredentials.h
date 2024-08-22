// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMPUSHNOTIFICATIONCREDENTIALS_H
#define EDAMPUSHNOTIFICATIONCREDENTIALS_H

@class NSString, NSData;


#import "FATObject.h"

@interface EDAMPushNotificationCredentials : FATObject

@property (retain, nonatomic) NSString *gcmRegistrationId; // ivar: _gcmRegistrationId
@property (retain, nonatomic) NSData *iosDeviceToken; // ivar: _iosDeviceToken


+(id)structFields;
+(id)structName;


@end


#endif