// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMPFULLACCOUNTIDENTITYCLUSTER_H
#define IDSMPFULLACCOUNTIDENTITYCLUSTER_H

@class NSData, NSArray, ENGroupID;


#import "IDSMPIdentity.h"
#import "IDSMPFullAccountIdentity.h"

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity

@property (readonly, nonatomic) NSData *forwardingTicket;
@property (readonly, nonatomic) IDSMPFullAccountIdentity *fullAccountIdentity;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesAdmin;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesSigning;
@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) *__SecKey publicKey; // ivar: _publicKey


+(id)clusterWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)clusterWithFullAccountIdentity:(id)arg0 fullAdminServiceIdentities:(id)arg1 fullSigningServiceIdentities:(id)arg2 error:(*id)arg3 ;
-(BOOL)isParentOfCluster:(id)arg0 ;
-(id)adminServiceIdentityWithType:(NSInteger)arg0 ;
-(id)clusterByUpdatingGroupID:(id)arg0 error:(*id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)publicAccountClusterWithError:(*id)arg0 ;
-(id)rolledClusterWithFullAccountIdentity:(id)arg0 fullAdminServiceIdentities:(id)arg1 fullSigningServiceIdentities:(id)arg2 error:(*id)arg3 ;
-(id)signData:(id)arg0 withError:(*id)arg1 ;
-(id)signingServiceIdentityWithType:(NSInteger)arg0 ;


@end


#endif