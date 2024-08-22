// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMUTABLEAUTHENTICATIONCONTEXT_H
#define SSMUTABLEAUTHENTICATIONCONTEXT_H

@class NSDictionary, NSString, NSNumber, NSArray;
@protocol SSXPCCoding, NSCopying, NSMutableCopying;


#import "SSAuthenticationContext.h"

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying>



@property (copy, nonatomic) NSDictionary *HTTPHeaders;
@property (copy, nonatomic) NSString *accountName;
@property (nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;
@property NSInteger accountScope;
@property (nonatomic) BOOL allowsBioAuthentication;
@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic) BOOL allowsRetry;
@property (nonatomic) BOOL allowsSilentAuthentication;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL canCreateNewAccount;
@property (nonatomic) BOOL canSetActiveAccount;
@property (copy, nonatomic) NSString *cancelButtonLabel;
@property (copy, nonatomic) NSString *clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDemoAccount) BOOL demoAccount;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysOnLockScreen;
@property (nonatomic) BOOL forceDaemonAuthentication;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *initialPassword;
@property (copy, nonatomic) NSString *logUUID;
@property (copy, nonatomic) NSString *okButtonLabel;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (nonatomic) BOOL persistsAcrossDeviceLock;
@property (nonatomic) BOOL persistsPasswordFallback;
@property (copy, nonatomic) NSString *preferredITunesStoreClient;
@property (nonatomic) NSInteger promptStyle;
@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *reasonDescription;
@property (copy, nonatomic) NSDictionary *requestParameters;
@property (retain, nonatomic) NSNumber *requiredUniqueIdentifier;
@property (nonatomic) BOOL shouldCreateNewSession;
@property (nonatomic) BOOL shouldFollowAccountButtons;
@property (nonatomic) BOOL shouldIgnoreAccountConversion;
@property (nonatomic) BOOL shouldIgnoreProtocol;
@property (nonatomic) BOOL shouldPersonalizeResponseActions;
@property (nonatomic) BOOL shouldSuppressDialogs;
@property (copy, nonatomic) NSDictionary *signupRequestParameters;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tokenType;
@property (copy, nonatomic) NSString *touchIDContinueToken;
@property (copy, nonatomic) NSArray *userAgentComponents;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;
-(void)setValuesWithAccount:(id)arg0 ;


@end


#endif