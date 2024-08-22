// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREIRISSTILLIMAGESETTINGS_H
#define FIGCAPTUREIRISSTILLIMAGESETTINGS_H

@class NSArray, NSURL;


#import "FigCaptureStillImageSettings.h"
#import "FigCaptureMovieFileRecordingSettings.h"
#import "FigCaptureSemanticStyle.h"

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings

@property (copy, nonatomic) NSArray *movieLevelMetadataForOriginalImage; // ivar: _movieLevelMetadataForOriginalImage
@property (nonatomic) int movieMode; // ivar: _movieMode
@property (copy, nonatomic) FigCaptureMovieFileRecordingSettings *movieRecordingSettings; // ivar: _movieRecordingSettings
@property (copy, nonatomic) NSURL *movieURLForOriginalImage; // ivar: _movieURLForOriginalImage
@property (nonatomic) CGSize nonDestructiveCropSize; // ivar: _nonDestructiveCropSize
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle; // ivar: _semanticStyle
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadataForOriginalImage; // ivar: _spatialOverCaptureMovieLevelMetadataForOriginalImage
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieURLForOriginalImage; // ivar: _spatialOverCaptureMovieURLForOriginalImage


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif