// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKTRACKER_H
#define _PSCNAUTOCOMPLETEFEEDBACKTRACKER_H

@class NSDateFormatter, _CDInteraction, NSDate;

#import <Foundation/Foundation.h>

#import "_PSCNAutocompleteFeedbackInteractionIterator.h"
#import "_PSCNAutocompleteFeedbackSessionAccumulator.h"

@interface _PSCNAutocompleteFeedbackTracker : NSObject {
    _PSCNAutocompleteFeedbackInteractionIterator *_interactionIterator;
    NSInteger _maxSecondsBetweenImpressionAndAction;
    BOOL _shouldInferEnterAndExit;
    id *_impressionLogger;
    id *_submodelImpressionLogger;
    id *_actionLogger;
    BOOL _defaultForIsImplicit;
    NSDateFormatter *_dateFormatter;
    _CDInteraction *_followingInteractionPrevious;
    _CDInteraction *_followingInteraction;
    _PSCNAutocompleteFeedbackSessionAccumulator *_accumulator;
    BOOL _inActionWindow;
}


@property (readonly, nonatomic) NSDate *stopTime; // ivar: _stopTime


+(id)defaultActionWithInteraction:(id)arg0 trialID:(id)arg1 isImplicit:(BOOL)arg2 ;
+(id)defaultImpressionWithFeedback:(id)arg0 bundleID:(id)arg1 trialID:(id)arg2 isImplicit:(BOOL)arg3 ;
+(id)defaultSubmodelImpressionWithFeedback:(id)arg0 submodel:(id)arg1 bundleID:(id)arg2 trialID:(id)arg3 isImplicit:(BOOL)arg4 ;
-(id)init;
// -(id)initWithInteractionIterator:(id)arg0 maxSecondsBetweenImpressionAndAction:(NSInteger)arg1 shouldInferEnterAndExit:(BOOL)arg2 impressionLogger:(id)arg3 submodelImpressionLogger:(unk)arg4 actionLogger:(id)arg5 defaultForIsImplicit:(unk)arg6  ;
-(void)annotateAction:(id)arg0 withStatistics:(id)arg1 ;
-(void)annotateImpression:(id)arg0 withStatistics:(id)arg1 ;
-(void)finish;
-(void)finishWithInferredEnterAndExit;
-(void)finishWithoutInferredEnterAndExit;
-(void)logActionFromAccumulator:(id)arg0 ;
-(void)logImpressionsFromAccumulator:(id)arg0 ;
-(void)processFeedback:(id)arg0 ;
-(void)processFeedbackWithInferredEnterAndExit:(id)arg0 ;
-(void)processFeedbackWithoutInferredEnterAndExit:(id)arg0 ;


@end


#endif