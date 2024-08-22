// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPERSISTENTCONTAINER_H
#define NSPERSISTENTCONTAINER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSPersistentStoreCoordinator.h"
#import "NSManagedObjectContext.h"

@interface NSPersistentContainer : NSObject {
    NSArray *_storeDescriptions;
}


@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _storeCoordinator
@property (copy) NSArray *persistentStoreDescriptions;
@property (readonly) NSManagedObjectContext *viewContext; // ivar: _viewContext


+(Class)persistentStoreDescriptionClass;
+(id)_newModelForName:(id)arg0 ;
+(id)defaultDirectoryURL;
+(id)persistentContainerUsingCachedModelWithPath:(id)arg0 ;
+(id)persistentContainerWithName:(id)arg0 ;
+(id)persistentContainerWithName:(id)arg0 managedObjectModel:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg0 ;
+(id)persistentContainerWithPath:(id)arg0 managedObjectModel:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg0 modelNamed:(id)arg1 ;
-(BOOL)load:(*id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 managedObjectModel:(id)arg1 ;
-(id)newBackgroundContext;
-(void)_loadStoreDescriptions:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadPersistentStoresWithCompletionHandler:(id)arg0 ;
-(void)performBackgroundTask:(id)arg0 ;


@end


#endif