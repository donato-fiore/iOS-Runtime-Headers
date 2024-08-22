// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSCONFIGPERSISTEDSTORE_H
#define DRSCONFIGPERSISTEDSTORE_H

@class NSPersistentContainer, NSManagedObjectContext, NSString;

#import <Foundation/Foundation.h>

#import "DRSTaskingCloudKitHelper.h"

@interface DRSConfigPersistedStore : NSObject

@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper; // ivar: _cloudKitHelper
@property (readonly, nonatomic) NSPersistentContainer *container; // ivar: _container
@property (readonly, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL isReadOnly; // ivar: _isReadOnly
@property (readonly, nonatomic) NSString *workingDirectory; // ivar: _workingDirectory


-(BOOL)addConfigMetdata:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)applyWaitingConfigWithUUID:(id)arg0 appliedDate:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)clearStoreWithErrorOut:(*id)arg0 ;
-(BOOL)completeConfigWithUUID:(id)arg0 completedDate:(id)arg1 completionType:(NSUInteger)arg2 completionDescription:(id)arg3 errorOut:(*id)arg4 ;
-(BOOL)updateCloudChannelConfig:(id)arg0 errorOut:(*id)arg1 ;
-(NSUInteger)_countForFetchRequest:(id)arg0 withPredicate:(id)arg1 fetchLimit:(NSUInteger)arg2 errorOut:(*id)arg3 ;
-(NSUInteger)configCountForPredicate:(id)arg0 fetchLimit:(NSUInteger)arg1 withErrorOut:(*id)arg2 ;
-(NSUInteger)metadataCountForPredicate:(id)arg0 fetchLimit:(NSUInteger)arg1 withErrorOut:(*id)arg2 ;
-(id)_ON_MOC_cloudChannelConfigMOs;
-(id)cloudChannelConfig;
-(id)configMetadataForUUID:(id)arg0 errorOut:(*id)arg1 ;
-(id)configMetadatasForPredicate:(id)arg0 sortDescriptors:(id)arg1 fetchLimit:(NSUInteger)arg2 errorOut:(*id)arg3 ;
-(id)initWithWorkingDirectory:(id)arg0 isReadOnly:(BOOL)arg1 cloudKitHelper:(id)arg2 errorOut:(*id)arg3 ;
-(void)_ON_MOC_deleteCloudChannelConfigMOs:(id)arg0 ;


@end


#endif