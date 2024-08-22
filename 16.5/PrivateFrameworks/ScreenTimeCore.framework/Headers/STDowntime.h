// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDOWNTIME_H
#define STDOWNTIME_H

@class NSManagedObject, NSString, NSSet;



@interface STDowntime : NSManagedObject

@property (copy, nonatomic) NSString *calendarIdentifier;
@property (nonatomic) BOOL canAskForMoreTime;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSSet *schedule;


-(void)setStartHour:(NSInteger)arg0 startMinute:(NSInteger)arg1 endHour:(NSInteger)arg2 endMinute:(NSInteger)arg3 ;


@end


#endif