// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMOMENTCAPTUREMOVIE_H
#define AVMOMENTCAPTUREMOVIE_H

@class NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "AVMomentCaptureMovieRecordingResolvedSettings.h"

@interface AVMomentCaptureMovie : NSObject {
    NSString *_overCaptureGroupIdentifier;
    BOOL _hasOverCapture;
}


@property (readonly, nonatomic) NSURL *debugMetadataSidecarFileURL; // ivar: _debugMetadataSidecarFileURL
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) NSArray *movieMetadata; // ivar: _movieMetadata
@property (readonly, nonatomic) NSURL *outputFileURL; // ivar: _outputFileURL
@property (readonly, nonatomic) *__CVBuffer previewPixelBuffer; // ivar: _previewPixelBuffer
@property (readonly, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings; // ivar: _resolvedSettings


+(id)movieWithResolvedSettings:(id)arg0 outputFileURL:(id)arg1 movieMetadata:(id)arg2 ;
-(id)_initWithResolvedSettings:(id)arg0 outputFileURL:(id)arg1 movieMetadata:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;


@end


#endif