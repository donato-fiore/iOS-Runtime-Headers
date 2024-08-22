// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RETRAININGPROXY_H
#define _RETRAININGPROXY_H

@class NSString;
@protocol RETrainingSimulationServerInterface, RETrainingSimulationClientDelegate;

#import <Foundation/Foundation.h>

#import "RETrainingSimulationClient.h"
#import "RETrainingSimulationServer.h"

@interface _RETrainingProxy : NSObject <RETrainingSimulationServerInterface, RETrainingSimulationClientDelegate>

 {
    RETrainingSimulationClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RETrainingSimulationServer *server; // ivar: _server
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(id)initWithServiceName:(id)arg0 ;
-(void)availableRelevanceEngines:(id)arg0 ;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllElementsInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)relevanceEngine:(id)arg0 createElementFromDescription:(id)arg1 completion:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 encodedObjectAtPath:(id)arg1 completion:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 performCommand:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)relevanceEngine:(id)arg0 runActionOfElementWithDescription1:(id)arg1 completion:(id)arg2 ;


@end


#endif