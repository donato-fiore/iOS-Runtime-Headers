// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUICALENDARSINTENTRESPONSE_H
#define EKUICALENDARSINTENTRESPONSE_H

@class INIntentResponse, NSArray;



@interface EKUICalendarsIntentResponse : INIntentResponse

@property (nonatomic, copy) NSArray *calendars;
@property (nonatomic) NSInteger code; // ivar: code


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif