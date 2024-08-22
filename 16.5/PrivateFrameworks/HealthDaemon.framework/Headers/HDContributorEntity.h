// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCONTRIBUTORENTITY_H
#define HDCONTRIBUTORENTITY_H



#import "HDHealthEntity.h"

@interface HDContributorEntity : HDHealthEntity



+(BOOL)deleteContributorWithUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)contributorEntityForNoContributorWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)contributorEntityWithUUID:(id)arg0 profile:(id)arg1 includeDeleted:(BOOL)arg2 error:(*id)arg3 ;
+(id)contributorForReference:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)externalReferenceForContributorReference:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)arg0 syncIdentity:(NSInteger)arg1 error:(*id)arg2 ;
+(id)insertPrimaryUserWithAppleID:(id)arg0 callerID:(id)arg1 syncIdentity:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(id)insertWithUUID:(id)arg0 appleID:(id)arg1 callerID:(id)arg2 primaryUser:(BOOL)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(id)insertWithUUID:(id)arg0 appleID:(id)arg1 callerID:(id)arg2 primaryUser:(BOOL)arg3 syncProvenance:(NSInteger)arg4 syncIdentity:(NSInteger)arg5 transaction:(id)arg6 error:(*id)arg7 ;
+(id)noneContributorUUID;
+(id)primaryUserContributorInDatabase:(id)arg0 error:(*id)arg1 ;
+(id)primaryUserContributorInProfile:(id)arg0 error:(*id)arg1 ;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncProvenance;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)deletedInProfile:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateAppleID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateCallerID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(id)appleIDInProfile:(id)arg0 error:(*id)arg1 ;
-(id)callerIDInProfile:(id)arg0 error:(*id)arg1 ;
-(id)modificationDateInProfile:(id)arg0 error:(*id)arg1 ;
-(id)syncAnchorInProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif