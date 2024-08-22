// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHINGESTBUSINESSPROCESSOR_H
#define PGGRAPHINGESTBUSINESSPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestBusinessProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_spatialMapCategoriesByMeaningIdentifier;
-(BOOL)_momentNode:(id)arg0 hasValidConstraintsForLocationOfInterestVisit:(id)arg1 requiredCriteriaByPOIIdentifier:(id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)arg0 requiredCriteriaByPOIIdentifier:(id)arg1 ;
-(id)_predominantVisitForMomentNode:(id)arg0 publicEventBusinessItemMuid:(NSUInteger)arg1 ;
-(id)requiredCriteriaByPOIIdentifierForGraph:(id)arg0 ;
-(void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)arg0 graph:(id)arg1 progressBlock:(id)arg2 ;
-(void)_insertBusinessItemsFromMomentNodes:(id)arg0 graph:(id)arg1 withLocationOfInterestVisitsToResolveByMomentUUID:(id)arg2 requiredCriteriaByPOIIdentifier:(id)arg3 progressBlock:(id)arg4 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif