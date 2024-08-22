// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRBUNDLEMANAGER_H
#define CRBUNDLEMANAGER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRBundleManager : NSObject {
    NSMutableSet *_bundles;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(Class)bundleClass;
+(id)bundleDirectoryName;
+(id)bundleDirectoryPath;
+(id)sharedInstance;
-(id)init;
-(void)_getBundlesOnCurrentQueueWithCompletion:(id)arg0 ;
-(void)getBundlesWithCompletion:(id)arg0 ;


@end


#endif