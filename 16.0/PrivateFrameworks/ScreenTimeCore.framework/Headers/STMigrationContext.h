// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMIGRATIONCONTEXT_H
#define STMIGRATIONCONTEXT_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface STMigrationContext : NSObject {
    NSMutableDictionary *_uniqueIdentifierToCloudObjectID;
    NSMutableDictionary *_uniqueIdentifierToLocalObjectID;
    NSMutableSet *_deletedObjectIDs;
    NSMutableSet *_filledObjectIDs;
}




-(BOOL)deleteLocalObjectWithUniqueIdentifier:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)initializeCachesWithManagedObjectContext:(id)arg0 withCloudStore:(id)arg1 andLocalStore:(id)arg2 error:(*id)arg3 ;
-(id)deleteCloudObjectWithUniqueIdentifier:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)updateCloudObjectWithUniqueIdentifier:(id)arg0 dictionary:(id)arg1 managedObjectContext:(id)arg2 error:(*id)arg3 ;


@end


#endif