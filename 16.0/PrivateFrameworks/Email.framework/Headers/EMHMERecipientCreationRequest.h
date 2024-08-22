// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMHMERECIPIENTCREATIONREQUEST_H
#define EMHMERECIPIENTCREATIONREQUEST_H

@class AARequest, ACAccount, NSString;



@interface EMHMERecipientCreationRequest : AARequest {
    ACAccount *_account;
    NSString *_recipient;
    NSString *_hmeAddress;
}




+(BOOL)canCreateHMEReplyToAddress:(id)arg0 ;
+(Class)responseClass;
+(id)log;
-(id)_httpBody;
-(id)initWithAccount:(id)arg0 recipient:(id)arg1 hmeAddress:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif