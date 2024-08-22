// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESCALDBHELPER_H
#define ESCALDBHELPER_H

@class NSString, NSMutableDictionary, NSCountedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ESCalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _initOptions;
    NSString *_cachedMainDatabasePath;
    NSMutableDictionary *_containerPathsByAccountID;
    NSMutableDictionary *_containerPathsByAuxDatabaseID;
    NSMutableDictionary *_databasesByContainerPath;
    NSCountedSet *_connectionCountsByPath;
}


@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier


+(id)_canonicalizePath:(id)arg0 ;
+(id)containerProvider;
+(id)mainDatabasePath;
+(void)setMainDatabasePath:(id)arg0 containerProvider:(id)arg1 ;
-(?)_cachedDatabaseForAuxDatabaseRefpath;
-(?)_closeDatabasepath;
-(?)_openDatabaseForPath:(?)arg0 clientIDcreatedDatabaseToConsume;
-(?)_pathForAccountIDcreatedDatabase;
-(?)_registerForCalendarYieldNotificationsForDB;
-(?)_saveDatabase:(?)arg0 pathfushCaches;
-(?)databaseForAccountID;
-(?)databaseForAuxDatabaseRef;
-(BOOL)closeDatabaseForAccountID:(id)arg0 save:(BOOL)arg1 ;
-(BOOL)closeDatabaseForAuxDatabaseRef:(*void)arg0 save:(BOOL)arg1 ;
-(BOOL)saveDatabaseForAccountID:(id)arg0 flushCaches:(BOOL)arg1 ;
-(BOOL)saveDatabaseForAuxDatabaseRef:(*void)arg0 flushCaches:(BOOL)arg1 ;
-(id)_mainDatabasePath;
-(id)allOpenDatabases;
-(id)initWithDatabaseInitOptions:(int)arg0 ;
-(struct CalDatabase *)_cachedDatabaseForAccountID:(id)arg0 path:(*id)arg1 ;
-(void)openDatabaseForAccountID:(id)arg0 clientID:(id)arg1 ;
-(void)openDatabaseForAuxDatabaseRef:(*void)arg0 clientID:(id)arg1 ;


@end


#endif