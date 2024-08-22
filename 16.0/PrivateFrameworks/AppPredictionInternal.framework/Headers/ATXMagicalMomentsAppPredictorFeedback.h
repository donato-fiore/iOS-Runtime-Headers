// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMAGICALMOMENTSAPPPREDICTORFEEDBACK_H
#define ATXMAGICALMOMENTSAPPPREDICTORFEEDBACK_H

@class NSString;
@protocol ATXProactiveSuggestionFeedbackListenerProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>


@interface ATXMagicalMomentsAppPredictorFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol>

 {
    id<ATXPETEventTracker2Protocol> *_tracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_anchorTypeFromBundleIdToAnchorTypeMap:(id)arg0 bundleId:(id)arg1 ;
-(id)clientModelIds;
-(id)getCurrentABGroup;
-(id)init;
-(id)initWithTracker:(id)arg0 ;
-(void)_handleEngagedProactiveSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 bundleIdToAnchorType:(id)arg2 ;
-(void)_handleShownProactiveSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 bundleIdToAnchorType:(id)arg2 ;
-(void)logEngagedMMMetricsEntryForBundle:(id)arg0 consumerSubType:(unsigned char)arg1 anchorType:(NSInteger)arg2 abGroup:(id)arg3 score:(CGFloat)arg4 ;
-(void)logShownMMMetricsEntryForBundle:(id)arg0 consumerSubType:(unsigned char)arg1 anchorType:(NSInteger)arg2 abGroup:(id)arg3 score:(CGFloat)arg4 ;
-(void)receiveUIFeedbackResult:(id)arg0 ;


@end


#endif