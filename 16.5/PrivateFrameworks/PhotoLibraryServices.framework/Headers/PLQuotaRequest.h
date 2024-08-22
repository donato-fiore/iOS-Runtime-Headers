// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLQUOTAREQUEST_H
#define PLQUOTAREQUEST_H

@class AARequest, NSString;



@interface PLQuotaRequest : AARequest {
    NSString *_authToken;
    NSString *_personID;
}




-(id)initWithURLString:(id)arg0 authToken:(id)arg1 personID:(id)arg2 ;
-(id)urlRequest;


@end


#endif