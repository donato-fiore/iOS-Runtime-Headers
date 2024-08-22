// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSPOTLIGHTDATASOURCE_H
#define FPSPOTLIGHTDATASOURCE_H

@class NSPredicate, NSString;
@protocol FPSpotlightCollectorObserving, FPCollectionDataSource, OS_dispatch_queue, FPSpotlightDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "FPSpotlightCollectorManager.h"
#import "FPQueryEnumerationSettings.h"
#import "FPSpotlightQueryDescriptor.h"

@interface FPSpotlightDataSource : NSObject <FPSpotlightCollectorObserving, FPCollectionDataSource>

 {
    NSObject<OS_dispatch_queue> *_queue;
    FPSpotlightCollectorManager *_collectorManager;
    FPQueryEnumerationSettings *_enumerationSettings;
    NSPredicate *_predicate;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPSpotlightDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMoreIncoming; // ivar: _hasMoreIncoming
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor; // ivar: _queryDescriptor
@property (readonly) Class superclass;


-(NSUInteger)maximumNumberOfItemsForCollector:(id)arg0 ;
-(id)initWithQueryDescriptor:(id)arg0 predicate:(id)arg1 ;
-(id)itemPredicateForCollector:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateWithError:(id)arg0 ;
-(void)collector:(id)arg0 didEncounterError:(id)arg1 ;
-(void)collector:(id)arg0 didGatherItems:(id)arg1 ;
-(void)collector:(id)arg0 didRemoveItemIDs:(id)arg1 ;
-(void)collector:(id)arg0 didUpdateItems:(id)arg1 ;
-(void)collector:(id)arg0 didUpdateItemsOrigin:(NSUInteger)arg1 ;
-(void)enumerationMightHaveResumed;
-(void)invalidate;
-(void)start;


@end


#endif