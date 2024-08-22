// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTSECURITYSCOPE_H
#define MFATTACHMENTSECURITYSCOPE_H

@class NSFileCoordinator, NSURL, NSData;

#import <Foundation/Foundation.h>


@interface MFAttachmentSecurityScope : NSObject {
    NSFileCoordinator *_fileCoordinator;
    NSURL *_securityScopedURL;
    NSData *_securityScopeToken;
    NSURL *_secureReadURL;
    BOOL _securedRead;
    NSURL *_secureWriteURL;
    BOOL _securedWrite;
}




+(id)securityScopedURL:(id)arg0 ;
+(id)securityScopedURL:(id)arg0 withToken:(id)arg1 ;
-(BOOL)isBundle;
-(BOOL)isReadable;
-(id)_temporaryReadURL:(id)arg0 error:(*id)arg1 ;
-(id)data;
-(id)initWithSecurityScopedURL:(id)arg0 withToken:(id)arg1 ;
-(id)securityScopeToken;
-(id)startReadAccess;
-(id)startWriteAccess;
-(void)_attachSecurityScope;
-(void)_removeTemporaryReadURL;
-(void)dealloc;
-(void)stopAccess;


@end


#endif