// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETBLOODPRESSUREINTENT_H
#define GETBLOODPRESSUREINTENT_H

@class INIntent, NSDate;



@interface GetBloodPressureIntent : INIntent

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *startDate;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif