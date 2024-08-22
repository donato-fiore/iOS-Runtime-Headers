// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMATCHTEXTINTENTRESPONSE_H
#define WFMATCHTEXTINTENTRESPONSE_H

@class INIntentResponse, NSString, NSArray;



@interface WFMatchTextIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: _code
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSArray *matches;


+(id)invalidRegularExpressionIntentResponseWithErrorDescription:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif