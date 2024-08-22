// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRFAULTINJECTIONCLUSTERFAILRANDOMLYATFAULTPARAMS_H
#define MTRFAULTINJECTIONCLUSTERFAILRANDOMLYATFAULTPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRFaultInjectionClusterFailRandomlyAtFaultParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *id; // ivar: _id
@property (copy, nonatomic) NSNumber *percentage; // ivar: _percentage
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif