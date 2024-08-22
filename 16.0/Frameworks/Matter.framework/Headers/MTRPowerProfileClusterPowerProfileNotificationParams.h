// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERPOWERPROFILENOTIFICATIONPARAMS_H
#define MTRPOWERPROFILECLUSTERPOWERPROFILENOTIFICATIONPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterPowerProfileNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *numOfTransferredPhases; // ivar: _numOfTransferredPhases
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *totalProfileNum; // ivar: _totalProfileNum
@property (retain, nonatomic) NSArray *transferredPhases; // ivar: _transferredPhases


-(id)description;
-(id)init;


@end


#endif