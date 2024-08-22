// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMWRITEPUSHNOTIFICATIONSETTINGSSERVICE_H
#define IMWRITEPUSHNOTIFICATIONSETTINGSSERVICE_H

@class NSData;


#import "IMPushNotificationSettingsService.h"

@interface IMWritePushNotificationSettingsService : IMPushNotificationSettingsService

@property (retain, nonatomic) NSData *data; // ivar: _data


-(id)initWithData:(id)arg0 ;
-(id)urlRequest;


@end


#endif