// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAURLREQUESTSIGNER_H
#define OAURLREQUESTSIGNER_H


#import <Foundation/Foundation.h>

#import "OACredential.h"

@interface OAURLRequestSigner : NSObject {
    OACredential *_credential;
}


@property (nonatomic) int signatureMethod; // ivar: _signatureMethod


-(Class)signer;
-(id)applyApplicationID:(id)arg0 toRequest:(id)arg1 containsMultiPartData:(BOOL)arg2 ;
-(id)initWithCredential:(id)arg0 ;
-(id)oauthAuthorizationHeaderWithSignature:(id)arg0 nonce:(id)arg1 timestamp:(id)arg2 ;
-(id)oauthNonce;
-(id)oauthParametersWithNonce:(id)arg0 timeStamp:(id)arg1 ;
-(id)signedURLRequestWithRequest:(id)arg0 ;
-(id)signedURLRequestWithRequest:(id)arg0 applicationID:(id)arg1 timestamp:(id)arg2 ;
-(id)timestamp:(id)arg0 ;
-(void)dealloc;


@end


#endif