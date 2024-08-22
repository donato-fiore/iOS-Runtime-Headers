// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSEVENT_H
#define VCSEVENT_H



#import "VCSEntity.h"
#import "VCSDate.h"

@interface VCSEvent : VCSEntity

@property (retain, nonatomic) VCSDate *endDate;
@property (nonatomic) BOOL fullDayEvent; // ivar: _fullDayEvent
@property (retain, nonatomic) VCSDate *startDate;


-(BOOL)isValidStatus:(NSUInteger)arg0 ;
-(NSUInteger)entityType;
-(void)ensureDurationAlarms;


@end


#endif