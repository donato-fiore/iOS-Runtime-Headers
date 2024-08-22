// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMEMORYPOOLFLUSHASSERTION_H
#define BWMEMORYPOOLFLUSHASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BWMemoryPool.h"

@interface BWMemoryPoolFlushAssertion : NSObject {
    BWMemoryPool *_pool;
    NSString *_identifier;
}




-(void)dealloc;


@end


#endif