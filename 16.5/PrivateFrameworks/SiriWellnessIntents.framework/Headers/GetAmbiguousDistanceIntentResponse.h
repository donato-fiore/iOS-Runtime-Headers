// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETAMBIGUOUSDISTANCEINTENTRESPONSE_H
#define GETAMBIGUOUSDISTANCEINTENTRESPONSE_H

@class INIntentResponse, NSDate, NSString;



@interface GetAmbiguousDistanceIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic) CGFloat walkRunDistance;
@property (nonatomic) CGFloat wheelchairDistance;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif