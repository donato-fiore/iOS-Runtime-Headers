// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETHEALTHQUANTITYINTENTRESPONSE_H
#define GETHEALTHQUANTITYINTENTRESPONSE_H

@class INIntentResponse, NSDate, NSString;



@interface GetHealthQuantityIntentResponse : INIntentResponse

@property (nonatomic) CGFloat average;
@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic) CGFloat maximum;
@property (nonatomic) CGFloat minimum;
@property (nonatomic) CGFloat mostRecent;
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic) CGFloat total;
@property (nonatomic, copy) NSString *unit;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif