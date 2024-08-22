// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISTREAMINGBOOKMARK_H
#define VUISTREAMINGBOOKMARK_H

@class NSDate, NSNumber;

#import <Foundation/Foundation.h>


@interface VUIStreamingBookmark : NSObject

@property (retain, nonatomic) NSDate *absoluteBookmarkTimestamp; // ivar: _absoluteBookmarkTimestamp
@property (retain, nonatomic) NSNumber *absoluteResumeTime; // ivar: _absoluteResumeTime
@property (retain, nonatomic) NSDate *relativeBookmarkTimestamp; // ivar: _relativeBookmarkTimestamp
@property (retain, nonatomic) NSNumber *relativeResumeTime; // ivar: _relativeResumeTime


-(id)initWithAbsoluteResumeTime:(id)arg0 absoluteTimestamp:(id)arg1 relativeResumeTime:(id)arg2 relativeBookmarkTimestamp:(id)arg3 ;


@end


#endif