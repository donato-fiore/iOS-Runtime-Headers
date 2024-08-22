// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOGQUANTITYINTENTRESPONSE_H
#define LOGQUANTITYINTENTRESPONSE_H

@class INIntentResponse, NSDate, NSString;



@interface LogQuantityIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic) CGFloat doubleValue;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSString *units;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif