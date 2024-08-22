// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISNAPSHOTTINGASSERTIONMANAGER_H
#define UISNAPSHOTTINGASSERTIONMANAGER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface UISnapshottingAssertionManager : NSObject {
    _opaque_pthread_mutex_t lock;
    NSMutableSet *_heldAssertions;
}




+(id)sharedInstance;
-(id)_init;
-(id)acquireNewAssertion;
-(id)init;
-(void)dealloc;
-(void)executeIfNoActiveAssertions:(id)arg0 ;
-(void)relinquishAssertion:(id)arg0 ;
-(void)withLock:(id)arg0 ;


@end


#endif