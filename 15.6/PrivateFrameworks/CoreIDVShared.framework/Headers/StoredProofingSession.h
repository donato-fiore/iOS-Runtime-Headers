// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOREDPROOFINGSESSION_H
#define STOREDPROOFINGSESSION_H

@class NSManagedObject, NSString, NSDate, NSSet;



@interface StoredProofingSession : NSManagedObject

@property (nonatomic) BOOL canUploadOnExpensiveNetwork;
@property (nonatomic) NSInteger cloudKitUploadsMaxRetryCount;
@property (nonatomic) NSInteger connectToWifiReminderInDays;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) BOOL didNotifyOnUploadsCompletion;
@property (nonatomic) BOOL didShowWifiReminderAlert;
@property (nonatomic, copy) NSString *idType;
@property (nonatomic) BOOL isAutoProvisioningRetryComplete;
@property (nonatomic, copy) NSString *lastExecutedActionIdentifier;
@property (nonatomic, copy) NSDate *lastProvisioningAttemptDate;
@property (nonatomic, copy) NSString *learnMoreURLString;
@property (nonatomic) NSInteger manualCheckInterval;
@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic, copy) NSString *partnerSchemeID;
@property (nonatomic) NSInteger proofingActionStatus;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic, copy) NSString *provisioningCredentialID;
@property (nonatomic, copy) NSDate *provisioningFailureDate;
@property (nonatomic) NSInteger provisioningRetryTimeout;
@property (nonatomic, copy) NSString *provisioningTargetInstanceID;
@property (nonatomic) BOOL shouldScheduleUploads;
@property (nonatomic) BOOL shouldShowNotificationOnWatch;
@property (nonatomic, copy) NSString *state;
@property (nonatomic) NSInteger target;
@property (nonatomic) NSInteger totalUploadAssetsFileSizeInBytes;
@property (nonatomic, retain) NSSet *uploadAssets;
@property (nonatomic, copy) NSString *workflowID;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif