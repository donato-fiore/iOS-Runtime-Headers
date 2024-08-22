// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHINGESTMEMORYPROCESSOR_H
#define PGGRAPHINGESTMEMORYPROCESSOR_H

@class NSString, NSDate;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"
#import "PGMemoryController.h"

@interface PGGraphIngestMemoryProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
    PGMemoryController *_memoryController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *localDate; // ivar: _localDate
@property (readonly) Class superclass;


+(void)regenerateMemoriesOfCategory:(NSUInteger)arg0 withGraphBuilder:(id)arg1 progressReporter:(id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)_memoryController;
-(id)init;
-(id)memoryGeneratorsForMemoryCategory:(NSUInteger)arg0 memoryGenerationContext:(id)arg1 controller:(id)arg2 ;
-(void)insertMemoriesForCategory:(NSUInteger)arg0 loggingConnection:(id)arg1 progressBlock:(id)arg2 ;
-(void)insertProcessorDependentMomentFeaturesForMomentNodes:(id)arg0 featureProvider:(id)arg1 progressBlock:(id)arg2 ;
-(void)insertSingletonFeatureNodes;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif