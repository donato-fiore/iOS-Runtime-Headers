// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBDATAPROVIDERMANAGER_H
#define BBDATAPROVIDERMANAGER_H

@class NSMutableDictionary, NSString;
@protocol BBDataProviderStoreDelegate, BBDataProviderManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BBLocalDataProviderStore.h"
#import "BBRemoteDataProviderConnectionResolver.h"

@interface BBDataProviderManager : NSObject <BBDataProviderStoreDelegate>

 {
    id<BBDataProviderManagerDelegate> *_delegate;
    BBLocalDataProviderStore *_localDataProviderStore;
    BBRemoteDataProviderConnectionResolver *_remoteDataProviderResolver;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadQueueSuspended;
    NSObject<OS_dispatch_queue> *_loadDataProviderQueue;
    NSMutableDictionary *_parentFactoriesBySectionID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_configureDataProvider:(id)arg0 performMigration:(BOOL)arg1 ;
-(id)_configureSectionInfo:(id)arg0 forDataProvider:(id)arg1 ;
-(id)_queue_dataProvidersForUniversalSectionID:(id)arg0 ;
-(id)_queue_getSectionInfoForSectionID:(id)arg0 ;
-(id)dataProviderForSectionID:(id)arg0 ;
-(id)debugDescriptionWithChildren:(NSUInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)localSectionIdentifiersFromDismissalSectionIdentifer:(id)arg0 ;
-(id)parentSectionDataProviderFactoryForSectionID:(id)arg0 ;
-(id)rebuildSectionInfo:(id)arg0 forSectionID:(id)arg1 ;
-(id)universalSectionIDForSectionID:(id)arg0 ;
-(void)dataProviderStore:(id)arg0 didAddDataProvider:(id)arg1 performMigration:(BOOL)arg2 completion:(id)arg3 ;
-(void)dataProviderStore:(id)arg0 didAddParentSectionFactory:(id)arg1 ;
-(void)dataProviderStore:(id)arg0 didRemoveDataProvider:(id)arg1 ;
-(void)dealloc;
-(void)loadAllDataProvidersAndPerformMigration:(BOOL)arg0 ;
-(void)noteSettingsChanged:(id)arg0 forSectionID:(id)arg1 ;
-(void)performBlockOnDataProviders:(id)arg0 ;
-(void)reloadIdentityForSectionID:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif