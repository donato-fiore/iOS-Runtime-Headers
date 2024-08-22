// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSNOTIFICATIONRECORDUPDATE_H
#define UNSNOTIFICATIONRECORDUPDATE_H


#import <Foundation/Foundation.h>

#import "UNSNotificationRecord.h"

@interface UNSNotificationRecordUpdate : NSObject

@property (readonly, nonatomic) UNSNotificationRecord *notificationRecord; // ivar: _notificationRecord


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithNotificationRecord:(id)arg0 ;


@end


#endif