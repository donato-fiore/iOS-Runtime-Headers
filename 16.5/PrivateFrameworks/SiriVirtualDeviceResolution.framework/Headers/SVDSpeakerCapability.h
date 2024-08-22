// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVDSPEAKERCAPABILITY_H
#define SVDSPEAKERCAPABILITY_H



#import "SVDCapability.h"
#import "_TtC27SiriVirtualDeviceResolution17SpeakerCapability.h"

@interface SVDSpeakerCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution17SpeakerCapability *_backing;
}




+(BOOL)supportsSecureCoding;
+(id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(NSInteger)arg0 upperBound:(NSInteger)arg1 ;
+(id)capabilityDescriptionMatchingSupportStatus:(NSInteger)arg0 ;
+(id)newWithBuilder:(id)arg0 ;
-(NSInteger)qualityScore;
-(NSInteger)supportStatus;
-(id)_swiftBacking;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 qualityScore:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif