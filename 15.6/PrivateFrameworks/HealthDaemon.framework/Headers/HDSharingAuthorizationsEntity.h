// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSHARINGAUTHORIZATIONSENTITY_H
#define HDSHARINGAUTHORIZATIONSENTITY_H



#import "HDHealthEntity.h"

@interface HDSharingAuthorizationsEntity : HDHealthEntity



+(BOOL)addSharingAuthorizations:(id)arg0 forRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)deleteAllMarkedSharingAuthorizationsWithTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteAllSharingAuthorizationsForRecipientIdentifier:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteSharingAuthorizations:(id)arg0 recipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)insertOrReplaceWithRecipientIdentifier:(id)arg0 sharingAuthorizations:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)markSharingAuthorizationsForDeletion:(id)arg0 recipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)recipientIdentifiersForSharingAuthorization:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)sharingAuthorizationsForRecipientIdentifier:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)sharingAuthorizationsForRecipientIdentifier:(id)arg0 databaseTransaction:(id)arg1 includeMarkedForDeletion:(BOOL)arg2 error:(*id)arg3 ;
+(id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif