// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSISTANTMETRICS_H
#define ASSISTANTMETRICS_H

@class PETEventProperty, PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface AssistantMetrics : NSObject {
    PETEventProperty *_toggleTrackerNameProperty;
    PETEventProperty *_detailToggleTrackerNameProperty;
    PETEventProperty *_onOffProperty;
    PETEventProperty *_confirmedTrueFalseProperty;
    PETEventProperty *_siriSourceProperty;
    PETEventProperty *_foundInAppsProperty;
    PETScalarEventTracker *_visitTracker;
    PETScalarEventTracker *_enableSiriTracker;
    PETScalarEventTracker *_disableSiriTracker;
    PETScalarEventTracker *_startEnrollmentTracker;
    PETScalarEventTracker *_toggleTracker;
    PETScalarEventTracker *_detailVisitTracker;
    PETScalarEventTracker *_detailVisitFoundInAppsTracker;
    PETScalarEventTracker *_detailToggleFoundInAppsTracker;
    PETScalarEventTracker *_detailToggleSiriKitTracker;
    PETScalarEventTracker *_detailToggleSearchTracker;
}




+(id)sharedMetrics;
+(void)didDetailToggle:(id)arg0 bundleId:(id)arg1 on:(BOOL)arg2 ;
+(void)didDetailVisit:(id)arg0 ;
+(void)didDisableSiriConfirmed:(BOOL)arg0 source:(id)arg1 ;
+(void)didEnableSiriConfirmed:(BOOL)arg0 source:(id)arg1 ;
+(void)didStartEnrollment:(BOOL)arg0 ;
+(void)didToggle:(id)arg0 on:(BOOL)arg1 ;
+(void)didVisit;
-(id)__confirmedTrueFalseProperty;
-(id)__detailToggleFoundInAppsTracker;
-(id)__detailToggleSearchTracker;
-(id)__detailToggleSiriKitTracker;
-(id)__detailToggleTrackerNameProperty;
-(id)__detailVisitFoundInAppsTracker;
-(id)__detailVisitTracker;
-(id)__disableSiriTracker;
-(id)__enableSiriTracker;
-(id)__foundInAppsProperty;
-(id)__onOffProperty;
-(id)__siriSourceProperty;
-(id)__startEnrollmentTracker;
-(id)__toggleTracker;
-(id)__toggleTrackerNameProperty;
-(id)__visitTracker;
-(void)logDetailToggle:(id)arg0 bundleId:(id)arg1 on:(BOOL)arg2 ;
-(void)logDetailVisit:(id)arg0 ;
-(void)logDisableSiriConfirmed:(BOOL)arg0 source:(id)arg1 ;
-(void)logEnableSiriConfirmed:(BOOL)arg0 source:(id)arg1 ;
-(void)logStartEnrollment:(BOOL)arg0 ;
-(void)logToggle:(id)arg0 on:(BOOL)arg1 ;
-(void)logVisit;


@end


#endif