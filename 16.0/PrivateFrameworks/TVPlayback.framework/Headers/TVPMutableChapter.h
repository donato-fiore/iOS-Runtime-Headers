// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPMUTABLECHAPTER_H
#define TVPMUTABLECHAPTER_H

@class NSString;


#import "TVPChapter.h"
#import "TVPDateRange.h"
#import "TVPTimeRange.h"

@interface TVPMutableChapter : TVPChapter

@property (copy, nonatomic) NSString *chapterDescription;
@property (retain, nonatomic) TVPDateRange *dateRange;
@property (copy, nonatomic) NSString *localizedName;
@property (retain, nonatomic) TVPTimeRange *timeRange;




@end


#endif