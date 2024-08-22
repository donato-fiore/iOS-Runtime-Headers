// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMBINETEXTINTENTRESPONSE_H
#define WFCOMBINETEXTINTENTRESPONSE_H

@class INIntentResponse, NSString;



@interface WFCombineTextIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: _code
@property (copy, nonatomic) NSString *text;


-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif