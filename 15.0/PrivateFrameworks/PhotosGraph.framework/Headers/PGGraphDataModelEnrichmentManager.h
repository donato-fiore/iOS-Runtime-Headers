// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHDATAMODELENRICHMENTMANAGER_H
#define PGGRAPHDATAMODELENRICHMENTMANAGER_H

@class CLSCurationContext, NSArray;
@protocol PGGraphDataModelEnrichmentManagerDelegate;

#import <Foundation/Foundation.h>

#import "PGManager.h"

@interface PGGraphDataModelEnrichmentManager : NSObject

@property (readonly, nonatomic) CLSCurationContext *curationContext; // ivar: _curationContext
@property (weak, nonatomic) NSObject<PGGraphDataModelEnrichmentManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger enrichmentContext; // ivar: _enrichmentContext
@property (readonly, nonatomic) NSArray *enrichmentProcessors; // ivar: _enrichmentProcessors
@property (nonatomic) BOOL forceRun; // ivar: _forceRun
@property (readonly, nonatomic) PGManager *manager; // ivar: _manager


+(id)_allEnrichmentProcessorsWithTailorOptions:(NSUInteger)arg0 ;
+(id)backgroundEnrichmentProcessors;
+(id)enrichmentProcessorsForDataModelEnrichmentContext:(NSUInteger)arg0 ;
+(id)enrichmentProcessorsForDataModelEnrichmentContexts:(id)arg0 ;
+(id)lightWeightEnrichmentProcessors;
+(id)liveUpdateEnrichmentProcessors;
+(id)weeklyEnrichmentProcessors;
-(BOOL)_enrichDataModelWithGraphUpdateInventory:(id)arg0 error:(*id)arg1 progressBlock:(id)arg2 ;
-(BOOL)enrichDataModelForHighlightUUIDs:(id)arg0 withError:(*id)arg1 progressBlock:(id)arg2 ;
-(BOOL)enrichDataModelWithError:(*id)arg0 progressBlock:(id)arg1 ;
-(BOOL)enrichDataModelWithGraphUpdateInventory:(id)arg0 error:(*id)arg1 progressBlock:(id)arg2 ;
-(id)initWithManager:(id)arg0 enrichmentContext:(NSUInteger)arg1 ;
-(id)initWithManager:(id)arg0 enrichmentProcessors:(id)arg1 ;


@end


#endif