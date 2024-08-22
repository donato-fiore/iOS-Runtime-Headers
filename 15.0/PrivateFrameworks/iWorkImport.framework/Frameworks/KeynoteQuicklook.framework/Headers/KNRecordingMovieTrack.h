// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNRECORDINGMOVIETRACK_H
#define KNRECORDINGMOVIETRACK_H

@class TSPObject, NSArray;



@interface KNRecordingMovieTrack : TSPObject {
    BOOL _isMovieSegmentDataTrimmedToDuration;
}


@property (readonly, nonatomic) NSArray *movieSegments; // ivar: _movieSegments


-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 movieSegments:(id)arg1 ;
-(id)movieSegmentToTrimWhenReplacingAfterTime:(CGFloat)arg0 trimDuration:(*CGFloat)arg1 ;
-(id)movieTrackByReplacingAfterTime:(CGFloat)arg0 withMovieTrack:(id)arg1 trimmedMovieSegment:(id)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif