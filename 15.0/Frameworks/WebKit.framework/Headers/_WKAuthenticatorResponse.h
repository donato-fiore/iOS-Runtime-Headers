// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKAUTHENTICATORRESPONSE_H
#define _WKAUTHENTICATORRESPONSE_H

@class NSData;

#import <Foundation/Foundation.h>

#import "_WKAuthenticationExtensionsClientOutputs.h"

@interface _WKAuthenticatorResponse : NSObject {
    RetainPtr<_WKAuthenticationExtensionsClientOutputs> _extensions;
}


@property (readonly, nonatomic) NSInteger attachment; // ivar: _attachment
@property (readonly, nonatomic) NSData *clientDataJSON; // ivar: _clientDataJSON
@property (readonly, nonatomic) _WKAuthenticationExtensionsClientOutputs *extensions;
@property (readonly, nonatomic) NSData *rawId; // ivar: _rawId


-(id)initWithClientDataJSON:(id)arg0 rawId:(id)arg1 extensions:(*void)arg2 attachment:(NSInteger)arg3 ;


@end


#endif