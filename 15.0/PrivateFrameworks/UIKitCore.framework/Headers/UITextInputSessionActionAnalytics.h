// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTINPUTSESSIONACTIONANALYTICS_H
#define UITEXTINPUTSESSIONACTIONANALYTICS_H

@class NSMutableOrderedSet, NSMutableSet;
@protocol OS_dispatch_queue, UITextInputSessionActionAnalyticsDelegateSource;

#import <Foundation/Foundation.h>


@interface UITextInputSessionActionAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_recentActions;
    NSMutableSet *_accumulators;
    NSUInteger _maxDepth;
    BOOL _trackingDuration;
    NSUInteger _beginTimestamp;
}


@property (weak, nonatomic) NSObject<UITextInputSessionActionAnalyticsDelegateSource> *delegateSource; // ivar: _delegateSource


+(id)allowedValuesForTextInputSource;
+(id)stringValueForSource:(NSInteger)arg0 ;
+(void)addEndingObserver:(id)arg0 ;
+(void)addObserver:(id)arg0 ;
+(void)q_notifyEndingObserversWithSessionAnalytics:(id)arg0 ;
+(void)q_notifyStartingObservers;
+(void)removeEndingObserver:(id)arg0 ;
+(void)removeObserver:(id)arg0 ;
-(NSUInteger)_optionsForText:(id)arg0 ;
-(id)_instanceOfActionClass:(Class)arg0 ;
-(id)allAccumulatorNames;
-(id)init;
-(void)addAccumulator:(id)arg0 ;
-(void)beginTrackingSessionDurationIfNecessary;
-(void)didBegin;
-(void)didChangeToSelection:(struct _NSRange )arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didDeleteBackward:(NSUInteger)arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didInsertText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didOther;
-(void)didRedo;
-(void)didUndo;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)q_addAccumulator:(id)arg0 ;
-(void)q_addActionAndUpdate:(id)arg0 ;
-(void)q_flushRecentActions;
-(void)q_setupDefaultAnalytics;
-(void)q_updateAnalyticsFromAccumulators;
-(void)writeAnalytics;


@end


#endif