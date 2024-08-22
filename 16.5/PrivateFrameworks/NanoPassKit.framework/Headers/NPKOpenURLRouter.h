// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKOPENURLROUTER_H
#define NPKOPENURLROUTER_H

@protocol NPKOpenURLRouterDelegate;

#import <Foundation/Foundation.h>


@interface NPKOpenURLRouter : NSObject

@property (weak, nonatomic) NSObject<NPKOpenURLRouterDelegate> *delegate; // ivar: _delegate


-(BOOL)_handleServiceModeRequestedForPassWithUniqueID:(id)arg0 ;
-(BOOL)_handleShareForMailboxAddress:(id)arg0 referralSource:(id)arg1 ;
-(BOOL)_handleShareableCredentialsAcceptanceWithShareableCredentials:(id)arg0 thumbnailImageData:(id)arg1 ;
-(BOOL)_handleSubcredentialInvitationAcceptanceForLocalInvitationIdentifier:(id)arg0 remoteInvitationIdentifier:(id)arg1 contactName:(id)arg2 thumbnailImageData:(id)arg3 ;
-(BOOL)_handleUniversalLinkURLAsShoeboxURLForPathComponents:(id)arg0 shouldParsePathComponents:(BOOL)arg1 urlComponents:(id)arg2 ;
-(BOOL)_isValidRelayServerURL:(id)arg0 outPathComponents:(*id)arg1 ;
-(BOOL)_presentEntitlementDetailsForPassUniqueID:(id)arg0 ;
-(BOOL)_presentPassDetailsForPassWithUniqueID:(id)arg0 ;
-(BOOL)_presentPassListPreventAppUninstall;
-(BOOL)_presentShareDetailsForPassUniqueID:(id)arg0 shareIdentifier:(id)arg1 ;
-(BOOL)_presentTransactionDetailsForPassWithUniqueID:(id)arg0 serviceIdentifier:(id)arg1 ;
-(BOOL)_processCardHostWithPathComponents:(id)arg0 queryItems:(id)arg1 ;
-(BOOL)_processPassesHostWithPathComponents:(id)arg0 urlComponents:(id)arg1 ;
-(BOOL)_processShareHostWithPathComponents:(id)arg0 urlComponents:(id)arg1 ;
-(BOOL)_processShareableCredentialsHostWithQueryItems:(id)arg0 ;
-(BOOL)_processShoeboxSchemeForHost:(id)arg0 pathComponents:(id)arg1 urlComponents:(id)arg2 ;
-(BOOL)_processShoeboxSchemeForURL:(id)arg0 ;
-(BOOL)_processSubcredentialInvitationHostWithQueryItems:(id)arg0 ;
-(BOOL)_processTransactionHostWithQueryItems:(id)arg0 ;
-(BOOL)handleOpenURL:(id)arg0 ;
-(BOOL)handleUniversalLinkWithURL:(id)arg0 ;
-(BOOL)handleUniversalLinkWithUserActivity:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)openURLInSafariForURL:(id)arg0 ;


@end


#endif