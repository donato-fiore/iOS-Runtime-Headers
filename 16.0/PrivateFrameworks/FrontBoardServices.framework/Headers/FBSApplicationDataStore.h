// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSAPPLICATIONDATASTORE_H
#define FBSAPPLICATIONDATASTORE_H

@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

#import <Foundation/Foundation.h>


@interface FBSApplicationDataStore : NSObject {
    id<FBSApplicationDataStoreRepositoryClient> *_client;
    BOOL _clientNeedsCheckin;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleId


+(BOOL)isServerProcess;
+(id)applicationsWithAvailableStores;
+(id)storeForApplication:(id)arg0 ;
+(void)_doWithClassClient:(id)arg0 ;
+(void)_setClassClient:(id)arg0 ;
+(void)setPrefetchedKeys:(id)arg0 ;
+(void)synchronize;
+(void)synchronizeWithCompletion:(id)arg0 ;
-(id)_initWithBundleId:(id)arg0 client:(id)arg1 ;
-(id)_makeSafe:(id)arg0 forType:(Class)arg1 ;
-(id)archivedObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)safeArchivedObjectForKey:(id)arg0 ofType:(Class)arg1 ;
-(id)safeObjectForKey:(id)arg0 ofType:(Class)arg1 ;
-(void)archivedObjectForKey:(id)arg0 withResult:(id)arg1 ;
-(void)dealloc;
-(void)objectForKey:(id)arg0 withResult:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)safeArchivedObjectForKey:(id)arg0 ofType:(Class)arg1 withResult:(id)arg2 ;
-(void)safeObjectForKey:(id)arg0 ofType:(Class)arg1 withResult:(id)arg2 ;
-(void)setArchivedObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif