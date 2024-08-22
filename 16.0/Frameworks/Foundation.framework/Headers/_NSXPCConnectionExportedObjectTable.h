// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSXPCCONNECTIONEXPORTEDOBJECTTABLE_H
#define _NSXPCCONNECTIONEXPORTEDOBJECTTABLE_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NSXPCInterface.h"

@interface _NSXPCConnectionExportedObjectTable : NSObject {
    id *_proxy1Object;
    NSXPCInterface *_proxy1Interface;
    *__CFDictionary _proxyNumberToObject;
    *__CFDictionary _proxyNumberToInterface;
    *__CFDictionary _objectToProxyNumber;
    NSObject<OS_dispatch_group> *_replyGroup;
    NSUInteger _next;
    os_unfair_lock_s _lock;
    BOOL _valid;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif