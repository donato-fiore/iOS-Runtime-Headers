// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFFETCHPLANHEADER_H
#define _PFFETCHPLANHEADER_H


#import <Foundation/Foundation.h>

#import "NSFetchRequest.h"
#import "NSPersistentStore.h"
#import "NSSQLModel.h"
#import "NSSQLEntity.h"
#import "NSManagedObjectContext.h"
#import "NSSQLRowCache.h"

@interface _PFFetchPlanHeader : NSObject {
    NSFetchRequest *fetch_request;
    unsigned int requested_batch_size;
    NSPersistentStore *sql_core;
    NSSQLModel *sql_model;
    NSSQLEntity *statement_entity;
    NSManagedObjectContext *current_context;
    NSSQLRowCache *row_cache;
    *unk entity_for_ek_funptr;
    ? flags;
}






@end


#endif