// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEQUARANTINEPOLICYMANAGER_H
#define WFREMOTEQUARANTINEPOLICYMANAGER_H

@class CKContainer, CKDatabase, NSBundle;

#import <Foundation/Foundation.h>


@interface WFRemoteQuarantinePolicyManager : NSObject

@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSBundle *localPolicyBundle; // ivar: _localPolicyBundle


+(id)sharedManager;
-(BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)persistAssetToDisk:(id)arg0 error:(*id)arg1 ;
-(BOOL)processAsset:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)latestRemotePolicyAssetBundle;
-(id)localizedString:(id)arg0 ;
-(id)policyAssetBundle;
-(id)policyString;
-(id)policyStringForBundleIfValid:(id)arg0 ;
-(id)prepareDirectoryForAssetWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)updatePolicyWithXPCActivity:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif