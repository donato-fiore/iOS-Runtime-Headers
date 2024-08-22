// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOREDATACHANGETRACKER_H
#define AVTCOREDATACHANGETRACKER_H

@protocol AVTAvatarRecordChangeTracker, AVTCoreDataPersistentStoreConfiguration, AVTUILogger, AVTAvatarManagedRecordTransformer;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"

@interface AVTCoreDataChangeTracker : NSObject <AVTAvatarRecordChangeTracker>



@property (readonly, nonatomic) NSObject<AVTCoreDataPersistentStoreConfiguration> *configuration; // ivar: _configuration
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<AVTAvatarManagedRecordTransformer> *recordTransformer; // ivar: _recordTransformer


+(id)tokenFileURLForLocation:(id)arg0 ;
// -(BOOL)processChangeTransactionsWithChangeTokenLocation:(id)arg0 handler:(id)arg1 error:(unk)arg2  ;
-(BOOL)saveToken:(id)arg0 location:(id)arg1 error:(*id)arg2 ;
-(id)currentHistoryTokenForLocation:(id)arg0 ;
// -(id)enumerateChangesAfterToken:(id)arg0 managedObjectContext:(id)arg1 changesHandler:(id)arg2 error:(unk)arg3  ;
-(id)initWithConfiguration:(id)arg0 environment:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 recordTransformer:(id)arg1 environment:(id)arg2 ;
-(id)recordIdentifierForChange:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)trackerChangesFromPersistentChanges:(id)arg0 managedObjectContext:(id)arg1 ;


@end


#endif