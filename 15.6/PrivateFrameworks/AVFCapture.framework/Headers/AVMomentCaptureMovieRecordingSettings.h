// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMOMENTCAPTUREMOVIERECORDINGSETTINGS_H
#define AVMOMENTCAPTUREMOVIERECORDINGSETTINGS_H

@class NSString, NSArray, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVMomentCaptureMovieRecordingSettings : NSObject <NSCopying>

 {
    NSString *_videoCodecType;
    NSArray *_movieMetadata;
    NSString *_spatialOverCaptureGroupIdentifier;
    NSArray *_spatialOverCaptureMovieMetadata;
}


@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled; // ivar: _autoSpatialOverCaptureEnabled
@property (copy, nonatomic) NSURL *movieFileURL; // ivar: _movieFileURL
@property (copy, nonatomic) NSArray *movieMetadata;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieFileURL; // ivar: _spatialOverCaptureMovieFileURL
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieMetadata;
@property (readonly, nonatomic) NSInteger uniqueID; // ivar: _uniqueID
@property (nonatomic) NSUInteger userInitiatedCaptureTime; // ivar: _userInitiatedCaptureTime
@property (copy, nonatomic) NSString *videoCodecType;


+(id)movieRecordingSettings;
+(id)movieRecordingSettingsFromMomentCaptureSettings:(id)arg0 ;
-(id)_initFromMomentCaptureSettings:(id)arg0 ;
-(id)_sanitizedMovieMetadataArrayForMovieMetadataArray:(id)arg0 exceptionReason:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)spatialOverCaptureGroupIdentifier;
-(void)dealloc;


@end


#endif