// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOGPERIODINTENT_H
#define LOGPERIODINTENT_H

@class INIntent, NSDate;



@interface LogPeriodIntent : INIntent

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) NSInteger flow;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif