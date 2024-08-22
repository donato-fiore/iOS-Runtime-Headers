// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOGBLOODPRESSUREINTENTRESPONSE_H
#define LOGBLOODPRESSUREINTENTRESPONSE_H

@class INIntentResponse, NSDate, NSString;



@interface LogBloodPressureIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic) CGFloat diastolic;
@property (nonatomic, copy) NSDate *sampleEnd;
@property (nonatomic, copy) NSDate *sampleStart;
@property (nonatomic) CGFloat systolic;
@property (nonatomic, copy) NSString *unit;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif