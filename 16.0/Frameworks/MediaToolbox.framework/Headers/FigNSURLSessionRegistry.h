// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGNSURLSESSIONREGISTRY_H
#define FIGNSURLSESSIONREGISTRY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigNSURLSessionRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_sessionArray;
}




-(?)copySessionAndAssertionForClientBundleIdentifier:(?)arg0 clientPersonaIdentifier:(?)arg1 dispatchQueue:(?)arg2 outSessionoutAssertion;
-(id)init;
-(void)_checkForDoom:(id)arg0 ;
-(void)dealloc;
-(void)releaseSession:(id)arg0 ;


@end


#endif