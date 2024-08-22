// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCMDMCONFIGURATION_H
#define MCMDMCONFIGURATION_H

@class NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface MCMDMConfiguration : NSObject

@property (readonly) NSString *easEnrollmentID;
@property (readonly) BOOL isUserEnrollment;
@property (readonly) NSString *memberQueueManagingProfileIdentifier;
@property (readonly) NSDictionary *memberQueueOrganizationInfo;
@property (readonly) NSURL *memberQueueServerURL;
@property (readonly) NSString *personaID;


+(id)sharedConfiguration;
-(void)refreshDetailsFromDisk;


@end


#endif