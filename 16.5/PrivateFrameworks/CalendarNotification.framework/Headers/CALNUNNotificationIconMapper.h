// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNUNNOTIFICATIONICONMAPPER_H
#define CALNUNNOTIFICATIONICONMAPPER_H


#import <Foundation/Foundation.h>

#import "CALNNotificationIconCache.h"

@interface CALNUNNotificationIconMapper : NSObject

@property (readonly, nonatomic) CALNNotificationIconCache *notificationIconCache; // ivar: _notificationIconCache


-(id)iconIdentifierFromUNNotificationIcon:(id)arg0 ;
-(id)initWithNotificationIconCache:(id)arg0 ;
-(id)unNotificationIconFromIconIdentifier:(id)arg0 ;


@end


#endif