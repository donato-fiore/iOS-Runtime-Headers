// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARIMAGETRACKINGCONFIGURATION_H
#define ARIMAGETRACKINGCONFIGURATION_H

@class NSSet;


#import "ARConfiguration.h"

@interface ARImageTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) NSInteger maximumNumberOfTrackedImages; // ivar: _maximumNumberOfTrackedImages
@property (copy, nonatomic) NSSet *trackingImages; // ivar: _trackingImages


+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(id)new;
+(id)recommendedVideoFormatFor4KResolution;
+(id)recommendedVideoFormatForHighResolutionFrameCapturing;
+(id)supportedVideoFormats;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)createTechniques:(id)arg0 ;


@end


#endif