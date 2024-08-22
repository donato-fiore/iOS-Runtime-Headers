// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTDATAREQUEST_H
#define PPTDATAREQUEST_H

@class NSSet, NSPredicate, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTDataRequest : NSObject <NSSecureCoding>



@property (readonly) NSSet *metrics; // ivar: _metrics
@property (readonly) NSPredicate *predicate; // ivar: _predicate
@property (readonly) NSInteger requestType; // ivar: _requestType
@property (readonly) NSDateInterval *timeFilter; // ivar: _timeFilter


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestType:(NSInteger)arg0 metrics:(id)arg1 predicate:(id)arg2 timeFilter:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif