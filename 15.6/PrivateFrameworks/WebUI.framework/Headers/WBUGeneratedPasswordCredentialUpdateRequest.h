// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBUGENERATEDPASSWORDCREDENTIALUPDATEREQUEST_H
#define WBUGENERATEDPASSWORDCREDENTIALUPDATEREQUEST_H

@class NSString, NSURLProtectionSpace, NSURL;

#import <Foundation/Foundation.h>


@interface WBUGeneratedPasswordCredentialUpdateRequest : NSObject

@property (readonly, copy, nonatomic) NSString *generatedPassword; // ivar: _generatedPassword
@property (readonly, copy, nonatomic) NSString *lastGeneratedPassword; // ivar: _lastGeneratedPassword
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace
@property (readonly, nonatomic) BOOL shouldSaveNewCredential; // ivar: _shouldSaveNewCredential
@property (readonly, nonatomic) NSURL *urlForCredential; // ivar: _urlForCredential
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(id)requestWithNewUsername:(id)arg0 newGeneratedPassword:(id)arg1 lastGeneratedPassword:(id)arg2 credentialURL:(id)arg3 protectionSpace:(id)arg4 shouldSaveNewCredential:(BOOL)arg5 ;
-(id)_initRequestWithNewUsername:(id)arg0 newGeneratedPassword:(id)arg1 lastGeneratedPassword:(id)arg2 credentialURL:(id)arg3 protectionSpace:(id)arg4 shouldSaveNewCredential:(BOOL)arg5 ;


@end


#endif