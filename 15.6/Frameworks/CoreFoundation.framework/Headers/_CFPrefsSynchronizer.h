// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CFPREFSSYNCHRONIZER_H
#define _CFPREFSSYNCHRONIZER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CFPrefsSynchronizer : NSObject {
    NSObject<OS_dispatch_source> *_synchTimer;
    NSObject<OS_dispatch_queue> *_synchQueue;
    *__CFSet _dirtySources;
    _opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
    BOOL _active;
}




-(id)init;


@end


#endif