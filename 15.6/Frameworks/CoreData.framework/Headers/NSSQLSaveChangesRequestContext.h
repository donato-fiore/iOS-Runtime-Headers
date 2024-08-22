// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLSAVECHANGESREQUESTCONTEXT_H
#define NSSQLSAVECHANGESREQUESTCONTEXT_H

@class NSDictionary, NSArray, NSSet, NSMutableDictionary, NSString;


#import "NSSQLStoreRequestContext.h"
#import "NSSQLSavePlan.h"
#import "NSFaultHandler.h"
#import "NSSQLRowCache.h"

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {
    NSDictionary *_metadataToWrite;
    NSSQLSavePlan *_savePlan;
    NSFaultHandler *_faultHandler;
    NSArray *_objectIDsInsertUpdatedToPruneDATrigger;
    NSArray *_objectIDsUpdatedToPruneDATrigger;
    NSSet *_objectIDsToPruneTrigger;
    NSMutableDictionary *_originalCachedRows;
    NSMutableDictionary *_updateMasksForHistoryTracking;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLRowCache *_primaryRowCache;
    NSSQLRowCache *_contextGenerationRowCache;
}




-(BOOL)executeRequestCore:(*id)arg0 ;
-(BOOL)isWritingRequest;
-(id)initWithRequest:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;
-(id)rowCache;
-(void)dealloc;
-(void)executeEpilogue;
-(void)executePrologue;


@end


#endif