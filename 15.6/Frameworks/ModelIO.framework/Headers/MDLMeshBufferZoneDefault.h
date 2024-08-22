// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLMESHBUFFERZONEDEFAULT_H
#define MDLMESHBUFFERZONEDEFAULT_H

@class NSString;
@protocol MDLMeshBufferZone, MDLMeshBufferAllocator;

#import <Foundation/Foundation.h>


@interface MDLMeshBufferZoneDefault : NSObject <MDLMeshBufferZone>

 {
    NSUInteger _usedCapacity;
}


@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator; // ivar: _allocator
@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)reserveMemory:(NSUInteger)arg0 allocator:(id)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 allocator:(id)arg1 ;
-(void)cancelMemory:(NSUInteger)arg0 ;


@end


#endif