// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSFTZKWORCHESTRATOR_H
#define _PSFTZKWORCHESTRATOR_H

@class NSMutableArray, _CDInteractionStore;
@protocol _PSFaceTimeZKWWrapperProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PSCalendarEventPredictorDelegateWrapper.h"
#import "_PSSuggestionFromTextPredictorDelegateWrapper.h"
#import "_PSKNNZKWATXDelegateWrapper.h"
#import "_PSFTZKWConfig.h"

@interface _PSFTZKWOrchestrator : NSObject <_PSFaceTimeZKWWrapperProtocol>

 {
    _PSCalendarEventPredictorDelegateWrapper *_calendarDelegateWrapper;
    _PSSuggestionFromTextPredictorDelegateWrapper *_unstructuredCalendarDelegateWrapper;
    _PSSuggestionFromTextPredictorDelegateWrapper *_unstructuredRemindersDelegateWrapper;
    _PSKNNZKWATXDelegateWrapper *_faceTimeInteractionModelDelegateWrapper;
    _PSKNNZKWATXDelegateWrapper *_fallbackInteractionModelDelegateWrapper;
    NSMutableArray *_clientModels;
    _CDInteractionStore *_interactionStore;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) _PSFTZKWConfig *config; // ivar: _config


-(id)_getBlendingLayerSuggestionsWithContext:(id)arg0 ;
-(id)_getDirectSuggestionsWithContext:(id)arg0 ;
-(id)_getDirectSuggestionsWithContext:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(id)getSuggestionsWithPredictionContext:(id)arg0 ;
-(id)init;
-(id)initWithKNNModel:(id)arg0 interactionStore:(id)arg1 ;
-(void)_createFaceTimeInteractionModelWithKNNModel:(id)arg0 ;
-(void)_createFallbackInteractionModelWithKNNModel:(id)arg0 ;
-(void)_createStructuredCalendarModelWithEventStore:(id)arg0 contactStore:(id)arg1 ;
-(void)_createUnstructuredCalendarModelWithEventStore:(id)arg0 contactStore:(id)arg1 interactionStore:(id)arg2 ;
-(void)_createUnstructuredReminderModelWithEventStore:(id)arg0 contactStore:(id)arg1 interactionStore:(id)arg2 ;
-(void)populateCaches;
-(void)updateConfigWithTrialData:(id)arg0 ;


@end


#endif