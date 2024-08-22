// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCOREORGANIZATIONSETTINGS_H
#define STCOREORGANIZATIONSETTINGS_H

@class NSString;
@protocol STUniquelySerializableManagedObject;


#import "STUniquedManagedObject.h"
#import "STCoreUser.h"

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>



@property (nonatomic) BOOL allLimitsEnabled;
@property (nonatomic) NSInteger communicationPolicy;
@property (nonatomic) NSInteger communicationWhileLimitedPolicy;
@property (nonatomic) NSInteger contactManagementState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled;
@property (nonatomic) BOOL isCommunicationSafetyNotificationEnabled;
@property (nonatomic) BOOL isCommunicationSafetyReceivingRestricted;
@property (nonatomic) BOOL isCommunicationSafetySendingRestricted;
@property (nonatomic) BOOL needsToSetPasscode;
@property (copy, nonatomic) NSString *passcode;
@property (readonly) Class superclass;
@property (retain, nonatomic) STCoreUser *user;


+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg0 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)redactedDescription;
-(void)_changeAppLimitsFromAskToWarn:(id)arg0 ;


@end


#endif