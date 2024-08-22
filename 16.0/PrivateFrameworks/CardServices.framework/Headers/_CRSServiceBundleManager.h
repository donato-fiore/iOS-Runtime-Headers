// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CRSSERVICEBUNDLEMANAGER_H
#define _CRSSERVICEBUNDLEMANAGER_H

@class CRBundleManager;



@interface _CRSServiceBundleManager : CRBundleManager



+(Class)bundleClass;
+(id)bundleDirectoryName;
+(id)sharedInstance;
-(void)getServiceBundlesWithCompletion:(id)arg0 ;


@end


#endif