// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCLINICALACCOUNTONBOARDINGSESSION_H
#define WDCLINICALACCOUNTONBOARDINGSESSION_H

@class HKClinicalAccountStore;

#import <Foundation/Foundation.h>

#import "HRProfile.h"

@interface WDClinicalAccountOnboardingSession : NSObject {
    ? analyticsManager;
    ? sharingClient;
}


@property (nonatomic, readonly) HKClinicalAccountStore *accountStore; // ivar: accountStore
@property (nonatomic, readonly) BOOL allowsCancellingClinicalOnboarding;
@property (nonatomic, readonly) NSInteger context; // ivar: context
@property (nonatomic, readonly) NSUInteger options; // ivar: options
@property (nonatomic, readonly) HRProfile *profile; // ivar: profile
@property (nonatomic, readonly) BOOL shouldLaunchClinicalSharing;


+(id)makeFailedToOnboardAccountAlertControllerWithError:(id)arg0 ;
-(id)init;
-(id)initWithContext:(NSInteger)arg0 options:(NSUInteger)arg1 profile:(id)arg2 analyticsManager:(id)arg3 ;
-(id)makeDataTypeSelectionViewControllerForAccount:(id)arg0 ;
-(id)makeNecessaryScopesNotPresentViewControllerForAccount:(id)arg0 ;
-(void)persistEphemeralAccount:(id)arg0 fromSharing:(BOOL)arg1 completion:(id)arg2 ;
-(void)submitClinicalSharingOnboardingStepAnalytic:(NSInteger)arg0 ;


@end


#endif