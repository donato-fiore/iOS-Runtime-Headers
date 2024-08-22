// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASECONDARYAUTHENTICATIONREQUEST_H
#define AASECONDARYAUTHENTICATIONREQUEST_H

@class NSString;


#import "AARequest.h"

@interface AASecondaryAuthenticationRequest : AARequest {
    NSString *_primaryToken;
    NSString *_dsid;
}




+(Class)responseClass;
-(id)initWithDSID:(id)arg0 primaryToken:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif