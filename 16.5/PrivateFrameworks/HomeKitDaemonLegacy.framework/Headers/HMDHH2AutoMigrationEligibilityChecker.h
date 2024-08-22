// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2AUTOMIGRATIONELIGIBILITYCHECKER_H
#define HMDHH2AUTOMIGRATIONELIGIBILITYCHECKER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDFeaturesDataSource;


#import "HMDAppleAccountManager.h"
#import "HMDHomeManager.h"

@interface HMDHH2AutoMigrationEligibilityChecker : HMFObject <HMFLogging>

 {
    HMDAppleAccountManager *_accountManager;
    id<HMDFeaturesDataSource> *_featuresDataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (copy) id *isHSA2EnabledDeterminationHandler; // ivar: _isHSA2EnabledDeterminationHandler
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 accountManager:(id)arg1 featuresDataSource:(id)arg2 ;
-(void)fetchIsCurrentUserEligibleForAutoMigrationByHomeOwnerWithCompletion:(id)arg0 ;
-(void)fetchIsCurrentUserEligibleForAutoMigrationWithCompletion:(id)arg0 ;


@end


#endif