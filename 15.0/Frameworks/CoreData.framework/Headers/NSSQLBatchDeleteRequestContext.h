// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLBATCHDELETEREQUESTCONTEXT_H
#define NSSQLBATCHDELETEREQUESTCONTEXT_H

@class NSArray, NSString;


#import "NSSQLStoreRequestContext.h"
#import "NSFetchRequest.h"
#import "NSSQLFetchRequestContext.h"
#import "NSBatchDeleteRequest.h"

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequestForObjectsToDelete;
    NSArray *_deleteStatements;
    NSArray *_deletedObjectIDs;
    NSSQLFetchRequestContext *_fetchContext;
    NSArray *_externalDataReferenceTriggerStatements;
    NSString *_tempTableName;
    NSArray *_externalDataReferencesToDelete;
    NSArray *_fileBackedFuturesToDelete;
}


@property (readonly, nonatomic) NSBatchDeleteRequest *request;


-(BOOL)executeRequestCore:(*id)arg0 ;
-(BOOL)isWritingRequest;
-(void)dealloc;
-(void)executePrologue;


@end


#endif