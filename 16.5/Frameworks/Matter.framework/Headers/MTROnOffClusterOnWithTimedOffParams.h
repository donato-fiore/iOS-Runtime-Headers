// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRONOFFCLUSTERONWITHTIMEDOFFPARAMS_H
#define MTRONOFFCLUSTERONWITHTIMEDOFFPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROnOffClusterOnWithTimedOffParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *offWaitTime; // ivar: _offWaitTime
@property (copy, nonatomic) NSNumber *onOffControl; // ivar: _onOffControl
@property (copy, nonatomic) NSNumber *onTime; // ivar: _onTime
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif