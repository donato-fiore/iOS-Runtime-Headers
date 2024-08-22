// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECONTENTRELEVANCEPROVIDERMANAGER_H
#define RECONTENTRELEVANCEPROVIDERMANAGER_H

@class NSString;
@protocol REPredictorObserver, REMLModelManagerObserver;


#import "RERelevanceProviderManager.h"
#import "REMLSentimentAnalyzer.h"

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver>

 {
    REMLSentimentAnalyzer *_sentimentAnalyzer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_relevanceProviderClass;
+(id)_features;
-(BOOL)_suppportsPortarit;
-(BOOL)_suppportsSentimentAnalysis;
-(id)_valuesForProvider:(id)arg0 context:(id)arg1 features:(id)arg2 ;
-(void)modelManagerDidUpdateModel:(id)arg0 ;
-(void)pause;
-(void)predictorDidUpdate:(id)arg0 ;
-(void)resume;


@end


#endif