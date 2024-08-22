// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENUSERSTORECLIENT_H
#define ENUSERSTORECLIENT_H

@class NSString;


#import "ENStoreClient.h"
#import "EDAMUserStoreClient.h"

@interface ENUserStoreClient : ENStoreClient

@property (retain, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (retain, nonatomic) EDAMUserStoreClient *client; // ivar: _client


+(id)userStoreClientWithUrl:(id)arg0 authenticationToken:(id)arg1 ;
-(id)authenticateToBusiness;
-(id)initWithUserStoreUrl:(id)arg0 authenticationToken:(id)arg1 ;
-(void)authenticateToBusinessWithCompletion:(id)arg0 ;
// -(void)authenticateToBusinessWithSuccess:(id)arg0 failure:(unk)arg1  ;
-(void)checkVersionWithClientName:(id)arg0 edamVersionMajor:(short)arg1 edamVersionMinor:(short)arg2 completion:(id)arg3 ;
// -(void)checkVersionWithClientName:(id)arg0 edamVersionMajor:(short)arg1 edamVersionMinor:(short)arg2 success:(id)arg3 failure:(unk)arg4  ;
-(void)fetchBootstrapInfoWithLocale:(id)arg0 completion:(id)arg1 ;
-(void)fetchNoteStoreURLWithCompletion:(id)arg0 ;
-(void)fetchPremiumInfoWithCompletion:(id)arg0 ;
-(void)fetchPublicUserInfoWithUsername:(id)arg0 completion:(id)arg1 ;
-(void)fetchUserWithCompletion:(id)arg0 ;
// -(void)getBootstrapInfoWithLocale:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getNoteStoreUrlWithSuccess:(id)arg0 failure:(unk)arg1  ;
// -(void)getPremiumInfoWithSuccess:(id)arg0 failure:(unk)arg1  ;
// -(void)getPublicUserInfoWithUsername:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getUserWithSuccess:(id)arg0 failure:(unk)arg1  ;
-(void)revokeLongSessionWithAuthenticationToken:(id)arg0 completion:(id)arg1 ;
// -(void)revokeLongSessionWithAuthenticationToken:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;


@end


#endif