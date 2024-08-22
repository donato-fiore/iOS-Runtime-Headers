// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICALIDDATAMANAGER_H
#define HDMEDICALIDDATAMANAGER_H

@class NSString;
@protocol HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDMedicalIDDataManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


-(BOOL)deleteMedicalIDDataWithError:(*id)arg0 ;
-(BOOL)obliterateMedicalIDDataWithReason:(id)arg0 error:(*id)arg1 ;
-(BOOL)unitTest_persistMedicalIDData:(id)arg0 ;
-(BOOL)updateMedicalIDWithLocalData:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateMedicalIDWithSyncedData:(id)arg0 provenance:(id)arg1 error:(*id)arg2 ;
-(NSInteger)medicalIDSetupStatusWithError:(*id)arg0 ;
-(id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(*id)arg0 ;
-(id)fetchMedicalIDIfSetUpWithError:(*id)arg0 ;
-(id)fetchMedicalIDWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)medicalIDClinicalContactsWithError:(*id)arg0 ;
-(id)medicalIDEmergencyContactsWithError:(*id)arg0 ;
-(id)unitTest_medicalIDData;
-(void)_badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id)arg0 ;
-(void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;


@end


#endif