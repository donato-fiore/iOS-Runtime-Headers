// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSPROCESSINGCONTROLLER_H
#define TPSANALYTICSPROCESSINGCONTROLLER_H

@class NSArray, NSDictionary, TPSExperiment;
@protocol TPSAnalyticsProcessorDataSource;

#import <Foundation/Foundation.h>


@interface TPSAnalyticsProcessingController : NSObject <TPSAnalyticsProcessorDataSource>

 {
    NSArray *_processors;
    NSArray *_allTipStatus;
    NSDictionary *_contextualInfoMap;
    NSDictionary *_eventHistoryMap;
    TPSExperiment *_experiment;
}




-(id)allContextualInfo;
-(id)allTipStatus;
-(id)contextualEventForIdentifier:(id)arg0 ;
-(id)contextualInfoForIdentifier:(id)arg0 ;
-(id)experiment;
-(id)initWithAllTipStatus:(id)arg0 contextualInfoMap:(id)arg1 eventHistoryMap:(id)arg2 experiment:(id)arg3 ;
-(id)initWithAllTipStatus:(id)arg0 contextualInfoMap:(id)arg1 eventHistoryMap:(id)arg2 experiment:(id)arg3 processors:(id)arg4 ;
-(void)processAnalytics;
-(void)resetAnalytics;


@end


#endif