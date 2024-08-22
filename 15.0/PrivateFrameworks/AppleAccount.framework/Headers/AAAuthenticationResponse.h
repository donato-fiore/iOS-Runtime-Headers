// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAAUTHENTICATIONRESPONSE_H
#define AAAUTHENTICATIONRESPONSE_H

@class NSDictionary, NSString;


#import "AAResponse.h"

@interface AAAuthenticationResponse : AAResponse {
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}


@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSString *cloudKitToken;
@property (readonly, nonatomic) NSString *fmfAppToken;
@property (readonly, nonatomic) NSString *fmfToken;
@property (readonly, nonatomic) NSString *fmipLostModeToken;
@property (readonly, nonatomic) NSString *fmipToken;
@property (readonly, nonatomic) NSString *mapsToken;
@property (readonly, nonatomic) NSString *mdmServerToken;
@property (readonly, nonatomic) NSString *personID;


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif