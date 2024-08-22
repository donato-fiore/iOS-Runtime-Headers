// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCOURSEENROLLMENTCONTROLLER_H
#define CRKCOURSEENROLLMENTCONTROLLER_H

@class CATRemoteTaskOperation, NSSet, NSArray, NSString, NSHashTable, NSDictionary;
@protocol CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider;

#import <Foundation/Foundation.h>

#import "CRKSecureCodedUserDefaultsObject.h"
#import "CRKSettingsUIVisibleRemoteValue.h"
#import "CRKStudentDaemonProxy.h"

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider>

 {
    CATRemoteTaskOperation *mBrowseOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    BOOL mConfigurationFetched;
    CRKSettingsUIVisibleRemoteValue *mSettingsUIVisibleRemoteValue;
}


@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers; // ivar: _acceptedInvitationIdentifiers
@property (copy, nonatomic) NSSet *activeInstructors; // ivar: _activeInstructors
@property (nonatomic) NSUInteger configurationType; // ivar: _configurationType
@property (copy, nonatomic) NSArray *courseInvitations; // ivar: _courseInvitations
@property (copy, nonatomic) NSArray *courses; // ivar: _courses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchActiveInstructorsOperation; // ivar: _fetchActiveInstructorsOperation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers; // ivar: _observingInstructorIdentifiersByCourseIdentifiers
@property (readonly, nonatomic) BOOL settingsUIVisible;
@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy; // ivar: _studentDaemonProxy
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRemoteLearning;


+(id)keyPathsForValuesAffectingSupportsRemoteLearning;
+(id)sharedEnrollmentController;
-(BOOL)canBrowseForInvitations;
-(BOOL)instructor:(id)arg0 isForCourse:(id)arg1 ;
-(BOOL)isCourseActive:(id)arg0 ;
-(BOOL)isInstructorWithIdentifier:(id)arg0 activeForCourse:(id)arg1 ;
-(BOOL)isInstructorWithIdentifier:(id)arg0 disconnectableForCourse:(id)arg1 ;
-(BOOL)isInstructorWithIdentifier:(id)arg0 observingStudentScreenForCourse:(id)arg1 ;
-(BOOL)isStudentScreenBeingObservedForCourse:(id)arg0 ;
-(BOOL)updateScreenObservingInstructors;
-(id)activeCourseIdentifiers;
-(id)activeCourses;
-(id)activeInstructorsWithIdentifier:(id)arg0 forCourse:(id)arg1 ;
-(id)anonymousInstructorUsersForCourse:(id)arg0 ;
-(id)courseWithIdentifier:(id)arg0 ;
-(id)coursesBySortingCourses:(id)arg0 ;
-(id)init;
-(id)initWithStudentDaemonProxy:(id)arg0 ;
-(id)instructorUsersForCourse:(id)arg0 ;
-(id)invitationWithCourseIdentifier:(id)arg0 ;
-(id)observersRespondingToSelector:(SEL)arg0 ;
-(id)syntheticUserForAnonymousInstructor:(id)arg0 ;
-(void)addEnrollmentObserver:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)daemonProxy:(id)arg0 didReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)daemonProxyDidConnect:(id)arg0 ;
-(void)daemonProxyDidDisconnect:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateActiveCourses;
-(void)didUpdateCourses;
-(void)didUpdateInvitations;
-(void)didUpdateSettingsUIVisibility;
-(void)disconnectInstructorWithIdentifier:(id)arg0 forCourse:(id)arg1 ;
-(void)disconnectOperationDidFinish:(id)arg0 ;
-(void)fetchActiveInstructors;
-(void)fetchActiveInstructorsOperationDidFinish:(id)arg0 ;
-(void)fetchConfiguration;
-(void)fetchConfigurationTypeOperationDidFinish:(id)arg0 ;
-(void)fetchCourseInvitations;
-(void)fetchCourseInvitationsOperationDidFinish:(id)arg0 ;
-(void)fetchCourses;
-(void)fetchCoursesOperationDidFinish:(id)arg0 ;
-(void)fetchStoredCourses;
-(void)invitationWithIdentifierDidFail:(id)arg0 withLocalizedReason:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startBrowsingForInvitations;
-(void)startLongRunningOperations;
-(void)stopBrowsingForInvitations;
-(void)stopLongRunningOperations;
-(void)storeCourses;
-(void)taskOperation:(id)arg0 didPostNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)updateInvitationBrowsingStatus;


@end


#endif