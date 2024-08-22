// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSMPCONVERSATIONGROUP_H
#define IDSMPCONVERSATIONGROUP_H

@class NSData, ENGroupID, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface IDSMPConversationGroup : NSObject

@property (readonly, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (readonly, nonatomic) NSData *forwardingTicket; // ivar: _forwardingTicket
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly, nonatomic) ENGroupID *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSDictionary *groupMembers; // ivar: _groupMembers
@property (readonly, nonatomic) NSData *publicKeyData; // ivar: _publicKeyData
@property (readonly, nonatomic) NSString *sponsorAlias; // ivar: _sponsorAlias


+(id)conversationGroupWithConversationKey:(id)arg0 fromPublicData:(id)arg1 publicKey:(id)arg2 signature:(id)arg3 groupID:(id)arg4 parent:(id)arg5 parentPublicKey:(id)arg6 forwardingTicket:(id)arg7 sponsor:(id)arg8 error:(*id)arg9 ;
+(id)conversationGroupWithParent:(id)arg0 members:(id)arg1 sponsor:(id)arg2 applicationData:(id)arg3 error:(*id)arg4 ;
+(id)conversationGroupWithParent:(id)arg0 members:(id)arg1 sponsorAlias:(id)arg2 sponsor:(id)arg3 applicationData:(id)arg4 error:(*id)arg5 ;
+(id)conversationGroupWithParent:(id)arg0 sponsor:(id)arg1 deviceIdentity:(id)arg2 groupID:(id)arg3 publicKeyData:(id)arg4 publicData:(id)arg5 signature:(id)arg6 error:(*id)arg7 ;
+(id)conversationGroupWithPrivateDataRepresentation:(id)arg0 ;
+(id)conversationSponsorPairFromPublicData:(id)arg0 publicKey:(id)arg1 signature:(id)arg2 groupID:(id)arg3 parent:(id)arg4 parentPublicKey:(id)arg5 forwardingTicket:(id)arg6 fullDeviceIdentity:(id)arg7 error:(*id)arg8 ;
-(BOOL)isParentOfGroup:(id)arg0 ;
-(id)conversationGroupWithUpdatedGroupID:(id)arg0 error:(*id)arg1 ;
-(id)privateDataRepresentationWithError:(*id)arg0 ;
-(id)publicDataRepresentationWithSponsor:(id)arg0 error:(*id)arg1 ;
-(id)signAndProtectData:(id)arg0 senderSigningIdentity:(id)arg1 members:(id)arg2 error:(*id)arg3 ;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(id)verifyAndExposeData:(id)arg0 senderSigningIdentity:(id)arg1 members:(id)arg2 error:(*id)arg3 ;


@end


#endif