// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSAPPLICATIONDATASTORECLIENTFACTORY_H
#define FBSAPPLICATIONDATASTORECLIENTFACTORY_H

@class NSArray;
@protocol OS_dispatch_queue, FBSApplicationDataStoreRepositoryClient;

#import <Foundation/Foundation.h>


@interface FBSApplicationDataStoreClientFactory : NSObject {
    NSUInteger _count;
    NSObject<OS_dispatch_queue> *_queue;
    id<FBSApplicationDataStoreRepositoryClient> *_sharedClient;
}


@property (retain, nonatomic) NSArray *prefetchedKeys; // ivar: _prefetchedKeys


+(BOOL)isServerProcess;
+(id)sharedInstance;
-(id)checkout;
-(id)init;
-(void)checkin;


@end


#endif