// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSINPUTTIMECLUE_H
#define CLSINPUTTIMECLUE_H

@class NSArray, NSSet, NSDate;


#import "CLSInputClue.h"

@interface CLSInputTimeClue : CLSInputClue {
    NSArray *_dateComponentsArray;
    NSSet *_localDates;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSSet *_universalDates;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
}


@property (copy, nonatomic) NSArray *events; // ivar: _events


+(id)clueWithDates:(id)arg0 ;
-(BOOL)isEqualToClue:(id)arg0 ;
-(CGFloat)timeInterval;
-(NSUInteger)numberOfDays;
-(id)description;
-(id)localDates;
-(id)localEndDate;
-(id)localStartDate;
-(id)universalDates;
-(id)universalEndDate;
-(id)universalStartDate;
-(void)_computeDateProperties;
-(void)_prepareWithProgressBlock:(id)arg0 ;


@end


#endif