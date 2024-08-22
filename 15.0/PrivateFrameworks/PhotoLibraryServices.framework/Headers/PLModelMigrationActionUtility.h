// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMODELMIGRATIONACTIONUTILITY_H
#define PLMODELMIGRATIONACTIONUTILITY_H


#import <Foundation/Foundation.h>


@interface PLModelMigrationActionUtility : NSObject



+(NSInteger)removeOrphanedObjectsWithAction:(id)arg0 managedObjectContext:(id)arg1 fetchRequest:(id)arg2 error:(*id)arg3 ;
+(NSInteger)updateExtendedAttributesWithAction:(id)arg0 managedObjectContext:(id)arg1 fetchRequest:(id)arg2 error:(*id)arg3 ;


@end


#endif