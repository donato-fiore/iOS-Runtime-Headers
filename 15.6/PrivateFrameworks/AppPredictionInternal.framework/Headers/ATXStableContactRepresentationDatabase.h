// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSTABLECONTACTREPRESENTATIONDATABASE_H
#define ATXSTABLECONTACTREPRESENTATIONDATABASE_H



#import "ATXAbstractVersionedDatabase.h"

@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase



-(BOOL)_runMigrationSteps:(id)arg0 ;
-(BOOL)migrate;
-(NSInteger)latestVersion;
-(id)cnContactId:(id)arg0 ;
-(id)deleteAllData;
-(id)init;
-(id)stableContactIdentifier:(id)arg0 ;
-(void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)arg0 stableContactIdentifier:(id)arg1 ;


@end


#endif