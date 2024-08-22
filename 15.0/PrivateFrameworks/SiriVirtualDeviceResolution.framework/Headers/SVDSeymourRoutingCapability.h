// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SVDSEYMOURROUTINGCAPABILITY_H
#define SVDSEYMOURROUTINGCAPABILITY_H



#import "SVDCapability.h"
#import "_TtC27SiriVirtualDeviceResolution24SeymourRoutingCapability.h"

@interface SVDSeymourRoutingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution24SeymourRoutingCapability *_backing;
}




+(BOOL)supportsSecureCoding;
+(id)capabilityDescriptionMatchingSupportStatus:(NSInteger)arg0 ;
-(NSInteger)supportsSeymourRouting;
-(id)_swiftBacking;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif