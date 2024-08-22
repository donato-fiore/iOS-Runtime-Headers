// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVDVIDEOPLAYBACKCAPABILITY_H
#define SVDVIDEOPLAYBACKCAPABILITY_H



#import "SVDCapability.h"
#import "_TtC27SiriVirtualDeviceResolution23VideoPlaybackCapability.h"

@interface SVDVideoPlaybackCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution23VideoPlaybackCapability *_backing;
}




+(BOOL)supportsSecureCoding;
+(id)capabilityDescriptionMatchingSupportStatus:(NSInteger)arg0 ;
-(NSInteger)supportsVideoPlayback;
-(id)_swiftBacking;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif