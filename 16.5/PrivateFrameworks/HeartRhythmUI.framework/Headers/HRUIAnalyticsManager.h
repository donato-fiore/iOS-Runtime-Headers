// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRUIANALYTICSMANAGER_H
#define HRUIANALYTICSMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HRUIAnalyticsManager : NSObject

@property (nonatomic) NSInteger currentAtrialFibrillationOnboardingStep; // ivar: _currentAtrialFibrillationOnboardingStep
@property (nonatomic) NSInteger currentElectrocardiogramOnboardingStep; // ivar: _currentElectrocardiogramOnboardingStep
@property (retain, nonatomic) NSString *productType; // ivar: _productType


+(id)sharedManager;
-(id)_pdfSharedStringFromProvenance:(NSUInteger)arg0 ;
-(id)_stringAlgorithmVersionFromOnboardingVersion:(id)arg0 ;
-(id)_stringFromHRUIAtrialFibrillationDetectionOnboardingStep:(NSInteger)arg0 ;
-(id)_stringFromHRUIElectrocardiogramOnboardingStep:(NSInteger)arg0 ;
-(id)_stringFromOnboardingType:(NSInteger)arg0 ;
-(id)_stringFromOnboardingVersion:(id)arg0 ;
-(id)_stringFromProvenance:(NSInteger)arg0 ;
-(id)init;
-(void)_sendAnalyticsEvent:(id)arg0 withPayload:(id)arg1 ;
-(void)trackAtrialFibrillationDetectionOnboardingStep:(NSInteger)arg0 forOnboardingVersion:(NSInteger)arg1 countryCode:(id)arg2 provenance:(NSInteger)arg3 ;
-(void)trackElectrocardiogramDataTypeViewed;
-(void)trackElectrocardiogramOnboardingStep:(NSInteger)arg0 forOnboardingType:(NSInteger)arg1 onboardingVersion:(id)arg2 countryCode:(id)arg3 provenance:(NSInteger)arg4 ;
-(void)trackElectrocardiogramPDFShared;
-(void)trackElectrocardiogramPDFSharedFrom:(NSUInteger)arg0 ;
-(void)trackElectrocardiogramPDFViewed;


@end


#endif