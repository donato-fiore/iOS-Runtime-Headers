// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMUTABLETELEPHONYSTATUSDOMAINDATA_H
#define STMUTABLETELEPHONYSTATUSDOMAINDATA_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STTelephonyStatusDomainData.h"
#import "STTelephonyStatusDomainSIMInfo.h"

@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (nonatomic, getter=isCellularRadioCapabilityEnabled) BOOL cellularRadioCapabilityEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)updateSIMOneInfoWithBlock:(id)arg0 ;
-(void)updateSIMTwoInfoWithBlock:(id)arg0 ;


@end


#endif