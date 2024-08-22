// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAALARMTASK_H
#define SAALARMTASK_H

@class NSUUID, NSDate;
@protocol SATimeClientProtocol;

#import <Foundation/Foundation.h>


@interface SAAlarmTask : NSObject

@property (copy, nonatomic) NSUUID *alarmUUID; // ivar: _alarmUUID
@property (weak, nonatomic) NSObject<SATimeClientProtocol> *client; // ivar: _client
@property (copy, nonatomic) NSDate *fireDate; // ivar: _fireDate




@end


#endif