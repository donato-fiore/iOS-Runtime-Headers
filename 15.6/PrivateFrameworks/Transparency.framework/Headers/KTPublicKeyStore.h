// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTPUBLICKEYSTORE_H
#define KTPUBLICKEYSTORE_H

@class NSMutableDictionary, NSDictionary, NSArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "KTApplicationPublicKeyStore.h"

@interface KTPublicKeyStore : NSObject

@property (retain) NSMutableDictionary *_applicationKeyStores; // ivar: __applicationKeyStores
@property (readonly) NSDictionary *applicationKeyStores;
@property (retain) NSArray *applications; // ivar: _applications
@property (retain) NSObject<OS_dispatch_group> *configureGroup; // ivar: _configureGroup
@property (retain) NSObject<OS_dispatch_queue> *configureQueue; // ivar: _configureQueue
@property BOOL forceRefresh; // ivar: _forceRefresh
@property (readonly) BOOL ready;
@property (retain) KTApplicationPublicKeyStore *tltKeyStore; // ivar: _tltKeyStore


-(BOOL)clearDiskApplicationKeyStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureWithDisk:(id)arg0 contextStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasApplicationPublicKeyStoreOnDisk:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveDiskApplicationKeyStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)writePublicKeyStoreToDisk:(id)arg0 error:(*id)arg1 ;
-(id)copyKeyStoreState;
-(id)copyMetadata;
-(id)createApplicationKeyStore:(id)arg0 keyStoreData:(id)arg1 dataStore:(id)arg2 contextStore:(id)arg3 error:(*id)arg4 ;
-(id)createApplicationKeyStore:(id)arg0 keyStoreResponse:(id)arg1 dataStore:(id)arg2 contextStore:(id)arg3 error:(*id)arg4 ;
-(id)initWithDataStore:(id)arg0 contextStore:(id)arg1 ;
-(id)keyStoreFileName;
-(id)readPublicKeyStoreFromDisk:(*id)arg0 ;
-(void)clearApplicationState:(id)arg0 error:(*id)arg1 ;
// -(void)configureWithClient:(id)arg0 dataStore:(id)arg1 contextStore:(id)arg2 applicationHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(void)configureWithClient:(id)arg0 ignoreCachedKeys:(BOOL)arg1 dataStore:(id)arg2 contextStore:(id)arg3 applicationHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(void)fetchKeyStore:(id)arg0 application:(id)arg1 contextStore:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateTLTKeyStoreWithApplicationKeyStore:(id)arg0 ;


@end


#endif