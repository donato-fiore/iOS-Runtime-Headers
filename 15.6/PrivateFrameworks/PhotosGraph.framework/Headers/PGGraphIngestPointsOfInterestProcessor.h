// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHINGESTPOINTSOFINTERESTPROCESSOR_H
#define PGGRAPHINGESTPOINTSOFINTERESTPROCESSOR_H

@class NSString, NSDictionary;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestPointsOfInterestProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *momentNodesToResolvePOIAndEnrichByBusinessItemMuid; // ivar: _momentNodesToResolvePOIAndEnrichByBusinessItemMuid
@property (readonly, nonatomic) NSDictionary *momentNodesToResolvePOIByRegion; // ivar: _momentNodesToResolvePOIByRegion
@property (readonly) Class superclass;


-(BOOL)_fetchPointsOfInterestForRegions:(id)arg0 loggingConnection:(id)arg1 progress:(id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)_pointOfInterestTypeStringsFromBusinessItems:(id)arg0 withOriginalCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(void)_collectPOIsToResolveWithMomentNodes:(id)arg0 graphUpdate:(id)arg1 progress:(id)arg2 ;
-(void)_insertPointOfInterestTypeStrings:(id)arg0 graph:(id)arg1 withMomentNodes:(id)arg2 loggingConnection:(id)arg3 ;
-(void)disambiguatePointsOfInterestWithMomentNodes:(id)arg0 graphUpdate:(id)arg1 progress:(id)arg2 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif