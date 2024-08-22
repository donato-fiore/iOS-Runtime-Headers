// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNMOVIESEGMENT_H
#define KNMOVIESEGMENT_H

@class TSPData;

#import <Foundation/Foundation.h>


@interface KNMovieSegment : NSObject

@property (readonly, nonatomic, getter=isEmptySegment) BOOL emptySegment;
@property (readonly, nonatomic) TSPData *movieData; // ivar: _movieData
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime


-(id)description;
-(id)initEmptySegmentWithStartTime:(CGFloat)arg0 ;
-(id)initWithContext:(id)arg0 message:(*void)arg1 unarchiver:(id)arg2 ;
-(id)initWithMovieData:(id)arg0 startTime:(CGFloat)arg1 ;
-(id)movieSegmentByAddingTimeOffset:(CGFloat)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif