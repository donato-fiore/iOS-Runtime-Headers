// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GMAILACCOUNT_H
#define GMAILACCOUNT_H

@class EFPromise, NSURLCredential, NSString;
@protocol MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol, NSURLSessionDataDelegate;


#import "IMAPAccount.h"

@interface GmailAccount : IMAPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol, NSURLSessionDataDelegate>

 {
    EFPromise *_enablingPromise;
    NSURLCredential *_credential;
    NSString *_clientToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deliveryAccountUsesSSL;
+(BOOL)isPredefinedAccountType;
+(BOOL)usernameIsEmailAddress;
+(id)accountTypeIdentifier;
+(id)authSchemesForAccountClass;
+(id)deliveryAccountHostname;
+(id)displayedAccountTypeString;
+(id)emailAddressHostPart;
+(id)hostname;
+(id)imapNotEnabledPrefix;
+(unsigned int)deliveryAccountPortNumber;
-(BOOL)archiveSentMessages;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(BOOL)enableAccount;
-(BOOL)shouldArchiveByDefault;
-(BOOL)shouldEnableAfterError:(id)arg0 ;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)supportsArchiving;
-(BOOL)supportsFastRemoteBodySearch;
-(BOOL)xListSupportedOnConnection:(id)arg0 ;
-(NSUInteger)credentialAccessibility;
-(id)_URLFromUncleanString:(id)arg0 ;
-(id)_childOfMailbox:(id)arg0 withComponentName:(id)arg1 ;
-(id)_consumeExistingPreAuthToken;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg0 ;
-(id)_webLoginErrorWithURL:(id)arg0 ;
-(id)accountStore;
-(id)allMailMailboxUid;
-(id)clientToken;
-(id)displayNameUsingSpecialNamesForMailboxUid:(id)arg0 ;
-(id)emailAddresses;
-(id)errorForResponse:(id)arg0 ;
-(id)hostname;
-(id)iconString;
-(id)initWithLibrary:(id)arg0 persistentAccount:(id)arg1 ;
-(id)persistentNameForMailbox:(id)arg0 ;
-(id)preferredAuthScheme;
-(id)specialUseAttributeForType:(int)arg0 ;
-(id)specialUseAttributesForMailbox:(id)arg0 ;
-(id)statisticsKind;
-(int)archiveDestinationForMailbox:(id)arg0 ;
-(int)emptyFrequencyForMailboxType:(int)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_deleteHook;
-(void)_removeCredential:(id)arg0 ;
-(void)dealloc;
-(void)persistentAccountDidChange:(id)arg0 previousAccount:(id)arg1 ;
-(void)setPassword:(id)arg0 ;


@end


#endif