// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKAVAILABILITYSPAN_H
#define EKAVAILABILITYSPAN_H

@class NSString, NSDate;
@protocol CalDateRangeProtocol;

#import <Foundation/Foundation.h>


@interface EKAvailabilitySpan : NSObject <CalDateRangeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


-(id)init;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 type:(NSInteger)arg2 ;


@end


#endif