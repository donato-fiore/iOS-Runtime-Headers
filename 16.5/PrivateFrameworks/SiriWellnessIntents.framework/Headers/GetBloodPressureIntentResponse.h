// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETBLOODPRESSUREINTENTRESPONSE_H
#define GETBLOODPRESSUREINTENTRESPONSE_H

@class INIntentResponse, NSDate, NSString;



@interface GetBloodPressureIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic) CGFloat diastolic;
@property (nonatomic) CGFloat diastolicMaximum;
@property (nonatomic) CGFloat diastolicMinimum;
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic) CGFloat systolic;
@property (nonatomic) CGFloat systolicMaximum;
@property (nonatomic) CGFloat systolicMinimum;
@property (nonatomic, copy) NSString *unit;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif