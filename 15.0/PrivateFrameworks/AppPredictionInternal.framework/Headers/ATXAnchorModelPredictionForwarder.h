// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELPREDICTIONFORWARDER_H
#define ATXANCHORMODELPREDICTIONFORWARDER_H

@class ATXProactiveSuggestionClientModel, NSString;
@protocol ATXAnchorModelPredictionForwarderProtocol, ATXAnchorModelDataStoreWrapperProtocol;

#import <Foundation/Foundation.h>

#import "ATXAnchorModelHyperParameters.h"
#import "ATXModeAnchorModelSuggestionClient.h"

@interface ATXAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol>

 {
    id<ATXAnchorModelDataStoreWrapperProtocol> *_storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
    ATXModeAnchorModelSuggestionClient *_modeSuggestionClient;
}


@property (retain, nonatomic) ATXProactiveSuggestionClientModel *anchorModelClientModel; // ivar: _anchorModelClientModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)actionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)arg0 ;
-(id)appAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)arg0 ;
-(id)clientModelId;
-(id)clientModelSpec;
-(id)init;
-(id)initWithAnchorModelDataStoreWrapper:(id)arg0 anchorModelHyperParameters:(id)arg1 ;
-(id)modeAnchorModelSuggestionsFromPredictions:(id)arg0 ;
-(void)forwardAppAndActionPredictions:(id)arg0 ;
-(void)forwardModePredictions:(id)arg0 ;
-(void)forwardPredictionTuplesToBlendingLayer:(id)arg0 feedbackMetadata:(id)arg1 ;
-(void)forwardPredictions:(id)arg0 ;


@end


#endif