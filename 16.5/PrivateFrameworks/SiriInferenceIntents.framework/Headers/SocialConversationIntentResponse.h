// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOCIALCONVERSATIONINTENTRESPONSE_H
#define SOCIALCONVERSATIONINTENTRESPONSE_H

@class INIntentResponse, NSString;



@interface SocialConversationIntentResponse : INIntentResponse

@property (nonatomic, copy) NSString *catID;
@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, copy) NSString *dialogID;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif