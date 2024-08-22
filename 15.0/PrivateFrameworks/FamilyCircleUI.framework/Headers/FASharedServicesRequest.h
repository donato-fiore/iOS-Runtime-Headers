// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FASHAREDSERVICESREQUEST_H
#define FASHAREDSERVICESREQUEST_H

@class AARequest, FARequestConfigurator, ACAccount;



@interface FASharedServicesRequest : AARequest {
    FARequestConfigurator *_requestConfigurator;
    ACAccount *_appleAccount;
}




+(Class)responseClass;
-(id)initWithAppleAccount:(id)arg0 urlString:(id)arg1 ;
-(id)urlRequest;


@end


#endif