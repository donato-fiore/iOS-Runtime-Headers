// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCREDENTIALIDENTITYMATCH_H
#define WBSCREDENTIALIDENTITYMATCH_H

@class NSString, SFPasswordCredentialIdentity, NSExtension, SFSafariCredential;
@protocol WBSFormAutoFillItem;

#import <Foundation/Foundation.h>


@interface WBSCredentialIdentityMatch : NSObject <WBSFormAutoFillItem>



@property (readonly, nonatomic) NSString *completion;
@property (readonly, nonatomic) SFPasswordCredentialIdentity *credentialIdentity; // ivar: _credentialIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SFSafariCredential *resolvedCredential; // ivar: _resolvedCredential
@property (readonly) Class superclass;


-(id)initWithCredentialIdentity:(id)arg0 extension:(id)arg1 ;
-(id)resolvedMatchWithCredential:(id)arg0 ;


@end


#endif