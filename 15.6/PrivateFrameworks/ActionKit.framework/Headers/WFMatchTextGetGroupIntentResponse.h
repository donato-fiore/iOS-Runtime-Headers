// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMATCHTEXTGETGROUPINTENTRESPONSE_H
#define WFMATCHTEXTGETGROUPINTENTRESPONSE_H

@class INIntentResponse, NSNumber, NSArray;



@interface WFMatchTextGetGroupIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: _code
@property (copy, nonatomic) NSNumber *noMatchIndex;
@property (copy, nonatomic) NSNumber *rangeErrorGroupCount;
@property (copy, nonatomic) NSNumber *rangeErrorGroupNumber;
@property (copy, nonatomic) NSArray *text;


+(id)noMatchIntentResponseWithNoMatchIndex:(id)arg0 ;
+(id)rangeErrorIntentResponseWithRangeErrorGroupNumber:(id)arg0 rangeErrorGroupCount:(id)arg1 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif