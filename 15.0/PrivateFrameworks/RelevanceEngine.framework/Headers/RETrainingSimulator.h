// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RETRAININGSIMULATOR_H
#define RETRAININGSIMULATOR_H

@class NSString;
@protocol RETrainingSimulationClientDelegate;

#import <Foundation/Foundation.h>

#import "RETrainingSimulationClient.h"

@interface RETrainingSimulator : NSObject <RETrainingSimulationClientDelegate>

 {
    RETrainingSimulationClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *relevanceEngineName; // ivar: _relevanceEngineName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetProcessName; // ivar: _targetProcessName


-(BOOL)performCommand:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)runActionOfElementWithDescription1:(id)arg0 ;
-(id)allElementIdentifiers;
-(id)allElements;
-(id)availableRelevanceEngines;
-(id)encodedObjectAtPath:(id)arg0 ;
-(id)initWithTargetProcess:(id)arg0 relevanceEngine:(id)arg1 ;
-(id)storedDiagnosticLogsURL;
-(void)createElementFromDescription:(id)arg0 ;
-(void)trainingSimulationClientWasInterrupted:(id)arg0 ;
-(void)trainingSimulationClientWasInvalidated:(id)arg0 ;


@end


#endif