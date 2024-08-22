// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDCOLLECTIONNOTIFICATION_H
#define DEDCOLLECTIONNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface DEDCollectionNotification : NSObject



+(BOOL)shouldFireNotificationForTransport:(NSInteger)arg0 ;
+(id)log;
+(void)beginListeningForNotification;
+(void)configureEventStream;
+(void)fireNotificationWithFinishingMove:(NSInteger)arg0 ;
+(void)handleDistributedNotification:(id)arg0 ;
+(void)postNotificationToNotificationCenterForFinishingMove:(NSInteger)arg0 ;


@end


#endif