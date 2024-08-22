// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITHISTORYANALYZERCONTEXT_H
#define PFCLOUDKITHISTORYANALYZERCONTEXT_H

@class NSSet, NSMutableSet, NSMutableDictionary;


#import "PFHistoryAnalyzerContext.h"
#import "NSManagedObjectContext.h"
#import "NSSQLCore.h"

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {
    NSManagedObjectContext *_managedObjectContext;
    NSSet *_configuredEntityNames;
    NSMutableSet *_resetChangedObjectIDs;
    NSMutableDictionary *_entityIDToChangedPrimaryKeySet;
    NSSQLCore *_store;
}




-(BOOL)finishProcessing:(*id)arg0 ;
-(BOOL)processChange:(id)arg0 error:(*id)arg1 ;
-(BOOL)reset:(*id)arg0 ;
-(BOOL)resetStateForObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchSortedStates:(*id)arg0 ;
-(id)initWithOptions:(id)arg0 managedObjectContext:(id)arg1 store:(id)arg2 ;
-(id)newAnalyzerStateForChange:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif