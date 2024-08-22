// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETMENSTRUATIONPREDICTIONINTENTRESPONSE_H
#define GETMENSTRUATIONPREDICTIONINTENTRESPONSE_H

@class INIntentResponse, NSDate, NSString;



@interface GetMenstruationPredictionIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, copy) NSDate *lastPeriodEnd;
@property (nonatomic, copy) NSString *lastPeriodFlow;
@property (nonatomic, copy) NSDate *lastPeriodStart;
@property (nonatomic, copy) NSDate *nextPeriodEnd;
@property (nonatomic, copy) NSDate *nextPeriodStart;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif