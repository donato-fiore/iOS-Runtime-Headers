// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKDEFAULTSETTINGSUIVISIBILITYPROVIDER_H
#define CRKDEFAULTSETTINGSUIVISIBILITYPROVIDER_H

@class NSString;
@protocol CRKCourseEnrollmentControllerObserver, CRKSettingsUIVisibilityProvider;

#import <Foundation/Foundation.h>

#import "CRKUserDefaultsObject.h"
#import "CRKCourseEnrollmentController.h"

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerObserver, CRKSettingsUIVisibilityProvider>

 {
    CRKUserDefaultsObject *mUIPreviouslyVisible;
    CRKCourseEnrollmentController *mEnrollmentController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *paneStatus; // ivar: _paneStatus
@property BOOL settingsUIVisible; // ivar: _settingsUIVisible
@property (readonly) Class superclass;


-(BOOL)isAnyCourseActiveInEnrollmentController:(id)arg0 ;
-(id)init;
-(void)connectToDaemon;
-(void)enrollmentControllerDidUpdateActiveCourses:(id)arg0 ;
-(void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)arg0 ;
-(void)migrateOldUserDefaultsValues;
-(void)updatePaneStatus;
-(void)updatePreviouslyVisibleDefaultWithValue:(BOOL)arg0 ;
-(void)updateVisibilityState;


@end


#endif