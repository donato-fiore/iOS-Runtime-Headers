// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLLOADER_H
#define MTLLOADER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTLLoader : NSObject {
    *void _global;
    NSObject<OS_dispatch_queue> *_claimQueue;
    unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> _claims;
}




-(id)init;
-(void)dealloc;


@end


#endif