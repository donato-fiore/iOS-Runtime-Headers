// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBUSINESSCHATINVITATIONCONTEXT_H
#define PKBUSINESSCHATINVITATIONCONTEXT_H

@class NSString, PKAccount, PKFeatureApplication, NSArray;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBusinessChatInvitationContext : NSObject <PKBusinessChatContext>

 {
    NSString *_businessChatIdentifier;
    PKAccount *_account;
    PKFeatureApplication *_invitation;
    NSArray *_pendingInvitations;
    NSArray *_featureApplications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithBusinessChatIdentifier:(id)arg0 account:(id)arg1 invitation:(id)arg2 pendingInvitations:(id)arg3 featureApplications:(id)arg4 ;
-(id)intentParameters;


@end


#endif