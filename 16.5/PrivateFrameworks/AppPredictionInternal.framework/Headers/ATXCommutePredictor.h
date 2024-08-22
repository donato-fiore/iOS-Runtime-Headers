// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCOMMUTEPREDICTOR_H
#define ATXCOMMUTEPREDICTOR_H

@class NSString;
@protocol ATXCachedTransitionPredictorProtocol, ATXLocationManagerProtocol;

#import <Foundation/Foundation.h>

#import "ATXPredictedTransitionsCache.h"

@interface ATXCommutePredictor : NSObject <ATXCachedTransitionPredictorProtocol>

 {
    ATXPredictedTransitionsCache *_cache;
    id<ATXLocationManagerProtocol> *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getNextTransitionOnActivity:(id)arg0 ;
-(id)init;
-(id)initWithTransitionsCache:(id)arg0 locationManager:(id)arg1 ;
-(void)prewarmOnActivity:(id)arg0 ;


@end


#endif