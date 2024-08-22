// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGBLOOMFILTER_H
#define SGBLOOMFILTER_H

@protocol SGBloomFilterChunk, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SGBloomFilter : NSObject {
    id<SGBloomFilterChunk> *_head;
    id<SGBloomFilterChunk> *_tail;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)exists:(id)arg0 ;
-(id)counts;
-(id)initWithDirectory:(id)arg0 name:(id)arg1 ;
-(id)initWithHead:(id)arg0 tail:(id)arg1 ;
-(id)initWithInMemoryStorage;
-(id)initWithInMemoryStorageSparse;
-(void)_rotate;
-(void)_rotateIfNecessary;
-(void)add:(id)arg0 ;
-(void)addAsync:(id)arg0 ;
-(void)forceRotate;


@end


#endif