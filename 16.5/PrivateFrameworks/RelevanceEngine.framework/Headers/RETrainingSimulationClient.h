// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RETRAININGSIMULATIONCLIENT_H
#define RETRAININGSIMULATIONCLIENT_H

@class NSXPCConnection, NSString;
@protocol RETrainingSimulationClientInterface, OS_dispatch_queue, RETrainingSimulationClientDelegate;

#import <Foundation/Foundation.h>


@interface RETrainingSimulationClient : NSObject <RETrainingSimulationClientInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<RETrainingSimulationClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetProcessName; // ivar: _targetProcessName


-(BOOL)relevanceEngine:(id)arg0 performCommand:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)relevanceEngine:(id)arg0 runActionOfElementWithDescription1:(id)arg1 ;
-(id)availableRelevanceEngines;
-(id)diagnosticLogFileForRelevanceEngine:(id)arg0 ;
-(id)fetchAllElementIdentifiersInRelevanceEngine:(id)arg0 ;
-(id)fetchAllElementsInRelevanceEngine:(id)arg0 ;
-(id)initWithConnection:(id)arg0 delegate:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 delegate:(id)arg1 ;
-(id)initWithTargetProcessName:(id)arg0 delegate:(id)arg1 ;
-(id)relevanceEngine:(id)arg0 encodedObjectAtPath:(id)arg1 ;
-(void)_handleInterruption;
-(void)_handleInvalidation;
-(void)availableRelevanceEnginesDidChange;
-(void)dealloc;
-(void)relevanceEngine:(id)arg0 createElementFromDescription:(id)arg1 ;


@end


#endif