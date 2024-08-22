// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSLEGACYSIGNATUREVALIDATIONSERVICE_H
#define FBSLEGACYSIGNATUREVALIDATIONSERVICE_H

@class NSArray, NSString;
@protocol FBSApplicationTrustDataProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSApplicationInfo.h"

@interface FBSLegacySignatureValidationService : NSObject <FBSApplicationTrustDataProvider>

 {
    FBSApplicationInfo *_appInfo;
    BOOL _hasUniversalProvisioningProfile;
    BOOL _hasFreeDeveloperProvisioningProfile;
    BOOL _isManaged;
    NSArray *_provisioningProfiles;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_workQueue_signatureNeedsExplicitUserTrust;
-(NSUInteger)trustStateForApplication:(id)arg0 ;
-(id)_workQueue_expirationDateForProvisioningProfile;
-(id)initWithApplicationInfo:(id)arg0 andProvisioningProfiles:(id)arg1 isManaged:(BOOL)arg2 ;
-(void)_initializeProfiles:(id)arg0 ;


@end


#endif