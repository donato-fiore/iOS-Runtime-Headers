// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STTELEPHONYSTATUSDOMAINDATA_H
#define STTELEPHONYSTATUSDOMAINDATA_H

@class NSString;
@protocol STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData;

#import <Foundation/Foundation.h>

#import "STTelephonyStatusDomainSIMInfo.h"

@interface STTelephonyStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>



@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo; // ivar: _SIMOneInfo
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo; // ivar: _SIMTwoInfo
@property (readonly, nonatomic, getter=isCellularRadioCapabilityEnabled) BOOL cellularRadioCapabilityEnabled; // ivar: _cellularRadioCapabilityEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled; // ivar: _dualSIMEnabled
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *primarySIMInfo;
@property (readonly, nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead; // ivar: _radioModuleDead
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfo *secondarySIMInfo;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_anySIMInfoWithEmergencyOnlyService;
-(id)_anySIMInfoWithSIMPresent;
-(id)_dataPreferredSIMInfoIfSIMPresent;
-(id)_otherSIMInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithSIMOneInfo:(id)arg0 SIMTwoInfo:(id)arg1 cellularRadioCapabilityEnabled:(BOOL)arg2 dualSIMEnabled:(BOOL)arg3 radioModuleDead:(BOOL)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif