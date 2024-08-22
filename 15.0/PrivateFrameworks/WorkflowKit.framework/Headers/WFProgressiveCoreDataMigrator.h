// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPROGRESSIVECOREDATAMIGRATOR_H
#define WFPROGRESSIVECOREDATAMIGRATOR_H


#import <Foundation/Foundation.h>


@interface WFProgressiveCoreDataMigrator : NSObject



+(BOOL)migrateDatabaseAtPersistentStoreDescription:(id)arg0 error:(*id)arg1 ;
+(id)customModificationsStepForSchemaWithIdentifier:(id)arg0 ;


@end


#endif