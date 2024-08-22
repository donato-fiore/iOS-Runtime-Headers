// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSIRIENDPOINTPROFILEFIELDS_H
#define HMDSIRIENDPOINTPROFILEFIELDS_H

@class HMFObject, NSString;



@interface HMDSiriEndpointProfileFields : HMFObject

@property (readonly, copy) NSString *isSiriEnableField; // ivar: _isSiriEnableField
@property (readonly, copy) NSString *isSiriListeningField; // ivar: _isSiriListeningField
@property (readonly, copy) NSString *needsOnboardingField; // ivar: _needsOnboardingField
@property (readonly, copy) NSString *siriLightOnUseField; // ivar: _siriLightOnUseField
@property (readonly, copy) NSString *siriSoundOnUseField; // ivar: _siriSoundOnUseField
@property (readonly, copy) NSString *siriTouchToUseField; // ivar: _siriTouchToUseField
@property (readonly, copy) NSString *supportsOnboardingField; // ivar: _supportsOnboardingField


-(id)attributeDescriptions;
-(id)initWithNeedsOnboardingField:(id)arg0 supportsOnboardingField:(id)arg1 siriEnableField:(id)arg2 siriListeningField:(id)arg3 siriTouchToUseField:(id)arg4 siriLightOnUseField:(id)arg5 siriSoundOnUseField:(id)arg6 ;
-(id)serializeFields;


@end


#endif