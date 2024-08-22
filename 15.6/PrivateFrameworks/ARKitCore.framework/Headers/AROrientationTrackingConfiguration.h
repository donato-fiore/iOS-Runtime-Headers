// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARORIENTATIONTRACKINGCONFIGURATION_H
#define ARORIENTATIONTRACKINGCONFIGURATION_H



#import "ARConfiguration.h"

@interface AROrientationTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;


+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(id)_querySupportedVideoFormats;
+(id)new;
+(id)supportedVideoFormats;
-(id)description;
-(id)init;


@end


#endif