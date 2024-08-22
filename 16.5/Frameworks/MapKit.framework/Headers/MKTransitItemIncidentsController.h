// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTRANSITITEMINCIDENTSCONTROLLER_H
#define MKTRANSITITEMINCIDENTSCONTROLLER_H

@class NSArray, NSMutableDictionary, NSSet, NSDate;
@protocol GEOTransitLineItem;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKTransitItemIncidentsController : NSObject {
    MKMapItem *_mapItem;
    id<GEOTransitLineItem> *_lineItem;
    NSArray *_validIncidents;
    NSMutableDictionary *_incidentsForDepartureSequence;
    NSMutableDictionary *_incidentsForSystem;
    NSMutableDictionary *_incidentsForLine;
    NSMutableDictionary *_incidentsForMapItem;
    NSMutableDictionary *_incidentsForLinesInSystem;
    NSSet *_blockedIncidentEntities;
}


@property (retain, nonatomic) NSDate *referenceDate; // ivar: _referenceDate


-(id)_incidentsAffectingMuid:(NSUInteger)arg0 ;
-(id)blockedIncidentEntities;
-(id)incidentsForDepartureSequence:(id)arg0 ;
-(id)incidentsForLine:(id)arg0 ;
-(id)incidentsForLinesInSystem:(id)arg0 ;
-(id)incidentsForMapItem:(id)arg0 ;
-(id)incidentsForSystem:(id)arg0 ;
-(id)initWithLineItem:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)validIncidents;
-(void)resetCache;


@end


#endif