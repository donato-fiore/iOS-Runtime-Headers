// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDATABASE_H
#define SLDATABASE_H

@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

#import <Foundation/Foundation.h>


@interface SLDatabase : NSObject {
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}




-(BOOL)save:(*id)arg0 ;
-(id)_managedObjectModel;
-(id)_persistentStoreCoordinator;
-(id)fetchObjectsForEntityNamed:(id)arg0 withPredicate:(id)arg1 ;
-(id)initWithStoreName:(id)arg0 modelPath:(id)arg1 ;
-(id)newObjectForEntityNamed:(id)arg0 ;
-(void)_removeFilesAtURL:(id)arg0 forStoreCoordinator:(id)arg1 ;
-(void)_setUpManagedObjectContext;


@end


#endif