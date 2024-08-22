// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTINPUTSESSIONACTIONANALYTICS_H
#define UITEXTINPUTSESSIONACTIONANALYTICS_H

@class NSMutableOrderedSet, NSMutableSet, NSSet, NSUUID;
@protocol OS_dispatch_queue, UITextInputSessionActionAnalyticsDelegateSource;

#import <Foundation/Foundation.h>


@interface UITextInputSessionActionAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_recentActions;
    NSMutableSet *_accumulators;
    NSMutableSet *_efficacyAccumulators;
    NSSet *_separateCycleAccumulatorNames;
    NSUInteger _maxDepth;
    BOOL _trackingDuration;
    NSUInteger _beginTimestamp;
}


@property (weak, nonatomic) NSObject<UITextInputSessionActionAnalyticsDelegateSource> *delegateSource; // ivar: _delegateSource
@property (copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier


+(id)allowedValuesForTextInputSource;
+(id)sharedPunctuationCharacterSet;
+(id)stringValueForSource:(NSInteger)arg0 ;
+(void)addEndingObserver:(id)arg0 ;
+(void)addObserver:(id)arg0 ;
+(void)q_notifyEndingObserversWithSessionAnalytics:(id)arg0 ;
+(void)q_notifyStartingObservers;
+(void)removeEndingObserver:(id)arg0 ;
+(void)removeObserver:(id)arg0 ;
-(NSUInteger)_emojiCountForText:(id)arg0 ;
-(NSUInteger)_normalizedTextLength:(id)arg0 ;
-(NSUInteger)_optionsForText:(id)arg0 ;
-(NSUInteger)_punctuationCountForText:(id)arg0 ;
-(id)_instanceOfActionClass:(Class)arg0 ;
-(id)allAccumulatorNames;
-(id)allEfficacyAccumulatorNames;
-(id)init;
-(id)q_copyAccumulatorWithName:(id)arg0 ;
-(void)addAccumulator:(id)arg0 ;
-(void)addEfficacyAccumulator:(id)arg0 ;
-(void)beginTrackingSessionDurationIfNecessary;
-(void)didBegin;
-(void)didChangeToSelection:(struct _NSRange )arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didDeleteBackward:(NSUInteger)arg0 deletedText:(id)arg1 relativeRangeBefore:(struct _NSRange )arg2 ;
-(void)didDeleteBackward:(NSUInteger)arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didDictationBegin:(BOOL)arg0 usesMultiModalDictation:(BOOL)arg1 ;
-(void)didInsertText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didInsertText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 withNumAlternatives:(NSInteger)arg2 ;
-(void)didOther;
-(void)didRedo;
-(void)didReplaceWithCandidate:(NSInteger)arg0 ;
-(void)didUndo;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)enumerateEfficacyAnalytics:(id)arg0 ;
-(void)enumerateSeparateCycleAnalytics:(id)arg0 ;
-(void)q_addAccumulator:(id)arg0 ;
-(void)q_addActionAndUpdate:(id)arg0 ;
-(void)q_addEfficacyAccumulator:(id)arg0 ;
-(void)q_flushRecentActions;
-(void)q_setSeparateCycleAccumulatorNames:(id)arg0 ;
-(void)q_setupDefaultAnalytics;
-(void)q_updateAnalyticsFromAccumulators;
-(void)writeAnalytics;


@end


#endif