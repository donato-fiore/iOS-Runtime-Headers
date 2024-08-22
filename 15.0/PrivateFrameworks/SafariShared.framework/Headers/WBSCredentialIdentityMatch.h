// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCREDENTIALIDENTITYMATCH_H
#define WBSCREDENTIALIDENTITYMATCH_H

@class SFPasswordCredentialIdentity, NSExtension, SFSafariCredential;


#import "WBSFormAutoFillItem.h"

@interface WBSCredentialIdentityMatch : WBSFormAutoFillItem

@property (readonly, nonatomic) SFPasswordCredentialIdentity *credentialIdentity; // ivar: _credentialIdentity
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) SFSafariCredential *resolvedCredential; // ivar: _resolvedCredential


-(id)completion;
-(id)initWithCredentialIdentity:(id)arg0 extension:(id)arg1 ;
-(id)resolvedMatchWithCredential:(id)arg0 ;


@end


#endif