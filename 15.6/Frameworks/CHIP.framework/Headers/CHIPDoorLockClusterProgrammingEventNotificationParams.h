// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERPROGRAMMINGEVENTNOTIFICATIONPARAMS_H
#define CHIPDOORLOCKCLUSTERPROGRAMMINGEVENTNOTIFICATIONPARAMS_H

@class NSString, NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterProgrammingEventNotificationParams : NSObject

@property (retain, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) NSNumber *localTime; // ivar: _localTime
@property (retain, nonatomic) NSData *pin; // ivar: _pin
@property (retain, nonatomic) NSNumber *programEventCode; // ivar: _programEventCode
@property (retain, nonatomic) NSNumber *programEventSource; // ivar: _programEventSource
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId
@property (retain, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (retain, nonatomic) NSNumber *userType; // ivar: _userType


-(id)init;


@end


#endif