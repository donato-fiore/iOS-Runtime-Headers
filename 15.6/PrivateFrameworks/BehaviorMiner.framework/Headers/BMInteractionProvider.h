// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMINTERACTIONPROVIDER_H
#define BMINTERACTIONPROVIDER_H

@class _CDInteractionStore;

#import <Foundation/Foundation.h>

#import "BMMiningTaskConfig.h"

@interface BMInteractionProvider : NSObject

@property (retain) BMMiningTaskConfig *bmMiningTaskConfig; // ivar: _bmMiningTaskConfig
@property (retain, nonatomic) id *contextKitClient; // ivar: _contextKitClient
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore


-(id)batchFetchedPhotoSuggestionsForInteractions:(id)arg0 ;
-(id)getResultsForRequest:(id)arg0 ;
-(id)init;
-(id)initWithBMMiningTaskConfig:(id)arg0 ;
-(id)initWithInteractionStore:(id)arg0 ;
-(id)initWithInteractionStore:(id)arg0 bmMiningTaskConfig:(id)arg1 ;
-(id)interactionEventsForTypes:(id)arg0 error:(*id)arg1 ;


@end


#endif