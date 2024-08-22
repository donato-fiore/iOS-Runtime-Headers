// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNUNNOTIFICATIONRESPONSEMAPPER_H
#define CALNUNNOTIFICATIONRESPONSEMAPPER_H


#import <Foundation/Foundation.h>

#import "CALNUNNotificationMapper.h"

@interface CALNUNNotificationResponseMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationMapper *notificationMapper; // ivar: _notificationMapper


+(id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)arg0 ;
-(id)calnNotificationResponseFromUNNotificationResponse:(id)arg0 ;
-(id)initWithNotificationMapper:(id)arg0 ;


@end


#endif