// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTPUBLICKEYSTORE_H
#define KTPUBLICKEYSTORE_H

@class NSMutableDictionary, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "KTApplicationPublicKeyStore.h"

@interface KTPublicKeyStore : NSObject

@property (retain) NSMutableDictionary *_applicationKeyStores; // ivar: __applicationKeyStores
@property (readonly) NSDictionary *applicationKeyStores;
@property (retain) NSArray *applications; // ivar: _applications
@property BOOL forceRefresh; // ivar: _forceRefresh
@property (readonly) BOOL ready;
@property (retain) KTApplicationPublicKeyStore *tltKeyStore; // ivar: _tltKeyStore


-(BOOL)clearDiskApplicationKeyStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureWithDisk:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasApplicationPublicKeyStoreOnDisk:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveDiskApplicationKeyStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)writePublicKeyStoreToDisk:(id)arg0 error:(*id)arg1 ;
-(id)copyKeyStoreState;
-(id)copyMetadata;
-(id)createApplicationKeyStore:(id)arg0 keyStoreData:(id)arg1 dataStore:(id)arg2 error:(*id)arg3 ;
-(id)createApplicationKeyStore:(id)arg0 keyStoreResponse:(id)arg1 dataStore:(id)arg2 error:(*id)arg3 ;
-(id)initWithDataStore:(id)arg0 ;
-(id)keyStoreFileName;
-(id)readPublicKeyStoreFromDisk:(*id)arg0 ;
-(void)clearApplicationState:(id)arg0 error:(*id)arg1 ;
-(void)configureWithClient:(id)arg0 dataStore:(id)arg1 completionHandler:(id)arg2 ;
-(void)configureWithClient:(id)arg0 ignoreCachedKeys:(BOOL)arg1 dataStore:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchKeyStore:(id)arg0 application:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateTLTKeyStoreWithApplicationKeyStore:(id)arg0 ;


@end


#endif