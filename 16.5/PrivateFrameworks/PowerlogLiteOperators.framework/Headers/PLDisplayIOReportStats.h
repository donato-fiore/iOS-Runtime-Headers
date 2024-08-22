// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDISPLAYIOREPORTSTATS_H
#define PLDISPLAYIOREPORTSTATS_H

@class PLIOReportStats;


#import "PLDisplayAPLStats.h"
#import "PLDisplayAZLStats.h"

@interface PLDisplayIOReportStats : PLIOReportStats

@property (retain) PLDisplayAPLStats *displayAPLStats; // ivar: _displayAPLStats
@property (retain) PLDisplayAZLStats *displayAZLStats; // ivar: _displayAZLStats


-(id)init;


@end


#endif