// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBCOREFPSCONTENTKEYSESSIONDELEGATE_H
#define WEBCOREFPSCONTENTKEYSESSIONDELEGATE_H

@class NSString;
@protocol AVContentKeySessionDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreFPSContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate>

 {
    *AVContentKeySessionDelegateClient _parent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)contentKeySession:(id)arg0 shouldRetryContentKeyRequest:(id)arg1 reason:(id)arg2 ;
-(id)initWithParent:(struct AVContentKeySessionDelegateClient *)arg0 ;
-(void)contentKeySession:(id)arg0 contentKeyRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)contentKeySession:(id)arg0 contentKeyRequestDidSucceed:(id)arg1 ;
-(void)contentKeySession:(id)arg0 contentProtectionSessionIdentifierDidChangeForKeyGroup:(id)arg1 ;
-(void)contentKeySession:(id)arg0 contentProtectionSessionIdentifierDidChangeForReportGroup:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequests:(id)arg1 forInitializationData:(id)arg2 ;
-(void)contentKeySession:(id)arg0 didProvidePersistableContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideRenewingContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didUpdatePersistableContentKey:(id)arg1 forContentKeyIdentifier:(id)arg2 ;
-(void)contentKeySession:(id)arg0 externalProtectionStatusDidChangeForContentKeyRequest:(id)arg1 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg0 ;
-(void)invalidate;


@end


#endif