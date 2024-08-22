// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARORIENTATIONTRACKINGCONFIGURATION_H
#define ARORIENTATIONTRACKINGCONFIGURATION_H



#import "ARConfiguration.h"

@interface AROrientationTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;


+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(id)_querySupportedVideoFormats;
+(id)new;
+(id)recommendedVideoFormatFor4KResolution;
+(id)recommendedVideoFormatForHighResolutionFrameCapturing;
+(id)supportedVideoFormats;
-(id)description;
-(id)init;


@end


#endif