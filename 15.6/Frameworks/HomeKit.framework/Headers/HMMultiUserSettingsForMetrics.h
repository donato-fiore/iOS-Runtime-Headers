// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMULTIUSERSETTINGSFORMETRICS_H
#define HMMULTIUSERSETTINGSFORMETRICS_H

@class NSArray, NSString, NSNumber;
@protocol HMFLogging, HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>


@interface HMMultiUserSettingsForMetrics : NSObject <HMFLogging, HMFObject, HMMessageEncoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSNumber *numSharedUsers; // ivar: _numSharedUsers
@property (copy) NSNumber *numUsersCloudShareTrustNotConfigured; // ivar: _numUsersCloudShareTrustNotConfigured
@property (copy) NSNumber *numUsersSharedBackingStoreNotRunningDueToError; // ivar: _numUsersSharedBackingStoreNotRunningDueToError
@property (copy) NSNumber *numUsersSharedBackingStoreNotRunningDueToStopped; // ivar: _numUsersSharedBackingStoreNotRunningDueToStopped
@property (copy) NSNumber *numUsersSharedBackingStoreNotStarted; // ivar: _numUsersSharedBackingStoreNotStarted
@property (copy) NSNumber *numUsersSharedBackingStoreRunning; // ivar: _numUsersSharedBackingStoreRunning
@property (copy) NSNumber *numUsersSharedBackingStoreSharedZoneWaitingForShareInvitation; // ivar: _numUsersSharedBackingStoreSharedZoneWaitingForShareInvitation
@property (copy) NSNumber *numUsersWithIdentifyVoiceOff; // ivar: _numUsersWithIdentifyVoiceOff
@property (copy) NSNumber *numUsersWithPlayBackInfluencesForYouOff; // ivar: _numUsersWithPlayBackInfluencesForYouOff
@property (copy) NSNumber *numUsersWithSettings; // ivar: _numUsersWithSettings
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithNumSharedUsers:(NSInteger)arg0 numUsersWithSettings:(NSInteger)arg1 numUsersWithIdentifyVoiceOff:(NSInteger)arg2 numUsersWithPlayBackInfluencesForYouOff:(NSInteger)arg3 numUsersCloudShareTrustNotConfigured:(NSInteger)arg4 numUsersSharedBackingStoreNotStarted:(NSInteger)arg5 numUsersSharedBackingStoreRunning:(NSInteger)arg6 numUsersSharedBackingStoreNotRunningDueToError:(NSInteger)arg7 numUsersSharedBackingStoreNotRunningDueToStopped:(NSInteger)arg8 numUsersSharedBackingStoreSharedZoneWaitingForShareInvitation:(NSInteger)arg9 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif