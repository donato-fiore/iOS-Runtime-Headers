// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAVAILABILITYINVITATIONMANAGER_H
#define IMAVAILABILITYINVITATIONMANAGER_H

@class NSCache, SKStatusPublishingService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMAvailabilityInvitationManager : NSObject

@property (retain, nonatomic) NSCache *dateAttemptedInvitationByHandleCache; // ivar: _dateAttemptedInvitationByHandleCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dndBackgroundQueue; // ivar: _dndBackgroundQueue
@property (readonly, nonatomic, getter=isFocusConfigurationShareAcrossDevicesEnabled) BOOL focusConfigurationShareAcrossDevicesEnabled;
@property (retain, nonatomic) SKStatusPublishingService *publishingService; // ivar: _publishingService


+(id)sharedInstance;
-(BOOL)_isHandleIDEligibleToReceiveAutomaticInvitation:(id)arg0 ;
-(BOOL)availabilityEnabled;
-(id)_dndHandleForHandleID:(id)arg0 ;
-(id)_invitationCacheKeyForHandleID:(id)arg0 fromHandleID:(id)arg1 ;
-(id)_newDNDModeConfigurationService;
-(id)_skHandleForString:(id)arg0 ;
-(id)init;
-(id)newDNDGlobalConfigurationService;
-(void)_invitablityForHandle:(id)arg0 fromHandle:(id)arg1 completion:(id)arg2 ;
-(void)_invitationPayloadForHandleID:(id)arg0 completion:(id)arg1 ;
-(void)_isFocusStatusSharedWithHandle:(id)arg0 fromHandle:(id)arg1 completion:(id)arg2 ;
-(void)_republishCurrentAvailabilityStatus;
-(void)_sharePersonalAvailabilityWithSKHandle:(id)arg0 fromSKHandle:(id)arg1 allowingInvitationOfRemovedUsers:(BOOL)arg2 completion:(id)arg3 ;
-(void)attemptIfNeccessaryToAutomaticallyShareFocusStatusWithHandleID:(id)arg0 fromHandleID:(id)arg1 completion:(id)arg2 ;
-(void)isFocusStatusSharedWithHandleID:(id)arg0 fromHandleID:(id)arg1 completion:(id)arg2 ;
-(void)manuallyRemoveSharingOfFocusStatusWithHandleID:(id)arg0 completion:(id)arg1 ;
-(void)manuallyShareFocusStatusWithHandleID:(id)arg0 fromHandleID:(id)arg1 completion:(id)arg2 ;
-(void)repairSharedFocusStatusFollowingFailedValidationWithHandleID:(id)arg0 fromHandleID:(id)arg1 completion:(id)arg2 ;


@end


#endif