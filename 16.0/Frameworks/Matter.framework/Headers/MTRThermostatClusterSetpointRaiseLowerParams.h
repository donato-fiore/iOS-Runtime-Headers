// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTHERMOSTATCLUSTERSETPOINTRAISELOWERPARAMS_H
#define MTRTHERMOSTATCLUSTERSETPOINTRAISELOWERPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRThermostatClusterSetpointRaiseLowerParams : NSObject

@property (retain, nonatomic) NSNumber *amount; // ivar: _amount
@property (retain, nonatomic) NSNumber *mode; // ivar: _mode
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif