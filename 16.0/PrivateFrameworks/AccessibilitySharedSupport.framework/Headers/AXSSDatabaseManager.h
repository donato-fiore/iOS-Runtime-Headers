// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSDATABASEMANAGER_H
#define AXSSDATABASEMANAGER_H

@class AXDispatchTimer, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface AXSSDatabaseManager : NSObject {
    int _lockNotificationToken;
    BOOL _isScreenedLocked;
    AXDispatchTimer *_identityChangeTimer;
}


@property (readonly, nonatomic) BOOL canSave;
@property (nonatomic) BOOL clientCloudKitSyncs; // ivar: _clientCloudKitSyncs
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext


+(NSInteger)preferredContextType;
+(id)sharedDatabase;
-(BOOL)saveIfPossible:(*id)arg0 ;
-(id)apsConnectionMachServiceName;
-(id)cloudKitContainer;
-(id)cloudObjectFromLocalObjects:(id)arg0 withTable:(id)arg1 andObjectID:(id)arg2 ;
-(id)containerIdentifier;
-(id)databaseFilePath;
-(id)init;
-(id)managedObjectModelName;
-(void)_contentDidUpdate:(id)arg0 ;
-(void)_identityDidChange:(id)arg0 ;
-(void)_storesWillChange:(id)arg0 ;
-(void)dealloc;
-(void)setupDatabase;
-(void)userAuthChanged;


@end


#endif