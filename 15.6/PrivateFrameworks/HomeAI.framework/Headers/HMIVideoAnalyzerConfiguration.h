// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOANALYZERCONFIGURATION_H
#define HMIVIDEOANALYZERCONFIGURATION_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, NSCopying, NSSecureCoding;


#import "HMICamera.h"

@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSCopying, NSSecureCoding>



@property BOOL allowReducedConfiguration; // ivar: _allowReducedConfiguration
@property CGFloat analysisFPS; // ivar: _analysisFPS
@property (retain) HMICamera *camera; // ivar: _camera
@property (readonly, copy) NSString *debugDescription;
@property NSInteger decodeMode; // ivar: _decodeMode
@property (readonly, copy) NSString *description;
@property BOOL enableTemporalEventFiltering; // ivar: _enableTemporalEventFiltering
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *homeUUID; // ivar: _homeUUID
@property CGFloat maxFragmentAnalysisDuration; // ivar: _maxFragmentAnalysisDuration
@property ? maxFragmentDuration; // ivar: _maxFragmentDuration
@property CGFloat minFrameQuality; // ivar: _minFrameQuality
@property CGFloat minFrameScale; // ivar: _minFrameScale
@property NSInteger packageClassifierMode; // ivar: _packageClassifierMode
@property BOOL passthroughAudio; // ivar: _passthroughAudio
@property BOOL redactFrames; // ivar: _redactFrames
@property BOOL saveAnalyzerResultsToDisk; // ivar: _saveAnalyzerResultsToDisk
@property (readonly) Class superclass;
@property NSUInteger thumbnailHeight; // ivar: _thumbnailHeight
@property ? thumbnailInterval; // ivar: _thumbnailInterval
@property ? timelapseInterval; // ivar: _timelapseInterval
@property ? timelapsePreferredFragmentDuration; // ivar: _timelapsePreferredFragmentDuration
@property BOOL transcode; // ivar: _transcode
@property unsigned int transcodeCodecType; // ivar: _transcodeCodecType


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)timelapseVideo;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )timelapseVideoPreferredFragmentDuration;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setTimelapseVideo:(BOOL)arg0 ;
-(void)setTimelapseVideoPreferredFragmentDuration:(struct ? )arg0 ;


@end


#endif