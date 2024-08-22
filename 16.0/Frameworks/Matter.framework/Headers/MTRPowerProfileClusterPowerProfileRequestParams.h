// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERPOWERPROFILEREQUESTPARAMS_H
#define MTRPOWERPROFILECLUSTERPOWERPROFILEREQUESTPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterPowerProfileRequestParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif