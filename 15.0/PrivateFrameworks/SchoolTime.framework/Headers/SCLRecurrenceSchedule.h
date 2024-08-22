// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLRECURRENCESCHEDULE_H
#define SCLRECURRENCESCHEDULE_H

@class NSArray;


#import "SCLSchedule.h"

@interface SCLRecurrenceSchedule : SCLSchedule {
    NSArray *_recurrences;
}




+(BOOL)supportsSecureCoding;
+(void)performBlockWithSharedFormatter:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecurrences:(id)arg0 ;
-(id)initWithTimeIntervals:(id)arg0 repeatSchedule:(NSInteger)arg1 ;
-(id)recurrences;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif