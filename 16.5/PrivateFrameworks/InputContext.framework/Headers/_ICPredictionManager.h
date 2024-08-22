// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICPREDICTIONMANAGER_H
#define _ICPREDICTIONMANAGER_H

@class NSArray, NSString;
@protocol _ICPredictionManaging, _ICFeedbackAccepting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ICResultCache.h"

@interface _ICPredictionManager : NSObject <_ICPredictionManaging, _ICFeedbackAccepting>

 {
    NSArray *_predictionSources;
    NSString *_lastUsedSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly) _ICResultCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_quickTypePredictionWithTrigger:(id)arg0 searchContext:(id)arg1 timeoutInMilliseconds:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithPredictionSources:(id)arg0 ;
-(id)lastCachedResultWithInitialCharacters:(id)arg0 ;
-(id)searchForMeCardEmailAddresses;
-(id)searchForMeCardRegions;
-(id)searchWithTrigger:(id)arg0 searchContext:(id)arg1 timeoutInMilliseconds:(int)arg2 error:(*id)arg3 ;
-(id)searchWithTriggers:(id)arg0 application:(id)arg1 recipient:(id)arg2 localeIdentifier:(id)arg3 isResponseDenyListed:(BOOL)arg4 shouldDisableAutoCaps:(BOOL)arg5 timeoutInMilliseconds:(int)arg6 resultLimit:(int)arg7 error:(*id)arg8 ;
-(id)searchWithTriggers:(id)arg0 application:(id)arg1 recipient:(id)arg2 localeIdentifier:(id)arg3 timeoutInMilliseconds:(int)arg4 resultLimit:(int)arg5 error:(*id)arg6 ;
-(id)workLocation;
-(void)hibernate;
-(void)predictedItemSelected:(id)arg0 ;
-(void)propogateMetrics:(id)arg0 data:(id)arg1 ;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)providePredictionFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)reset;
-(void)setLastUsedSource:(id)arg0 ;
-(void)warmUp;


@end


#endif