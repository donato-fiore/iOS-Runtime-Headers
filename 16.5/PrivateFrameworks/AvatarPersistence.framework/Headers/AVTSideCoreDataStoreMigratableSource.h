// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSIDECOREDATASTOREMIGRATABLESOURCE_H
#define AVTSIDECOREDATASTOREMIGRATABLESOURCE_H

@class NSString;
@protocol AVTStoreBackendMigratableSource, AVTCoreDataPersistentStoreLocalConfiguration;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"

@interface AVTSideCoreDataStoreMigratableSource : NSObject <AVTStoreBackendMigratableSource>



@property (readonly, nonatomic) NSObject<AVTCoreDataPersistentStoreLocalConfiguration> *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)finalizeMigration:(*id)arg0 ;
-(BOOL)migrationNeeded;
-(id)createSourceBackend;
-(id)initWithConfiguration:(id)arg0 environment:(id)arg1 ;
-(id)migratedRecordFromRecord:(id)arg0 index:(NSUInteger)arg1 totalCount:(NSUInteger)arg2 ;


@end


#endif