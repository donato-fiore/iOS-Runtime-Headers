// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISKVOPROXYRECORD_H
#define ISKVOPROXYRECORD_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ISKVOProxy.h"

@interface ISKVOProxyRecord : NSObject

@property (readonly, nonatomic) ISKVOProxy *proxy; // ivar: _proxy
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithProxy:(id)arg0 queue:(id)arg1 ;


@end


#endif