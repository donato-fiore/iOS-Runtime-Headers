// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMODELMIGRATIONACTIONUTILITY_H
#define PLMODELMIGRATIONACTIONUTILITY_H


#import <Foundation/Foundation.h>


@interface PLModelMigrationActionUtility : NSObject



+(NSInteger)removeFromDuplicatesWithAction:(id)arg0 managedObjectContext:(id)arg1 fetchRequest:(id)arg2 requiresTokenReset:(BOOL)arg3 error:(*id)arg4 ;
+(NSInteger)removeOrphanedObjectsWithAction:(id)arg0 managedObjectContext:(id)arg1 fetchRequest:(id)arg2 error:(*id)arg3 ;
+(NSInteger)resetDuplicateProcessingWithAction:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
+(NSInteger)updateExtendedAttributesWithAction:(id)arg0 managedObjectContext:(id)arg1 fetchRequest:(id)arg2 useObjectIDResumeMarker:(BOOL)arg3 error:(*id)arg4 ;


@end


#endif