// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HCDATABASEMANAGER_H
#define HCDATABASEMANAGER_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}


@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext


-(BOOL)saveIfPossible;
-(id)apsConnectionMachServiceName;
-(id)cloudKitContainer;
-(id)containerIdentifier;
-(id)databaseFilePath;
-(id)init;
-(id)managedObjectModelName;
-(void)contentDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)logMessage:(id)arg0 ;
-(void)setupDatabase;
-(void)storesWillChange:(id)arg0 ;


@end


#endif