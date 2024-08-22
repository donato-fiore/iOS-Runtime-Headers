// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTEVENTREQUEST_H
#define PPTEVENTREQUEST_H

@protocol NSSecureCoding;


#import "PPTDataRequest.h"

@interface PPTEventRequest : PPTDataRequest <NSSecureCoding>



@property (readonly) NSUInteger limitCount; // ivar: _limitCount
@property (readonly) NSUInteger offsetCount; // ivar: _offsetCount


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetrics:(id)arg0 predicate:(id)arg1 timeFilter:(id)arg2 ;
-(id)initWithMetrics:(id)arg0 predicate:(id)arg1 timeFilter:(id)arg2 limitCount:(NSUInteger)arg3 offsetCount:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif