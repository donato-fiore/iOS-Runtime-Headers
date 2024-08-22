// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBDATABASEMANAGER_H
#define WEBDATABASEMANAGER_H


#import <Foundation/Foundation.h>


@interface WebDatabaseManager : NSObject



+(id)sharedWebDatabaseManager;
+(void)removeEmptyDatabaseFiles;
+(void)scheduleEmptyDatabaseRemoval;
-(BOOL)deleteDatabase:(id)arg0 withOrigin:(id)arg1 ;
-(BOOL)deleteOrigin:(id)arg0 ;
-(id)databasesWithOrigin:(id)arg0 ;
-(id)detailsForDatabase:(id)arg0 withOrigin:(id)arg1 ;
-(id)init;
-(id)origins;
-(void)deleteAllDatabases;
-(void)deleteAllIndexedDatabases;


@end


#endif