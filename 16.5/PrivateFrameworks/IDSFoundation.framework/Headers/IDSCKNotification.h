// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCKNOTIFICATION_H
#define IDSCKNOTIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSCKNotification : NSObject

@property (readonly, nonatomic) NSInteger notificationType; // ivar: _notificationType
@property (readonly, copy, nonatomic) NSString *subscriptionID; // ivar: _subscriptionID


+(Class)__class;
+(id)notificationFromRemoteNotificationDictionary:(id)arg0 ;


@end


#endif