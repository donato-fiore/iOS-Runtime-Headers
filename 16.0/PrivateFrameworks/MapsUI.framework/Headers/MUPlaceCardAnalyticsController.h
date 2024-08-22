// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACECARDANALYTICSCONTROLLER_H
#define MUPLACECARDANALYTICSCONTROLLER_H

@class NSArray, NSString;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceModuleAnalyticsLogging, OS_dispatch_queue, GEOLogContextDelegate, _MKPlaceItem, MUPlaceCardAnalyticsProvider;

#import <Foundation/Foundation.h>


@interface MUPlaceCardAnalyticsController : NSObject <MUInfoCardAnalyticsDelegate, MUPlaceModuleAnalyticsLogging>

 {
    NSObject<OS_dispatch_queue> *_analyticsQueue;
}


@property (readonly, nonatomic) NSArray *analyticModules;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOLogContextDelegate> *logContextDelegate; // ivar: _logContextDelegate
@property (readonly, nonatomic) NSObject<_MKPlaceItem> *placeItem;
@property (readonly, weak, nonatomic) NSObject<MUPlaceCardAnalyticsProvider> *provider; // ivar: _provider
@property (readonly) Class superclass;


-(id)initWithAnalyticsProvider:(id)arg0 ;
-(void)_infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 feedbackDelegateSelector:(int)arg5 modules:(id)arg6 completion:(id)arg7 ;
-(void)_requestHostToLogFeedbackTypeIfNeeded:(int)arg0 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardAnalyticsPopulateSharedStateWithButtonList:(id)arg0 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;
-(void)instrumentAction:(int)arg0 forModuleType:(NSInteger)arg1 usingFeedbackType:(int)arg2 ;
-(void)instrumentAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleType:(NSInteger)arg3 feedbackType:(int)arg4 ;
-(void)instrumentCloseUsingClientType:(NSUInteger)arg0 ;
-(void)instrumentConceal;
-(void)instrumentDailyUsageCount;
-(void)instrumentPunchoutActionWithURL:(id)arg0 providerId:(id)arg1 ;
-(void)instrumentRevealIfNeededWithImpressionsSessionId:(id)arg0 ;
-(void)instrumentVerticalScrollWithBeginningPoint:(struct CGPoint )arg0 targetContentOffset:(struct CGPoint *)arg1 velocity:(struct CGPoint )arg2 ;


@end


#endif