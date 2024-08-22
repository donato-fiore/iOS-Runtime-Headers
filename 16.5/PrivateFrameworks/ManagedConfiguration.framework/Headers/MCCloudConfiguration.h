// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCCLOUDCONFIGURATION_H
#define MCCLOUDCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MCCloudConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;


+(id)sharedConfiguration;
-(BOOL)alreadySignedIntoFaceTime;
-(BOOL)hasMAIDCredential;
-(BOOL)isAwaitingConfiguration;
-(BOOL)isProvisionallyEnrolled;
-(BOOL)isSupervised;
-(BOOL)isTeslaEnrolled;
-(id)MAIDUsername;
-(id)diagnosticsUploadURL;
-(id)language;
-(id)languageScript;
-(id)mdmVersionProtocol;
-(id)provisionalEnrollmentExpirationDate;
-(id)region;
-(id)skipSetupKeys;
-(id)tvProviderUserToken;
-(void)refreshDetailsFromDisk;


@end


#endif