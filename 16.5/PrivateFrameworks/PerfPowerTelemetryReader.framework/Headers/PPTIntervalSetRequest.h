// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTINTERVALSETREQUEST_H
#define PPTINTERVALSETREQUEST_H

@protocol NSSecureCoding;


#import "PPTDataRequest.h"

@interface PPTIntervalSetRequest : PPTDataRequest <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetrics:(id)arg0 predicate:(id)arg1 timeFilter:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif