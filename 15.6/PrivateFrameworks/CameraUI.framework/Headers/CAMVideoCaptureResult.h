// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIDEOCAPTURERESULT_H
#define CAMVIDEOCAPTURERESULT_H

@class NSDate, NSError, NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "CAMCaptureCoordinationInfo.h"

@interface CAMVideoCaptureResult : NSObject

@property (readonly, nonatomic) NSDate *captureDate; // ivar: _captureDate
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // ivar: _coordinationInfo
@property (readonly, nonatomic) ? dimensions; // ivar: _dimensions
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSURL *filteredLocalDestinationURL; // ivar: _filteredLocalDestinationURL
@property (readonly, nonatomic) NSURL *localDestinationURL; // ivar: _localDestinationURL
@property (readonly, copy, nonatomic) NSArray *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) ? stillDisplayTime; // ivar: _stillDisplayTime
@property (readonly, nonatomic) BOOL stoppedUnexpectedly;
@property (readonly, nonatomic) *__CVBuffer videoPreviewPixelBuffer; // ivar: _videoPreviewPixelBuffer
@property (readonly, nonatomic) CGFloat videoZoomFactor; // ivar: _videoZoomFactor


-(id)initWithURL:(id)arg0 filteredLocalDestinationURL:(id)arg1 duration:(struct ? )arg2 stillDisplayTime:(struct ? )arg3 dimensions:(struct ? )arg4 metadata:(id)arg5 videoZoomFactor:(CGFloat)arg6 reason:(NSInteger)arg7 videoPreviewPixelBuffer:(struct __CVBuffer *)arg8 coordinationInfo:(id)arg9 error:(id)arg10 ;
-(void)dealloc;


@end


#endif