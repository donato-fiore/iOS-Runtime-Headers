// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSHARINGRELATIONSHIPENTITY_H
#define HDSHARINGRELATIONSHIPENTITY_H



#import "HDHealthEntity.h"

@interface HDSharingRelationshipEntity : HDHealthEntity



+(BOOL)deleteEntityWithRecipientIdentifier:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)entityWithRecipientIdentifier:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)insertOrReplaceWithRecipientIdentifier:(id)arg0 dateModified:(id)arg1 syncProvenance:(NSInteger)arg2 databaseTransaction:(id)arg3 error:(*id)arg4 ;
+(id)propertyForSyncProvenance;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)setDateModified:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
-(id)dateModifiedInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)recipientIdentifierInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif