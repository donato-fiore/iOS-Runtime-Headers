// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCCONTEXT_H
#define APPCCONTEXT_H

@class NSDate;
@protocol APPCPromotableContext, APPCPromotableUIContext, APPCMetricRegister;


#import "APPCBaseContext.h"

@interface APPCContext : APPCBaseContext <APPCPromotableContext, APPCPromotableUIContext, APPCMetricRegister>

 {
    ? inventoryLock;
    ? inventory;
    ? placeholdersLock;
    ? placeholders;
    ? lastError;
    ? requester;
    ? blacklistEvaluator;
    ? newsContext;
    ? appStoreContext;
    ? contextQueue;
    ? prefetchTimestamp;
    ? limit;
    ? fetchingLock;
    ? fetching;
    ? waitingLock;
    ? waiting;
    ? prefetchLock;
    ? newContentArrivedHandlers;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, copy) NSDate *prefetchTimestamp;


-(id)initWithMaxSize:(struct CGSize )arg0 requestedAd:(id)arg1 current:(id)arg2 adjacent:(id)arg3 ;
-(id)initWithMaxSize:(struct CGSize )arg0 requestedAd:(id)arg1 current:(id)arg2 adjacent:(id)arg3 newsContext:(id)arg4 ;
-(id)initWithMaxSize:(struct CGSize )arg0 requestedAd:(id)arg1 current:(id)arg2 next:(id)arg3 ;
-(id)initWithMaxSize:(struct CGSize )arg0 requestedAd:(id)arg1 current:(id)arg2 next:(id)arg3 newsContext:(id)arg4 ;
-(id)promotedContentVideoWithSize:(struct CGSize )arg0 placeholderReplacement:(id)arg1 ;
-(id)promotedContentWithType:(NSInteger)arg0 size:(struct CGSize )arg1 placeholderReplacement:(id)arg2 ;
-(id)promotedContentWithoutFetchWithType:(NSInteger)arg0 size:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)prefetchPromotedContentWithRequests:(id)arg0 ;
-(void)registerBlacklistEvaluator:(id)arg0 ;
-(void)registerHandlerForAllMetricsWithClosure:(id)arg0 ;
-(void)removeHandler;


@end


#endif