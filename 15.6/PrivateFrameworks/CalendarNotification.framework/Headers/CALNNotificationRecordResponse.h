// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONRECORDRESPONSE_H
#define CALNNOTIFICATIONRECORDRESPONSE_H

@class NSString, BSServiceConnectionEndpoint;

#import <Foundation/Foundation.h>

#import "CALNNotificationRecord.h"

@interface CALNNotificationRecordResponse : NSObject

@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) CALNNotificationRecord *notificationRecord; // ivar: _notificationRecord
@property (readonly, copy, nonatomic) NSString *originIdentifier; // ivar: _originIdentifier
@property (readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint; // ivar: _targetConnectionEndpoint


+(id)responseWithNotificationRecord:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 ;
-(id)description;
-(id)initWithNotificationRecord:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 ;


@end


#endif