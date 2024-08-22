// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKALLROUTEETASMANAGER_H
#define MKALLROUTEETASMANAGER_H

@class GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions;
@protocol MKAllRouteETAsManagerDelegate;

#import <Foundation/Foundation.h>

#import "_MKRouteETAFetcher.h"
#import "MKMapItem.h"

@interface MKAllRouteETAsManager : NSObject {
    _MKRouteETAFetcher *_etaFetcher;
}


@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (weak, nonatomic) NSObject<MKAllRouteETAsManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItem *originMapItem;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;


-(id)init;
-(id)routeETAForTransportType:(NSUInteger)arg0 ;
-(void)updateETA;


@end


#endif