// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADEVENTTIMEWINDOWPREDICATE_H
#define CADEVENTTIMEWINDOWPREDICATE_H

@class NSDate;
@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface CADEventTimeWindowPredicate : CADPredicate <NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL mustStartInInterval; // ivar: _mustStartInInterval
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) CADPredicate *wrappedPredicate; // ivar: _wrappedPredicate


+(BOOL)supportsSecureCoding;
-(?)copyMatchingItemsWithDatabase;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 limitWithStartDate:(id)arg1 endDate:(id)arg2 mustStartInInterval:(BOOL)arg3 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif