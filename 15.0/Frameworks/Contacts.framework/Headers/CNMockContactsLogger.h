// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMOCKCONTACTSLOGGER_H
#define CNMOCKCONTACTSLOGGER_H

@class NSString;
@protocol CNContactsLogger;

#import <Foundation/Foundation.h>


@interface CNMockContactsLogger : NSObject <CNContactsLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)SPIUsageLackingEntitlementGrantedForPID:(int)arg0 ;
-(void)SPIUsageLackingEntitlementRejectedForPID:(int)arg0 ;
-(void)XPCConnectionWasInterrupted;
-(void)XPCConnectionWasInvalidated;
-(void)accessAuthorizationStatusWasDenied;
-(void)addingContacts:(id)arg0 toContainerWithIdentifier:(id)arg1 ;
-(void)applyContactUpdateOfKind:(char *)arg0 value:(id)arg1 property:(id)arg2 ;
-(void)changedMeContact:(id)arg0 ;
-(void)changingMeContact:(id)arg0 ;
-(void)clearingChangeHistory:(id)arg0 ;
-(void)contactsAccessWasGranted:(BOOL)arg0 ;
-(void)deleteImageRecentsMetadataRequestFailed:(id)arg0 ;
-(void)deletingContact:(id)arg0 ;
-(void)didFetchContacts:(id)arg0 error:(id)arg1 ;
-(void)didFetchEncodedContacts:(id)arg0 error:(id)arg1 ;
-(void)errorWhenQueryingTetheredSyncData:(id)arg0 ;
-(void)failedToApplyContactUpdateOfKind:(char *)arg0 value:(id)arg1 property:(id)arg2 error:(id)arg3 ;
-(void)fetchContactsMatchingPredicate:(id)arg0 unifyResults:(BOOL)arg1 keysToFetch:(id)arg2 ;
-(void)fetchContactsProgressivelyMatchingPredicate:(id)arg0 unifyResults:(BOOL)arg1 keysToFetch:(id)arg2 ;
-(void)fetchEncodedContactsMatchingPredicate:(id)arg0 unifyResults:(BOOL)arg1 keysToFetch:(id)arg2 ;
-(void)fetchingChangeHistory:(id)arg0 ;
-(void)fetchingContactCount:(id)arg0 ;
-(void)fetchingContactIdentifierWithMatchingDictionary:(id)arg0 ;
-(void)fetchingContactSectionCounts:(id)arg0 ;
-(void)fetchingContactWithUserActivity:(id)arg0 ;
-(void)fetchingContacts:(id)arg0 ;
-(void)fetchingContactsBatch:(id)arg0 ;
-(void)fetchingContainers:(id)arg0 ;
-(void)fetchingDefaultContainerIdentifier:(id)arg0 ;
-(void)fetchingGroups:(id)arg0 ;
-(void)fetchingMeContactIdentifier:(id)arg0 ;
-(void)internalError:(id)arg0 ;
-(void)noAccessToContactsWithError:(id)arg0 ;
-(void)postingNotification:(id)arg0 ;
-(void)postingNotificationWithName:(id)arg0 ;
-(void)registeringForChangeHistory:(id)arg0 ;
-(void)removeContactImageData;
-(void)requestAuthorizationWasDenied;
-(void)requestingAccessForContacts:(id)arg0 ;
-(void)resettingSortDataIfNeeded:(id)arg0 ;
-(void)saveRequestFailed:(id)arg0 ;
-(void)saveRequestInvalid:(id)arg0 ;
-(void)saving:(id)arg0 ;
-(void)serviceError:(id)arg0 ;
-(void)servicingContactsRequest:(id)arg0 ;
-(void)setContactImageData:(id)arg0 ;
-(void)setContactImageData:(id)arg0 format:(char *)arg1 cropRect:(struct CGRect )arg2 ;
-(void)setContactImageDataZeroCropRect:(id)arg0 format:(char *)arg1 ;
-(void)settingDefaultAccount:(id)arg0 ;
-(void)unregisteringForChangeHistory:(id)arg0 ;
-(void)updatingContact:(id)arg0 ;


@end


#endif