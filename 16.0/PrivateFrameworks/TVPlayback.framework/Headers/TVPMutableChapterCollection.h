// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPMUTABLECHAPTERCOLLECTION_H
#define TVPMUTABLECHAPTERCOLLECTION_H

@class NSArray, NSString, NSURL, NSDate;


#import "TVPChapterCollection.h"

@interface TVPMutableChapterCollection : TVPChapterCollection

@property (retain, nonatomic) id *backingData;
@property (retain, nonatomic) NSArray *chapters;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat refreshInterval;
@property (copy, nonatomic) NSURL *refreshURL;
@property (nonatomic) BOOL shouldDisplayChapterMarkers;
@property (nonatomic) BOOL shouldShowDescriptionOnChapterSkip;
@property (nonatomic) BOOL shouldStartPlaybackFromStartDate;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) NSInteger type;




@end


#endif