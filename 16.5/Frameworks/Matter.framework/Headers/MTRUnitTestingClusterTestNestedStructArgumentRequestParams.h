// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTNESTEDSTRUCTARGUMENTREQUESTPARAMS_H
#define MTRUNITTESTINGCLUSTERTESTNESTEDSTRUCTARGUMENTREQUESTPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRUnitTestingClusterNestedStruct.h"

@interface MTRUnitTestingClusterTestNestedStructArgumentRequestParams : NSObject <NSCopying>



@property (copy, nonatomic) MTRUnitTestingClusterNestedStruct *arg1; // ivar: _arg1
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif