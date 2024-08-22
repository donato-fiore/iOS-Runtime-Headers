// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTMEANINGFULEVENTSPROCESSOR_H
#define PGGRAPHINGESTMEANINGFULEVENTSPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestMeaningfulEventsProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)_meaningCriteriasDictionaryByMeaningLabel;
-(void)_processMeaningfulEventsWithMomentNodes:(id)arg0 graph:(id)arg1 meaningCriteriaEvaluatorsByMeaningLabel:(id)arg2 legacyLabels:(id)arg3 progressBlock:(id)arg4 ;
-(void)_updateMeaningsOfMomentNode:(id)arg0 graph:(id)arg1 withValidMeaningLabels:(id)arg2 legacyLabels:(id)arg3 ;
-(void)processMeaningfulEventsWithMomentNodes:(id)arg0 graph:(id)arg1 requiredMeaningfulEventCriteriaByIdentifier:(id)arg2 progressBlock:(id)arg3 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;
-(void)updateMeaningsOfMomentNode:(id)arg0 graph:(id)arg1 affectedMeaningLabels:(id)arg2 withMatchedResults:(id)arg3 ;


@end


#endif