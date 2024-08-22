// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSAUTOFILLQUIRKSMANAGER_H
#define WBSAUTOFILLQUIRKSMANAGER_H

@class NSString;
@protocol WBSRemotePlistControllerDelegate;

#import <Foundation/Foundation.h>

#import "WBSPasswordGenerationManager.h"
#import "WBSAutoFillAssociatedDomainsManager.h"
#import "WBSRemotePlistController.h"
#import "WBSPasswordAuditingEligibleDomainsManager.h"
#import "WBSChangePasswordURLManager.h"

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate>

 {
    WBSPasswordGenerationManager *_passwordGenerationManager;
    WBSAutoFillAssociatedDomainsManager *_associatedDomainsManager;
    WBSRemotePlistController *_remotePlistController;
    WBSPasswordAuditingEligibleDomainsManager *_passwordAuditingEligibleDomainsManager;
    WBSChangePasswordURLManager *_changePasswordURLManager;
}


@property (readonly, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, nonatomic) WBSChangePasswordURLManager *changePasswordURLManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (readonly, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration; // ivar: _shouldAttemptToDownloadConfiguration
@property (readonly) Class superclass;


-(BOOL)isAutomaticLoginDisallowedOnURL:(id)arg0 ;
-(BOOL)isStreamlinedLoginDisallowedOnURL:(id)arg0 ;
-(id)_changePasswordURLStringsFromCurrentSnapshot;
-(id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
-(id)_domainsToConsiderIdenticalFromCurrentSnapshot;
-(id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
-(id)_passwordRequirementsByDomainFromCurrentSnapshot;
-(id)init;
-(id)initWithBuiltInQuirksURL:(id)arg0 downloadsDirectoryURL:(id)arg1 resourceName:(id)arg2 resourceVersion:(id)arg3 updateDateDefaultsKey:(id)arg4 updateInterval:(CGFloat)arg5 ;
-(void)beginLoadingQuirksFromDisk;
-(void)didDownloadPlistForRemotePlistController:(id)arg0 ;
-(void)prepareForTermination;


@end


#endif