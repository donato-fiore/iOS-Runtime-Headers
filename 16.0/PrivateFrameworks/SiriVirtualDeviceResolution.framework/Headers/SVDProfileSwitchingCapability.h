// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVDPROFILESWITCHINGCAPABILITY_H
#define SVDPROFILESWITCHINGCAPABILITY_H



#import "SVDCapability.h"
#import "_TtC27SiriVirtualDeviceResolution26ProfileSwitchingCapability.h"

@interface SVDProfileSwitchingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution26ProfileSwitchingCapability *_backing;
}




+(BOOL)supportsSecureCoding;
+(id)capabilityDescriptionMatchingSupportStatus:(NSInteger)arg0 ;
-(NSInteger)supportsProfileSwitching;
-(id)_swiftBacking;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif