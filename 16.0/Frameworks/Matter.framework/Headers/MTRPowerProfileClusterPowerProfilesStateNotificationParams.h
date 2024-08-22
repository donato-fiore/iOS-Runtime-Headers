// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERPOWERPROFILESSTATENOTIFICATIONPARAMS_H
#define MTRPOWERPROFILECLUSTERPOWERPROFILESSTATENOTIFICATIONPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterPowerProfilesStateNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileCount; // ivar: _powerProfileCount
@property (retain, nonatomic) NSArray *powerProfileRecords; // ivar: _powerProfileRecords
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif