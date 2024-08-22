// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESESSIONMOVIEFILESINKPIPELINE_H
#define FIGCAPTURESESSIONMOVIEFILESINKPIPELINE_H

@class NSMutableArray;


#import "FigCaptureMovieFileSinkPipeline.h"

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {
    BOOL _recording;
}


@property (nonatomic) BOOL momentCaptureMovieRecordingEnabled; // ivar: _momentCaptureMovieRecordingEnabled
@property (retain, nonatomic) NSMutableArray *pendingIrisRecordings; // ivar: _pendingIrisRecordings
@property (nonatomic) BOOL recording;


-(void)dealloc;


@end


#endif