// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAGENERICTERMSUIREQUEST_H
#define AAGENERICTERMSUIREQUEST_H

@class ACAccount, NSDictionary;


#import "AARequest.h"

@interface AAGenericTermsUIRequest : AARequest

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) BOOL preferPassword; // ivar: _preferPassword
@property (readonly, nonatomic) NSDictionary *requestDictionary; // ivar: _requestDictionary


+(Class)responseClass;
-(id)_requestParamsForTermsEntries:(id)arg0 ;
-(id)initWithAccount:(id)arg0 parameters:(id)arg1 ;
-(id)initWithAccount:(id)arg0 parameters:(id)arg1 preferPassword:(BOOL)arg2 ;
-(id)initWithAccount:(id)arg0 termsEntries:(id)arg1 ;
-(id)initWithParameters:(id)arg0 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif