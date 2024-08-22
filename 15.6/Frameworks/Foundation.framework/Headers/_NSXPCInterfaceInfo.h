// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSXPCINTERFACEINFO_H
#define _NSXPCINTERFACEINFO_H


#import <Foundation/Foundation.h>


@interface _NSXPCInterfaceInfo : NSObject {
    NSUInteger _remoteVersion;
    os_unfair_lock_s _knownSelectorsLock;
    *__CFDictionary _knownSelectors;
    *__CFDictionary _methodInfo;
    Class _xpcDOSubclass;
    BOOL _specialCaseObject;
}




-(id)init;
-(void)dealloc;


@end


#endif