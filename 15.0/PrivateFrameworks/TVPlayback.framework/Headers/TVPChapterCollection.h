// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPCHAPTERCOLLECTION_H
#define TVPCHAPTERCOLLECTION_H

@class NSArray, NSString, NSURL, NSDate;

#import <Foundation/Foundation.h>


@interface TVPChapterCollection : NSObject

@property (retain, nonatomic) id *backingData; // ivar: _backingData
@property (retain, nonatomic) NSArray *chapters; // ivar: _chapters
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat refreshInterval; // ivar: _refreshInterval
@property (copy, nonatomic) NSURL *refreshURL; // ivar: _refreshURL
@property (nonatomic) BOOL shouldDisplayChapterMarkers; // ivar: _shouldDisplayChapterMarkers
@property (nonatomic) BOOL shouldShowDescriptionOnChapterSkip; // ivar: _shouldShowDescriptionOnChapterSkip
@property (nonatomic) BOOL shouldStartPlaybackFromStartDate; // ivar: _shouldStartPlaybackFromStartDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSInteger type; // ivar: _type


-(id)chapterForDate:(id)arg0 ;
-(id)chapterForTime:(CGFloat)arg0 ;
-(id)init;
-(id)nearestChapterForDate:(id)arg0 ;
-(id)nearestChapterForTime:(CGFloat)arg0 ;


@end


#endif