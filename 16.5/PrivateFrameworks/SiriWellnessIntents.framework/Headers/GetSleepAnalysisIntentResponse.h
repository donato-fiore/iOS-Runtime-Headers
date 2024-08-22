// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETSLEEPANALYSISINTENTRESPONSE_H
#define GETSLEEPANALYSISINTENTRESPONSE_H

@class INIntentResponse;



@interface GetSleepAnalysisIntentResponse : INIntentResponse

@property (nonatomic) CGFloat averageAsleepDuration;
@property (nonatomic) CGFloat averageInBedDuration;
@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic) NSInteger daysSummarized;
@property (nonatomic) NSInteger daysWithAsleepData;
@property (nonatomic) CGFloat totalAsleepDuration;
@property (nonatomic) CGFloat totalInBedDuration;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif