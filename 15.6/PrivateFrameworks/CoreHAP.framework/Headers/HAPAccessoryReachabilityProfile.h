// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSORYREACHABILITYPROFILE_H
#define HAPACCESSORYREACHABILITYPROFILE_H

@class HMFObject, NSString;
@protocol HAPAccessoryReachabilityProfile;


#import "HAPCharacteristic.h"

@interface HAPAccessoryReachabilityProfile : HMFObject <HAPAccessoryReachabilityProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPCharacteristic *pollCharacteristic; // ivar: _pollCharacteristic
@property (nonatomic) CGFloat sleepInterval; // ivar: _sleepInterval
@property (retain, nonatomic) HAPCharacteristic *sleepIntervalCharacteristic; // ivar: _sleepIntervalCharacteristic
@property (readonly) Class superclass;


+(CGFloat)timeIntervalFromMillisecondNumberValue:(id)arg0 ;
+(id)shortDescription;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDiscoveredServices:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif