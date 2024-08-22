// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDMCLOUDCONFIGURATION_H
#define MDMCLOUDCONFIGURATION_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDMCloudConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *details;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSDictionary *memberQueueDetails; // ivar: _memberQueueDetails
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails; // ivar: _memberQueueSetAsideDetails
@property (copy, nonatomic) NSDictionary *setAsideDetails;


+(id)sharedConfiguration;
-(BOOL)alreadySignedIntoFaceTime;
-(BOOL)hasMAIDCredential;
-(BOOL)isAwaitingConfiguration;
-(BOOL)isMDMUnremovable;
-(BOOL)isProvisionallyEnrolled;
-(BOOL)isSupervised;
-(BOOL)isTeslaEnrolled;
-(id)MAIDUsername;
-(id)diagnosticsUploadURL;
-(id)enrollmentAnchorCertificates;
-(id)enrollmentServerInfo;
-(id)enrollmentServerSupportedFeatures;
-(id)enrollmentServerURL;
-(id)init;
-(id)language;
-(id)languageScript;
-(id)mdmVersionProtocol;
-(id)provisionalEnrollmentExpirationDate;
-(id)region;
-(id)skipSetupKeys;
-(id)tvProviderUserToken;
-(int)userMode;
-(void)refreshDetailsFromDisk;


@end


#endif