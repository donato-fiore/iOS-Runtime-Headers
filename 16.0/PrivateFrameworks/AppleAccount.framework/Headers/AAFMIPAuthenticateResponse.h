// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAFMIPAUTHENTICATERESPONSE_H
#define AAFMIPAUTHENTICATERESPONSE_H

@class NSDictionary, NSString;


#import "AAResponse.h"

@interface AAFMIPAuthenticateResponse : AAResponse {
    NSDictionary *_tokens;
    NSDictionary *_appleAccountInfo;
}


@property (readonly, nonatomic) NSString *fmipDsid;
@property (readonly, nonatomic) NSString *fmipUrl;
@property (readonly, nonatomic) NSString *fmipWipeToken;


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif