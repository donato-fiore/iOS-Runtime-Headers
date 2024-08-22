// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMMETALCONTEXT_H
#define CAMMETALCONTEXT_H

@protocol MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface CAMMetalContext : NSObject

@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device


-(id)init;


@end


#endif