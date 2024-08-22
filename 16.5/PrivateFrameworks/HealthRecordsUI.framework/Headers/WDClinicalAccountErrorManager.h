// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCLINICALACCOUNTERRORMANAGER_H
#define WDCLINICALACCOUNTERRORMANAGER_H

@class HKClinicalAccountStore, SFSafariViewController;

#import <Foundation/Foundation.h>


@interface WDClinicalAccountErrorManager : NSObject {
    HKClinicalAccountStore *_clinicalAccountStore;
}


@property (weak, nonatomic) SFSafariViewController *activeLoginViewController; // ivar: _activeLoginViewController


+(id)sharedInstance;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)_dismissReloginViewController:(id)arg0 ;
-(void)_triggerSyncAfterAuthorizationChange;
-(void)reloginAccount:(id)arg0 fromPresenter:(id)arg1 profile:(id)arg2 completion:(id)arg3 ;


@end


#endif