// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCNOTIFICATIONSCONFIGURATION_H
#define FCNOTIFICATIONSCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FCNotificationsConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs; // ivar: _preSubscribedNotificationsChannelIDs
@property (readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs; // ivar: _recommendedNotificationChannelIDs


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPresubscribedChannelIDs:(id)arg0 recommendedNotificationChannelIDs:(id)arg1 ;


@end


#endif