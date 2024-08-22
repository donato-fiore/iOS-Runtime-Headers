// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTEROPERATINGEVENTNOTIFICATIONPARAMS_H
#define CHIPDOORLOCKCLUSTEROPERATINGEVENTNOTIFICATIONPARAMS_H

@class NSString, NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterOperatingEventNotificationParams : NSObject

@property (retain, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) NSNumber *localTime; // ivar: _localTime
@property (retain, nonatomic) NSNumber *operationEventCode; // ivar: _operationEventCode
@property (retain, nonatomic) NSNumber *operationEventSource; // ivar: _operationEventSource
@property (retain, nonatomic) NSData *pin; // ivar: _pin
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId


-(id)init;


@end


#endif