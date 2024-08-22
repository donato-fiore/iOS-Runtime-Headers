// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSXPCCONNECTIONIMPORTINFO_H
#define _NSXPCCONNECTIONIMPORTINFO_H


#import <Foundation/Foundation.h>


@interface _NSXPCConnectionImportInfo : NSObject {
    NSUInteger _generationCount;
    *__CFDictionary _proxyNumberToCount;
    *void _secTaskRef;
    os_unfair_lock_s _lock;
    BOOL _secTaskClearedOnce;
}




-(id)init;
-(void)dealloc;


@end


#endif