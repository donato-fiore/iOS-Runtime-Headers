// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLSHAREDEVENTLISTENER_H
#define MTLSHAREDEVENTLISTENER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTLSharedEventListener : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDispatchQueue:(id)arg0 ;


@end


#endif