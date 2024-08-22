// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AADEPENDENTAUTHENTICATIONUIREQUEST_H
#define AADEPENDENTAUTHENTICATIONUIREQUEST_H

@class NSString;


#import "AAAppleIDSettingsRequest.h"

@interface AADependentAuthenticationUIRequest : AAAppleIDSettingsRequest {
    NSString *_altDSID;
}




-(id)initWithAltDSID:(id)arg0 ;
-(id)urlString;


@end


#endif