// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFITEM_H
#define HFITEM_H

@class NAFuture, NSDictionary;

#import <Foundation/Foundation.h>

#import "HFItemManager.h"

@interface HFItem : NSObject

@property (nonatomic) BOOL _debug_isChildItem; // ivar: __debug_isChildItem
@property (weak, nonatomic) HFItemManager *_debug_owningItemManager; // ivar: __debug_owningItemManager
@property (weak, nonatomic) NAFuture *cancellableInFlightUpdateFuture; // ivar: _cancellableInFlightUpdateFuture
@property (retain, nonatomic) NSDictionary *latestResults; // ivar: _latestResults
@property (nonatomic) NSUInteger loadingState; // ivar: _loadingState


-(BOOL)resultsContainRequiredProperties:(id)arg0 ;
-(NSUInteger)_effectiveLoadingStateForSuggestedLoadingState:(NSUInteger)arg0 ;
-(id)_finalOutcomeForSubclassOutcome:(id)arg0 previousResults:(id)arg1 updateOptions:(id)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)updateWithOptions:(id)arg0 ;
-(void)copyLatestResultsFromItem:(id)arg0 ;


@end


#endif