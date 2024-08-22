// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDDATABASE_H
#define ACDDATABASE_H

@class NSPersistentStoreCoordinator, NSDictionary, NSURL, NSString;
@protocol ACDDatabaseConnectionDelegate, ACDDatabaseProtocol;

#import <Foundation/Foundation.h>


@interface ACDDatabase : NSObject <ACDDatabaseConnectionDelegate, ACDDatabaseProtocol>

 {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSDictionary *_storeOptions;
}


@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
-(BOOL)_performBackupToURL:(id)arg0 unverifiedBackupURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(*id)arg0 ;
-(BOOL)_shouldResetPersistentStoreAfterError:(id)arg0 ;
-(BOOL)performBackupReturningError:(*id)arg0 ;
-(BOOL)resetReturningError:(*id)arg0 ;
-(BOOL)restoreFromBackupReturningError:(*id)arg0 ;
-(id)_addPersistentStoreWithType:(id)arg0 configuration:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)_backupURL;
-(id)_unverifiedBackupURL;
-(id)createConnection;
-(id)init;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)initWithDatabaseURL:(id)arg0 storeOptions:(id)arg1 ;
-(void)databaseConnection:(id)arg0 encounteredUnrecoverableError:(id)arg1 ;


@end


#endif