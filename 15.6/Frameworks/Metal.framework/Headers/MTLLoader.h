// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLLOADER_H
#define MTLLOADER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTLLoader : NSObject {
    *void _global;
    NSObject<OS_dispatch_queue> *_claimQueue;
    unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> _claims;
}




// +(BOOL)deserializeHashesFromAIRNTHeaderAtOffset:(NSUInteger)arg0 headerSize:(NSUInteger)arg1 reader:(id)arg2 handler:(unk)arg3  ;
+(BOOL)isAIRHeaderExtLoadCommand:(*void)arg0 headerOffset:(*NSUInteger)arg1 headerSize:(*NSUInteger)arg2 ;
-(id)init;
-(void)dealloc;


@end


#endif