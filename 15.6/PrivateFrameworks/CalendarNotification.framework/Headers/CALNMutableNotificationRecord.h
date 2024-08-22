// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNMUTABLENOTIFICATIONRECORD_H
#define CALNMUTABLENOTIFICATIONRECORD_H

@class NSDate, NSString;
@protocol NSCopying;


#import "CALNNotificationRecord.h"
#import "CALNNotificationContent.h"

@interface CALNMutableNotificationRecord : CALNNotificationRecord <NSCopying>



@property (copy, nonatomic) CALNNotificationContent *content;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL shouldPlaySound;
@property (nonatomic) BOOL shouldPresentAlert;
@property (copy, nonatomic) NSString *sourceClientIdentifier;
@property (copy, nonatomic) NSString *sourceIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif