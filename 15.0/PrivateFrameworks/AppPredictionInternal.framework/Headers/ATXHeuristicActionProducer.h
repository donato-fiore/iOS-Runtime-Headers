// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHEURISTICACTIONPRODUCER_H
#define ATXHEURISTICACTIONPRODUCER_H

@class NSString;
@protocol ATXActionProducer, ATXActionProducerDelegate;

#import <Foundation/Foundation.h>


@interface ATXHeuristicActionProducer : NSObject <ATXActionProducer>

 {
    id *_expireNotificationHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXActionProducerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)generateScoreForHeuristic:(id)arg0 ;
+(NSUInteger)actionExperienceForScoredHeuristicAction:(id)arg0 ;
-(BOOL)isActionBlacklisted:(id)arg0 ;
-(BOOL)userAlreadyEngagedWithAction:(id)arg0 ;
-(id)actionPredictionBlacklist;
-(id)bundleIdForAction:(id)arg0 ;
-(id)digitalHealthBlacklist;
-(id)init;
-(id)produceActions;
-(void)dealloc;
-(void)invalidate;


@end


#endif