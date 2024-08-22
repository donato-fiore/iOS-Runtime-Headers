// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITINACTIVELINESSECTIONCONTROLLER_H
#define MKTRANSITINACTIVELINESSECTIONCONTROLLER_H

@class NSArray;
@protocol GEOTransitLine;


#import "MKTransitSectionController.h"

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    id<GEOTransitLine> *_line;
}


@property (readonly, nonatomic) NSArray *inactiveLines; // ivar: _inactiveLines


-(BOOL)_newStationCardUIEnabled;
-(id)_pagingFilter;
-(id)init;
-(id)initWithMapItem:(id)arg0 system:(id)arg1 line:(id)arg2 ;
-(void)_buildRows;
-(void)_setNeedsBuildRows;


@end


#endif