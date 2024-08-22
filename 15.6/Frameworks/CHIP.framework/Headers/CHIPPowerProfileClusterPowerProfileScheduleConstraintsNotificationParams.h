// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPOWERPROFILECLUSTERPOWERPROFILESCHEDULECONSTRAINTSNOTIFICATIONPARAMS_H
#define CHIPPOWERPROFILECLUSTERPOWERPROFILESCHEDULECONSTRAINTSNOTIFICATIONPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPPowerProfileClusterPowerProfileScheduleConstraintsNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *startAfter; // ivar: _startAfter
@property (retain, nonatomic) NSNumber *stopBefore; // ivar: _stopBefore


-(id)init;


@end


#endif