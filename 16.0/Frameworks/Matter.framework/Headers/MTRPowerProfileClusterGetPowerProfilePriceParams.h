// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERGETPOWERPROFILEPRICEPARAMS_H
#define MTRPOWERPROFILECLUSTERGETPOWERPROFILEPRICEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterGetPowerProfilePriceParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif