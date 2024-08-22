// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADDEFAULTPERMISSIONVALIDATOR_H
#define CADDEFAULTPERMISSIONVALIDATOR_H

@class NSString;
@protocol CADPermissionValidator;

#import <Foundation/Foundation.h>

#import "ClientConnection.h"

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator>



@property (readonly) BOOL canAccessDatabaseBookmarks;
@property (readonly) BOOL canMakeSpotlightChanges;
@property (readonly) BOOL canModifyBirthdayCalendar;
@property (readonly) BOOL canModifyCalendarDatabase;
@property (readonly) BOOL canModifySuggestedEventCalendar;
@property (readonly, weak, nonatomic) ClientConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasCalendarToolEntitlement;
@property (readonly) BOOL hasChangeIdTrackingOverrideEntitlement;
@property (readonly) BOOL hasContactsUIEntitlement;
@property (readonly) BOOL hasManagedConfigurationBundleIDOverrideEntitlement;
@property (readonly) BOOL hasNotificationCountEntitlement;
@property (readonly) BOOL hasSyncClientEntitlement;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL internalAccessLevelGranted;
@property (readonly) BOOL isCalendarDaemon;
@property (readonly) BOOL isFirstPartyCalendarApp;
@property (readonly) BOOL shouldTrustClientEnforcedManagedConfigurationAccess;
@property (readonly) BOOL storageManagementAccessGranted;
@property (readonly) Class superclass;
@property (readonly) BOOL testingAccessLevelGranted;


-(BOOL)_valueForBooleanEntitlement:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_valueForStringEntitlement:(id)arg0 matchesString:(id)arg1 ;
-(id)initWithClientConnection:(id)arg0 ;


@end


#endif