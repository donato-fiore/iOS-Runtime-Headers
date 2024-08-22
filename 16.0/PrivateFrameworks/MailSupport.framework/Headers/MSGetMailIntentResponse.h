// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSGETMAILINTENTRESPONSE_H
#define MSGETMAILINTENTRESPONSE_H

@class INIntentResponse, NSArray;



@interface MSGetMailIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: _code
@property (copy, nonatomic) NSArray *mails;


-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif