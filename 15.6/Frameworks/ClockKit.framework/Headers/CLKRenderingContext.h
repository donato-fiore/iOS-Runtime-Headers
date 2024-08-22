// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKRENDERINGCONTEXT_H
#define CLKRENDERINGCONTEXT_H


#import <Foundation/Foundation.h>

#import "CLKDevice.h"

@interface CLKRenderingContext : NSObject {
    CLKDevice *_device;
}


@property (readonly, nonatomic) CLKDevice *device;


+(id)sharedRenderingContext;
-(id)_init;


@end


#endif