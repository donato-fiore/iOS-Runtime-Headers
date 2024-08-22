// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLLOADER_H
#define MTLLOADER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTLLoader : NSObject {
    *void _global;
    NSObject<OS_dispatch_queue> *_claimQueue;
    unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> _claims;
}




// +(BOOL)ReadHashTable:(NSUInteger)arg0 begin:(unsigned int)arg1 end:(unsigned int)arg2 hashList:(*void)arg3 reader:(id)arg4 errorHandler:(unk)arg5 handler:(id)arg6  ;
// +(BOOL)deserializeHashesFromAIRNTHeaderAtOffset:(NSUInteger)arg0 headerSize:(NSUInteger)arg1 reader:(id)arg2 errorHandler:(unk)arg3 handler:(id)arg4  ;
// +(BOOL)deserializeObjectFromAIRNTHeaderAtOffset:(NSUInteger)arg0 headerSize:(NSUInteger)arg1 reader:(id)arg2 errorHandler:(unk)arg3 handler:(id)arg4  ;
// +(BOOL)deserializePipelinesFromAIRNTHeaderAtOffset:(NSUInteger)arg0 headerSize:(NSUInteger)arg1 reader:(id)arg2 errorHandler:(unk)arg3 handler:(id)arg4  ;
+(BOOL)isAIRHeaderExtLoadCommand:(*void)arg0 headerOffset:(*NSUInteger)arg1 headerSize:(*NSUInteger)arg2 ;
-(id)init;
-(void)dealloc;


@end


#endif