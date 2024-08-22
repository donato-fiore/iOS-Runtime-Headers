// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECURRENCERULE_H
#define RECURRENCERULE_H

@class INObject, NSNumber;



@interface RecurrenceRule : INObject

@property (nonatomic) NSInteger frequency;
@property (nonatomic, retain) NSNumber *interval;
@property (nonatomic, retain) NSNumber *weeklyRecurrenceDaysValue;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif