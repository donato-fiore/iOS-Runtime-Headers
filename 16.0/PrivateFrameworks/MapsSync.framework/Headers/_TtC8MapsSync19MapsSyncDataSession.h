// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC19MAPSSYNCDATASESSION_H
#define _TTC8MAPSSYNC19MAPSSYNCDATASESSION_H

@class NSPersistentContainer, NSString;

#import <Foundation/Foundation.h>


@interface _TtC8MapsSync19MapsSyncDataSession : NSObject {
    ? _dataContainer;
    ? _containerQueue;
    ? _storeLoadInterval;
    ? _readContext;
    ? _backgroundReadContext;
    ? _writeContext;
    ? _localOnly;
    ? _loadLock;
    ? _hasLoadedStores;
    ? _historyAnalyzer;
    ? _loadHandlers;
    ? _persistentContainer;
    ? _lock;
    ? _pendingReadContextFetches;
    ? _pendingBackgroundReadContextFetches;
    ? _pendingWriteContextFetches;
    ? _contextFetchLock;
}


@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, readonly) NSString *typeString;


+(BOOL)isInMemoryOnly;
+(BOOL)shouldMoveStoreAsideWithError:(id)arg0 ;
+(BOOL)shouldRetryStoreLoadAfterErrorWithError:(id)arg0 ;
+(BOOL)useInMemoryOnly;
+(id)defaultLocalOnlySession;
+(id)defaultSession;
+(void)disableNotifications;
+(void)enableNotifications;
+(void)reset;
+(void)resetWithCompletion:(id)arg0 ;
+(void)resumeNotifications;
+(void)setUseInMemoryOnly:(BOOL)arg0 ;
+(void)startXPCServer;
+(void)suppressNotifications;
+(void)whenReadyWithCompletion:(id)arg0 ;
-(BOOL)hasLoadedStore;
-(id)init;
-(id)initWithPersisted:(BOOL)arg0 deviceLocal:(BOOL)arg1 ;
-(id)unsafeGetBackgroundReadContextAndReturnError:(*id)arg0 ;
-(id)unsafeGetReadContextAndReturnError:(*id)arg0 ;
-(id)unsafeGetWriteContextAndReturnError:(*id)arg0 ;
-(void)checkStoreLoadedWithCompletion:(id)arg0 ;
-(void)contextDidSaveWithNotification:(id)arg0 ;
-(void)deleteAll;
-(void)getBackgroundReadContextWithCompletion:(id)arg0 ;
-(void)getReadContextWithCompletion:(id)arg0 ;
-(void)getWriteContextWithCompletion:(id)arg0 ;
-(void)loadCoreDataStoresFor:(id)arg0 completion:(id)arg1 ;
-(void)loadStoresWithCompletion:(id)arg0 ;
-(void)remoteChangeWithNotification:(id)arg0 ;
-(void)resetInMemoryStore;
-(void)resetInMemoryStoreWithCompletion:(id)arg0 ;
-(void)whenReadyWithCompletion:(id)arg0 ;


@end


#endif