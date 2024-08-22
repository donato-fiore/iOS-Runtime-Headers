// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRFAULTINJECTIONCLUSTERFAILATFAULTPARAMS_H
#define MTRFAULTINJECTIONCLUSTERFAILATFAULTPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRFaultInjectionClusterFailAtFaultParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *id; // ivar: _id
@property (copy, nonatomic) NSNumber *numCallsToFail; // ivar: _numCallsToFail
@property (copy, nonatomic) NSNumber *numCallsToSkip; // ivar: _numCallsToSkip
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *takeMutex; // ivar: _takeMutex
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif