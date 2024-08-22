// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC27SIRIVIRTUALDEVICERESOLUTION17SPEAKERCAPABILITY_H
#define _TTC27SIRIVIRTUALDEVICERESOLUTION17SPEAKERCAPABILITY_H

@class NSString;
@protocol _TtP27SiriVirtualDeviceResolution18CapabilityMatching_, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC27SiriVirtualDeviceResolution17SpeakerCapability : NSObject <_TtP27SiriVirtualDeviceResolution18CapabilityMatching_, NSSecureCoding>

 {
    ? primitivesMap;
    ? key;
}


@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) NSInteger qualityScore;
@property (nonatomic, readonly) NSInteger supportStatus;


+(BOOL)supportsSecureCoding;
+(id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(NSInteger)arg0 upperBound:(NSInteger)arg1 ;
+(id)capabilityDescriptionMatchingSupportStatus:(NSInteger)arg0 ;
-(BOOL)matchesWithDescriptions:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 qualityScore:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif