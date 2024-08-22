// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CRKPROVIDERBUNDLEMANAGER_H
#define _CRKPROVIDERBUNDLEMANAGER_H

@class CRBundleManager, NSMutableSet;



@interface _CRKProviderBundleManager : CRBundleManager {
    NSMutableSet *_providerBundles;
}




+(Class)bundleClass;
+(id)bundleDirectoryName;
+(id)sharedInstance;
-(void)getProviderBundlesWithCompletion:(id)arg0 ;


@end


#endif