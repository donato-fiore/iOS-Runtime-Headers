// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITSECTIONCONTROLLER_H
#define MKTRANSITSECTIONCONTROLLER_H

@class NSSet, NSDate;
@protocol GEOTransitSystem;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"
#import "MKTransitSectionPagingFilter.h"

@interface MKTransitSectionController : NSObject {
    MKMapItem *_mapItem;
    NSSet *_linesToShow;
    NSUInteger _numberOfRows;
    NSUInteger _numberOfFilteredRows;
    BOOL _needsBuildRows;
}


@property (readonly, nonatomic) MKTransitSectionPagingFilter *_pagingFilter; // ivar: __pagingFilter
@property (retain, nonatomic) NSDate *departureCutoffDate; // ivar: _departureCutoffDate
@property (retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate; // ivar: _expiredHighFrequencyCutoffDate
@property (retain, nonatomic) NSSet *incidentEntitiesToExclude; // ivar: _incidentEntitiesToExclude
@property (readonly, nonatomic) NSUInteger numberOfFilteredLines; // ivar: _numberOfFilteredLines
@property (readonly, nonatomic) NSObject<GEOTransitSystem> *system; // ivar: _system


-(BOOL)_needsBuildRows;
-(BOOL)hasFilteredLines;
-(BOOL)hasFilteredRows;
-(NSUInteger)numberOfRows;
-(id)init;
-(id)initWithMapItem:(id)arg0 system:(id)arg1 ;
-(id)linesToShow;
-(void)_buildRows;
-(void)_setNeedsBuildRows;
-(void)incrementPagingFilter;


@end


#endif