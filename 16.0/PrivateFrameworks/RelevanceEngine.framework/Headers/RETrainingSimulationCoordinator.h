// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RETRAININGSIMULATIONCOORDINATOR_H
#define RETRAININGSIMULATIONCOORDINATOR_H

@class NSMutableDictionary, NSMapTable, NSString;
@protocol REElementActionDelegate, RETrainingSimulationServerInterface;


#import "RESingleton.h"
#import "RETrainingSimulationServer.h"

@interface RETrainingSimulationCoordinator : RESingleton <REElementActionDelegate, RETrainingSimulationServerInterface>

 {
    RETrainingSimulationServer *_server;
    NSMutableDictionary *_elementsAddedByEngine;
    NSMapTable *_actionCompletionBlocks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isActivelyTraining; // ivar: _isActivelyTraining
@property (readonly) Class superclass;


+(void)prewarm;
-(id)_engineWithName:(id)arg0 ;
-(id)_init;
-(id)_unavailableEngineWithNameError:(id)arg0 ;
-(void)_accesssEngineWithName:(id)arg0 completion:(id)arg1 ;
-(void)_relevanceEnginesDidChange;
-(void)availableRelevanceEngines:(id)arg0 ;
-(void)dealloc;
-(void)elementAction:(id)arg0 didFinishTask:(BOOL)arg1 ;
-(void)elementAction:(id)arg0 wantsToPerformTapActionForComplicationSlot:(id)arg1 ;
-(void)elementAction:(id)arg0 wantsViewControllerDisplayed:(id)arg1 ;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllElementsInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)relevanceEngine:(id)arg0 createElementFromDescription:(id)arg1 completion:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 encodedObjectAtPath:(id)arg1 completion:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 performCommand:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)relevanceEngine:(id)arg0 runActionOfElementWithDescription1:(id)arg1 completion:(id)arg2 ;


@end


#endif