// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONTELEMETRYQUERYRESULT_H
#define ATXNOTIFICATIONTELEMETRYQUERYRESULT_H

@class NSString, NSUUID, NSDate;

#import <Foundation/Foundation.h>

#import "ATXUserNotificationResolution.h"

@interface ATXNotificationTelemetryQueryResult : NSObject

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSInteger deliveryMethod; // ivar: _deliveryMethod
@property (retain, nonatomic) NSString *destinationReason; // ivar: _destinationReason
@property (retain, nonatomic) NSString *finalDestination; // ivar: _finalDestination
@property (nonatomic) BOOL isMessage; // ivar: _isMessage
@property (retain, nonatomic) NSUUID *notificationUUID; // ivar: _notificationUUID
@property (retain, nonatomic) NSString *originalDestination; // ivar: _originalDestination
@property (retain, nonatomic) NSString *receiveModeIdentifier; // ivar: _receiveModeIdentifier
@property (retain, nonatomic) NSDate *receiveTimestamp; // ivar: _receiveTimestamp
@property (retain, nonatomic) ATXUserNotificationResolution *resolution; // ivar: _resolution
@property (nonatomic) NSInteger urgency; // ivar: _urgency




@end


#endif