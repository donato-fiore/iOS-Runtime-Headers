// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDAILYROUTINESTRIGGERMANAGER_H
#define ATXDAILYROUTINESTRIGGERMANAGER_H

@class NSDateFormatter, NSDate;
@protocol ATXCachedTransitionPredictorProtocol, ATXTransitionPredictorProtocol, ATXContextStoreWriterProtocol;

#import <Foundation/Foundation.h>


@interface ATXDailyRoutinesTriggerManager : NSObject {
    NSDateFormatter *_dateFormatter;
    id<ATXCachedTransitionPredictorProtocol> *_cachedPredictor;
    id<ATXTransitionPredictorProtocol> *_transitionPredictor;
    id<ATXContextStoreWriterProtocol> *_contextStoreWriter;
}


@property (retain, nonatomic) NSDate *now; // ivar: _now


+(id)_wakeupDateForExitDate:(id)arg0 fromDate:(id)arg1 ;
+(id)convenienceDateFormatter;
+(id)sharedInstance;
-(id)currentTransition;
-(id)init;
-(id)initWithCacheBasedPredictor:(id)arg0 transitionPredictor:(id)arg1 contextStoreWriter:(id)arg2 ;
-(void)_scheduleOneShotJobAfterInterval:(CGFloat)arg0 ;
-(void)updateWithActivity:(id)arg0 ;


@end


#endif