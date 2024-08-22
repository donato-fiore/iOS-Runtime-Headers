// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMHMERECIPIENTCREATIONRESPONSE_H
#define EMHMERECIPIENTCREATIONRESPONSE_H

@class AAResponse, NSString;



@interface EMHMERecipientCreationResponse : AAResponse

@property (copy, nonatomic) NSString *replyToAddress; // ivar: _replyToAddress


+(id)log;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif