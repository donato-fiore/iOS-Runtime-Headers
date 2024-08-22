// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTLISTSTRUCTARGUMENTREQUESTPARAMS_H
#define MTRUNITTESTINGCLUSTERTESTLISTSTRUCTARGUMENTREQUESTPARAMS_H

@class NSArray, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRUnitTestingClusterTestListStructArgumentRequestParams : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *arg1; // ivar: _arg1
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif