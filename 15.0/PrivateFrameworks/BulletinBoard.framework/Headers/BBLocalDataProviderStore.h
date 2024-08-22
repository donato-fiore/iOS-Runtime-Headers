// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBLOCALDATAPROVIDERSTORE_H
#define BBLOCALDATAPROVIDERSTORE_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol BBLocalDataProviderFactoryStore, BBDataProviderStore, BBDataProviderStoreDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BBLocalDataProviderStore : NSObject <BBLocalDataProviderFactoryStore, BBDataProviderStore>

 {
    id<BBDataProviderStoreDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableDictionary *dataProvidersBySectionID; // ivar: _dataProvidersBySectionID
@property (retain, nonatomic) NSMutableDictionary *dataProvidersByUniversalSectionID; // ivar: _dataProvidersByUniversalSectionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *localFactories; // ivar: _localFactories
@property (readonly) Class superclass;


+(id)localDataProviderStoreWithDelegate:(id)arg0 dataProviderQueue:(id)arg1 ;
-(id)dataProviderForSectionID:(id)arg0 ;
-(id)dataProvidersForUniversalSectionID:(id)arg0 ;
-(id)debugDescriptionWithChildren:(NSUInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 dataProviderQueue:(id)arg1 ;
-(void)_addDataProviderClass:(Class)arg0 performMigration:(BOOL)arg1 ;
-(void)_addLocalDataProviderFactoryOfClass:(Class)arg0 ;
-(void)_loadDataProviderPluginBundle:(id)arg0 performMigration:(BOOL)arg1 ;
-(void)_queue_addDataProvider:(id)arg0 performMigration:(BOOL)arg1 ;
-(void)_queue_removeDataProvider:(id)arg0 ;
-(void)addDataProvider:(id)arg0 performMigration:(BOOL)arg1 ;
-(void)addParentSectionInfo:(id)arg0 displayName:(id)arg1 icon:(id)arg2 ;
-(void)addParentSectionInfo:(id)arg0 displayName:(id)arg1 icon:(id)arg2 universalSectionID:(id)arg3 ;
-(void)loadAllDataProvidersAndPerformMigration:(BOOL)arg0 ;
-(void)performBlockOnDataProviders:(id)arg0 ;
-(void)removeDataProvider:(id)arg0 ;
-(void)removeDataProviderWithSectionID:(id)arg0 ;


@end


#endif