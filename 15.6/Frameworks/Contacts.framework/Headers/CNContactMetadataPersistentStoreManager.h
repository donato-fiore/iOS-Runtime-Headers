// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTMETADATAPERSISTENTSTOREMANAGER_H
#define CNCONTACTMETADATAPERSISTENTSTOREMANAGER_H

@class NSPersistentContainer, NSURL;

#import <Foundation/Foundation.h>


@interface CNContactMetadataPersistentStoreManager : NSObject

@property (readonly, nonatomic) NSPersistentContainer *container; // ivar: _container
@property (readonly, nonatomic) NSURL *storeLocation; // ivar: _storeLocation


+(id)createModel;
+(id)createPersistentContainer;
+(id)currentManagedObjectModel;
+(id)defaultStoreLocation;
+(id)os_log;
-(BOOL)createStoreDirectoryIfNeeded:(*id)arg0 ;
// -(BOOL)performWorkWithManagedObjectContext:(id)arg0 error:(unk)arg1  ;
-(BOOL)setupIfNeeded:(*id)arg0 ;
-(id)createManagedObjectContext;
-(id)init;
-(id)initWithStoreLocation:(id)arg0 ;
-(id)persistentStoreCoordinator;
-(id)storeDescription;


@end


#endif