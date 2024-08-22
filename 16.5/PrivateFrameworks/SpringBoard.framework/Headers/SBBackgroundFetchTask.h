// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBACKGROUNDFETCHTASK_H
#define SBBACKGROUNDFETCHTASK_H

@class FBSApplicationInfo, RBSAssertion;

#import <Foundation/Foundation.h>


@interface SBBackgroundFetchTask : NSObject {
    os_unfair_lock_s _lock;
    FBSApplicationInfo *_appInfo;
    int _sequenceNumber;
    RBSAssertion *_lock_assertion;
    id *_lock_completionHandler;
    BOOL _lock_finished;
}




+(int)_nextSequenceNumber;
-(id)description;
-(void)dealloc;
-(void)execute;


@end


#endif