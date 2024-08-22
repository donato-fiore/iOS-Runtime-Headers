// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKIANNOUNCENOTIFICATIONDIRECTINVOCATIONPAYLOAD_H
#define SKIANNOUNCENOTIFICATIONDIRECTINVOCATIONPAYLOAD_H

@class NSString, UNNotification;

#import <Foundation/Foundation.h>


@interface SKIAnnounceNotificationDirectInvocationPayload : NSObject

@property (nonatomic) NSInteger announcementPlatform; // ivar: _announcementPlatform
@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (copy, nonatomic) NSString *appBundleIdOfLastAnnouncement; // ivar: _appBundleIdOfLastAnnouncement
@property (nonatomic) BOOL isSameTypeAsLastAnnouncement; // ivar: _isSameTypeAsLastAnnouncement
@property (copy, nonatomic) UNNotification *notification; // ivar: _notification
@property (nonatomic) NSUInteger synchronousBurstIndex; // ivar: _synchronousBurstIndex
@property (nonatomic) CGFloat timeSinceLastAnnouncement; // ivar: _timeSinceLastAnnouncement


-(id)initWithNotification:(id)arg0 appBundleId:(id)arg1 appBundleIdOfLastAnnouncement:(id)arg2 synchronousBurstIndex:(NSUInteger)arg3 isSameTypeAsLastAnnouncement:(BOOL)arg4 timeSinceLastAnnouncement:(CGFloat)arg5 announcementPlatform:(NSInteger)arg6 ;


@end


#endif