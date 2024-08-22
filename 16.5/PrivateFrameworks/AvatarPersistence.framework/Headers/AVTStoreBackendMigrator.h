// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTOREBACKENDMIGRATOR_H
#define AVTSTOREBACKENDMIGRATOR_H

@class NSString;
@protocol AVTStoreBackendMigrator, AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"

@interface AVTStoreBackendMigrator : NSObject <AVTStoreBackendMigrator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(BOOL)migrateContentFromSource:(id)arg0 toDestination:(id)arg1 error:(*id)arg2 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)updatedRecordsForMigratingRecords:(id)arg0 source:(id)arg1 destinationBackend:(id)arg2 error:(*id)arg3 ;


@end


#endif