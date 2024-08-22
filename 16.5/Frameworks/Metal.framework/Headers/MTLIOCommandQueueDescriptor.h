// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLIOCOMMANDQUEUEDESCRIPTOR_H
#define MTLIOCOMMANDQUEUEDESCRIPTOR_H

@protocol NSCopying, MTLIOScratchBufferAllocator;

#import <Foundation/Foundation.h>


@interface MTLIOCommandQueueDescriptor : NSObject <NSCopying>

 {
    NSUInteger _maxWorkerThreads;
}


@property (nonatomic) NSUInteger maxCommandBufferCount; // ivar: _maxCommandBufferCount
@property (nonatomic) NSUInteger maxCommandsInFlight; // ivar: _maxCommandsInFlight
@property NSUInteger maxWorkerThreads;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain) NSObject<MTLIOScratchBufferAllocator> *scratchBufferAllocator; // ivar: _scratchBufferAllocator
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif