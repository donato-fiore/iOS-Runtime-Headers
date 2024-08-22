// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSNOTIFICATIONSETTINGS_H
#define TSNOTIFICATIONSETTINGS_H


#import <Foundation/Foundation.h>


@interface TSNotificationSettings : NSObject

@property (nonatomic, readonly) NSInteger authorizationStatus; // ivar: authorizationStatus
@property (nonatomic, readonly) BOOL badge; // ivar: badge
@property (nonatomic, readonly) int scheduledDeliverySetting; // ivar: scheduledDeliverySetting
@property (nonatomic, readonly) BOOL showBanners; // ivar: showBanners
@property (nonatomic, readonly) BOOL showInNotificationCenter; // ivar: showInNotificationCenter
@property (nonatomic, readonly) BOOL showOnLockScreen; // ivar: showOnLockScreen
@property (nonatomic, readonly) BOOL sound; // ivar: sound


-(id)init;
-(id)initWithSystemSettings:(id)arg0 ;


@end


#endif