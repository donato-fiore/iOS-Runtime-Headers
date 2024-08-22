// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCLOUDHISTORYMERGEOPERATION_H
#define WBSCLOUDHISTORYMERGEOPERATION_H

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue, WBSHistoryServiceDatabaseProtocol;

#import <Foundation/Foundation.h>

#import "WBSCloudHistoryFetchResult.h"

@interface WBSCloudHistoryMergeOperation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSHistoryServiceDatabaseProtocol> *_database;
    WBSCloudHistoryFetchResult *_fetchResult;
    BOOL _mergeStarted;
    NSMutableDictionary *_visitsByVisitIdentifiers;
    NSMutableSet *_redirectChainEarliestVisits;
    NSSet *_tombstones;
    NSMutableDictionary *_tombstonesByURLString;
    NSSet *_existingVisits;
    NSSet *_redirectChainSourceVisits;
}




-(id)initWithDatabase:(id)arg0 fetchResult:(id)arg1 ;
-(void)_buildRedirectChains;
-(void)_buildVisitsByVisitIdentifiersMap;
-(void)_filterVisitsByTombstones;
-(void)_loadTombstonesWithCompletion:(id)arg0 ;
-(void)_lookUpExistingItemsWithCompletion:(id)arg0 ;
-(void)_lookupRedirectChainSourcesWithCompletion:(id)arg0 ;
-(void)_mergeVisitsWithCompletion:(id)arg0 ;
-(void)_removeDuplicateVisits;
-(void)_replayAndAddTombstones:(id)arg0 ;
-(void)_updateClientVersions;
-(void)mergeWithCompletion:(id)arg0 ;


@end


#endif