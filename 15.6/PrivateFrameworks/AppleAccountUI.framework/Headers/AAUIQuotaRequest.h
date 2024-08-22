// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIQUOTAREQUEST_H
#define AAUIQUOTAREQUEST_H

@class AARequest, ACAccount;



@interface AAUIQuotaRequest : AARequest {
    ACAccount *_account;
    BOOL _isDetailedRequest;
}




+(Class)responseClass;
-(id)initDetailedRequestWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif