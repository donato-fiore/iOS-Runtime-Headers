// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAINHERITANCECONTROLLER_H
#define AAINHERITANCECONTROLLER_H

@class NSString, AAFXPCSession;
@protocol AAFXPCSessionDelegate, AAInheritanceDaemonProtocol;

#import <Foundation/Foundation.h>


@interface AAInheritanceController : NSObject <AAFXPCSessionDelegate, AAInheritanceDaemonProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AAFXPCSession *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;


-(id)init;
-(void)configureRemoteInterface:(id)arg0 ;
-(void)fetchAllHealthInfoWithCompletion:(id)arg0 ;
-(void)fetchBenefactorsWithCompletion:(id)arg0 ;
-(void)fetchBeneficiariesWithCompletion:(id)arg0 ;
-(void)fetchInvitationWithBeneficiaryID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInvitationsWithCompletion:(id)arg0 ;
-(void)fetchManifestOptionsForContact:(id)arg0 completion:(id)arg1 ;
-(void)fetchSuggestedBeneficiariesWithCompletion:(id)arg0 ;
-(void)isRecipient:(id)arg0 capableOf:(id)arg1 completion:(id)arg2 ;
-(void)presentInheritanceInvitationUIWithBeneficiaryID:(id)arg0 completion:(id)arg1 ;
-(void)removeAccessCodeWithRecordIdentifier:(id)arg0 contactInfo:(id)arg1 completion:(id)arg2 ;
-(void)removeBenefactor:(id)arg0 completion:(id)arg1 ;
-(void)removeBeneficiary:(id)arg0 manifest:(id)arg1 completion:(id)arg2 ;
-(void)removeInvitation:(id)arg0 completion:(id)arg1 ;
-(void)respondToInvitation:(id)arg0 accepted:(BOOL)arg1 completion:(id)arg2 ;
-(void)sendInvitationToContact:(id)arg0 completion:(id)arg1 ;
-(void)setupBeneficiaryAliasWithAccessKey:(id)arg0 password:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 authToken:(id)arg4 completion:(id)arg5 ;
-(void)setupBeneficiaryManifest:(id)arg0 contactInfo:(id)arg1 setupAuthToken:(id)arg2 completion:(id)arg3 ;
-(void)updateAccessCodeWithRecordIdentifier:(id)arg0 contactInfo:(id)arg1 completion:(id)arg2 ;
-(void)updateBeneficiaryManifest:(id)arg0 contactInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif