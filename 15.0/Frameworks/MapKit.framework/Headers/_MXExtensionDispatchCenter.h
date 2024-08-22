// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXEXTENSIONDISPATCHCENTER_H
#define _MXEXTENSIONDISPATCHCENTER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MXExtensionProvider.h"

@interface _MXExtensionDispatchCenter : NSObject {
    NSObject<OS_dispatch_queue> *_lock;
    NSHashTable *_handlers;
}


@property (readonly, weak, nonatomic) _MXExtensionProvider *extensionProvider; // ivar: _extensionProvider


-(id)addExtensionsUpdateHandler:(id)arg0 ;
-(id)initWithExtensionProvider:(id)arg0 ;
-(void)dispatchExtensions:(id)arg0 error:(id)arg1 ;
-(void)removeExtensionUpdateHandler:(id)arg0 ;


@end


#endif