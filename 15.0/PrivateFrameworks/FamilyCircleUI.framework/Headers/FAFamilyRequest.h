// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAFAMILYREQUEST_H
#define FAFAMILYREQUEST_H

@class AAFamilyRequest, ACAccount;



@interface FAFamilyRequest : AAFamilyRequest

@property (retain, nonatomic) ACAccount *appleAccount; // ivar: _appleAccount


-(id)_endpoint;
-(id)_queryString;
-(id)initWithGrandSlamSigner:(id)arg0 ;
-(id)urlRequest;
-(void)URLRequestWithCompletion:(id)arg0 ;
-(void)_baseURLForEndpoint:(id)arg0 withCompletion:(id)arg1 ;
-(void)_configureRequest:(id)arg0 includePayload:(BOOL)arg1 ;
-(void)_decoratedURLWithCompletion:(id)arg0 ;


@end


#endif