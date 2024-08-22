// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMODIFYSHAREHANDLER_H
#define CKDMODIFYSHAREHANDLER_H

@class CKShare, CKRecordID;


#import "CKDModifyRecordHandler.h"

@interface CKDModifyShareHandler : CKDModifyRecordHandler

@property (nonatomic) BOOL haveAddedOwnerToShare; // ivar: _haveAddedOwnerToShare
@property (nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade; // ivar: _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade
@property (nonatomic) *_PCSPublicIdentityData selfPPPCSOwnerIdentity; // ivar: _selfPPPCSOwnerIdentity
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKRecordID *shareID;


+(id)modifyHandlerForDeleteWithShareID:(id)arg0 operation:(id)arg1 ;
+(id)modifyHandlerWithShare:(id)arg0 operation:(id)arg1 ;
-(BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg0 ;
-(BOOL)_cleanPublicPCSforShareWithError:(*id)arg0 ;
-(BOOL)_modifyRoleForParticipant:(id)arg0 invitedPCS:(struct _OpaquePCSShareProtection *)arg1 shareeIdentities:(id)arg2 error:(*id)arg3 ;
-(BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(BOOL)_serializePCSDataForShareWithError:(*id)arg0 ;
-(BOOL)_updateSharePublicPCSWithError:(*id)arg0 ;
-(BOOL)isCloudDocsContainer;
-(BOOL)isShare;
-(NSUInteger)invitedPCSPermissionForParticipant:(id)arg0 ;
-(NSUInteger)serviceType;
-(id)_createNewSharePCSDataWithError:(*id)arg0 ;
-(id)_ensurePrivateParticipant:(id)arg0 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)_handleSharePCSData:(id)arg0 zonePCSData:(id)arg1 ;
-(id)_publicKeyForParticipant:(id)arg0 error:(*id)arg1 ;
-(id)_removePrivateParticipant:(id)arg0 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)_removePublicKey:(id)arg0 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg0 zonePCSData:(id)arg1 ;
-(id)sideEffectRecordIDs;
-(struct _PCSPublicIdentityData *)createPublicIdentityFromPublicKeyForParticipant:(id)arg0 error:(*id)arg1 ;
-(void)_addPublicKeyToSelfParticipant;
-(void)_alignParticipantPermissions;
-(void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id)arg0 ;
-(void)_fetchSharePCSData;
-(void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg0 error:(id)arg1 ;
-(void)_setupParticipantsProtectionInfos;
-(void)clearProtectionDataForRecord;
-(void)dealloc;
-(void)fetchSharePCSData;
-(void)noteSideEffectRecordAbsent:(id)arg0 ;
-(void)noteSideEffectRecordPendingDelete:(id)arg0 ;
-(void)noteSideEffectRecordPendingModify:(id)arg0 ;
-(void)prepareForSave;
-(void)savePCSDataToCache;
-(void)setServerRecord:(id)arg0 ;
-(void)updateParticipantsForFetchedShare:(id)arg0 error:(id)arg1 ;


@end


#endif