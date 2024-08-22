// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTHISTOGRAMREQUEST_H
#define PPTHISTOGRAMREQUEST_H

@protocol NSSecureCoding;


#import "PPTDataRequest.h"

@interface PPTHistogramRequest : PPTDataRequest <NSSecureCoding>



@property (readonly) NSUInteger binCount; // ivar: _binCount
@property (readonly) CGFloat maxRange; // ivar: _maxRange
@property (readonly) CGFloat minRange; // ivar: _minRange


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetrics:(id)arg0 predicate:(id)arg1 timeFilter:(id)arg2 binCount:(NSUInteger)arg3 minRange:(CGFloat)arg4 maxRange:(CGFloat)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif