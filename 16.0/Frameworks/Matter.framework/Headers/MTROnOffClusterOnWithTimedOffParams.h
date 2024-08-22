// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRONOFFCLUSTERONWITHTIMEDOFFPARAMS_H
#define MTRONOFFCLUSTERONWITHTIMEDOFFPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTROnOffClusterOnWithTimedOffParams : NSObject

@property (retain, nonatomic) NSNumber *offWaitTime; // ivar: _offWaitTime
@property (retain, nonatomic) NSNumber *onOffControl; // ivar: _onOffControl
@property (retain, nonatomic) NSNumber *onTime; // ivar: _onTime
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif