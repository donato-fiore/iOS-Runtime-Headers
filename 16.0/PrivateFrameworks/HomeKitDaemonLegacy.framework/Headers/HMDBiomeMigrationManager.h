// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBIOMEMIGRATIONMANAGER_H
#define HMDBIOMEMIGRATIONMANAGER_H

@class HMFObject;
@protocol HMDBiomeMigrationManagerDataSource, OS_dispatch_queue;


#import "HMDBiomeEventManager.h"
#import "HMDDuetEventManager.h"

@interface HMDBiomeMigrationManager : HMFObject

@property (readonly) HMDBiomeEventManager *biomeEventManager; // ivar: _biomeEventManager
@property (readonly, weak) NSObject<HMDBiomeMigrationManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) HMDDuetEventManager *duetEventManager; // ivar: _duetEventManager
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithDuetEventManager:(id)arg0 biomeEventManager:(id)arg1 dataSource:(id)arg2 ;
-(void)migrateAllEvents:(id)arg0 ;


@end


#endif