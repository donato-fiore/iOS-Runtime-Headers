// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLCREDENTIALSTORAGE_H
#define NSURLCREDENTIALSTORAGE_H

@class NSURLCredentialStorageInternal, NSDictionary;

#import <Foundation/Foundation.h>


@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal *_internal;
}


@property (nonatomic) BOOL _useSystemKeychain;
@property (readonly, copy) NSDictionary *allCredentials;


+(id)sharedCredentialStorage;
-(id)_allCredentialsWithAccessControlGroup:(id)arg0 includeLegacyKeychain:(BOOL)arg1 ;
-(id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage *)arg0 ;
-(id)_initWithIdentifier:(id)arg0 private:(BOOL)arg1 ;
-(id)credentialsForProtectionSpace:(id)arg0 ;
-(id)defaultCredentialForProtectionSpace:(id)arg0 ;
-(id)init;
-(struct _CFURLCredentialStorage *)_CFURLCredentialStorage;
-(void)dealloc;
-(void)getCredentialsForProtectionSpace:(id)arg0 task:(id)arg1 completionHandler:(id)arg2 ;
-(void)getDefaultCredentialForProtectionSpace:(id)arg0 task:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeCredential:(id)arg0 forProtectionSpace:(id)arg1 ;
-(void)removeCredential:(id)arg0 forProtectionSpace:(id)arg1 options:(id)arg2 ;
-(void)removeCredential:(id)arg0 forProtectionSpace:(id)arg1 options:(id)arg2 task:(id)arg3 ;
-(void)setCredential:(id)arg0 forProtectionSpace:(id)arg1 ;
-(void)setCredential:(id)arg0 forProtectionSpace:(id)arg1 task:(id)arg2 ;
-(void)setDefaultCredential:(id)arg0 forProtectionSpace:(id)arg1 ;
-(void)setDefaultCredential:(id)arg0 forProtectionSpace:(id)arg1 task:(id)arg2 ;


@end


#endif