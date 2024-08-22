// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSXPCCONNECTIONEXPORTEDOBJECTTABLE_H
#define _NSXPCCONNECTIONEXPORTEDOBJECTTABLE_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "_NSXPCConnectionExportInfo.h"

@interface _NSXPCConnectionExportedObjectTable : NSObject {
    _opaque_pthread_mutex_t _lock;
    _NSXPCConnectionExportInfo *_proxy1;
    *__CFDictionary _proxyNumberToObject;
    *__CFDictionary _objectToProxyNumber;
    NSUInteger _next;
    BOOL _valid;
    NSObject<OS_dispatch_group> *_replyGroup;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif