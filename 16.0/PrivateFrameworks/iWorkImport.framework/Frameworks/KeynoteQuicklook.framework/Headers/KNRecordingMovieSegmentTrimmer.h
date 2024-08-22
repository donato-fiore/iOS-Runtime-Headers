// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNRECORDINGMOVIESEGMENTTRIMMER_H
#define KNRECORDINGMOVIESEGMENTTRIMMER_H


#import <Foundation/Foundation.h>

#import "KNMovieSegment.h"

@interface KNRecordingMovieSegmentTrimmer : NSObject {
    KNMovieSegment *_movieSegment;
    CGFloat _trimDurationInSeconds;
}




+(BOOL)canTrimMovieSegmentsInContext:(id)arg0 ;
-(id)initWithMovieSegment:(id)arg0 trimDuration:(CGFloat)arg1 ;
-(void)trimMovieSegmentWithCompletionHandler:(id)arg0 ;


@end


#endif