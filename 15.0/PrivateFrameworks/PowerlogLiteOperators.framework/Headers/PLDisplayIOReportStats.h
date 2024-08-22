// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDISPLAYIOREPORTSTATS_H
#define PLDISPLAYIOREPORTSTATS_H



#import "PLIOReportStats.h"
#import "PLDisplayAPLStats.h"
#import "PLDisplayAZLStats.h"

@interface PLDisplayIOReportStats : PLIOReportStats

@property (retain) PLDisplayAPLStats *displayAPLStats; // ivar: _displayAPLStats
@property (retain) PLDisplayAZLStats *displayAZLStats; // ivar: _displayAZLStats


-(id)init;


@end


#endif