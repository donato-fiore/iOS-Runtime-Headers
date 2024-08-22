// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCTHREADEDWEAKLINKEDOBJECT_H
#define SCRCTHREADEDWEAKLINKEDOBJECT_H

@class NSLock;

#import <Foundation/Foundation.h>


@interface SCRCThreadedWeakLinkedObject : NSObject {
    NSLock *_releaseLock;
    int _referenceCount;
    BOOL _calledDealloc;
}




-(id)init;


@end


#endif