// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAKEYSHARINGSESSION_H
#define DAKEYSHARINGSESSION_H

@class NSString;
@protocol KmlSessionCallbacks, NSSecureCoding, DAKeyBindingAttestationUpdate;


#import "DASession.h"

@interface DAKeySharingSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyBindingAttestationUpdate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)cancelSharingInvitation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)acceptSharingInvitationWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)authorizeSharingInvitationIdentifier:(id)arg0 auth:(id)arg1 completionHandler:(id)arg2 ;
-(void)didEnd:(id)arg0 ;
-(void)didStart:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg0 callback:(id)arg1 ;
-(void)requestInviteWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendSharingInvitationForKeyIdentifier:(id)arg0 toIdsIdentifier:(id)arg1 auth:(id)arg2 config:(id)arg3 completionHandler:(id)arg4 ;
-(void)sendSilentSharingInvitationWithKeyIdentifier:(id)arg0 config:(id)arg1 groupIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)setBindingAttestation:(id)arg0 forKeyWithIdentifier:(id)arg1 callback:(id)arg2 ;


@end


#endif