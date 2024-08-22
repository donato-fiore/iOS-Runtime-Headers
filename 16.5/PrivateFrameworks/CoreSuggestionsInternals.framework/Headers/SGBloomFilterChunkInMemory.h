// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGBLOOMFILTERCHUNKINMEMORY_H
#define SGBLOOMFILTERCHUNKINMEMORY_H

@class NSString;
@protocol SGBloomFilterChunk;

#import <Foundation/Foundation.h>


@interface SGBloomFilterChunkInMemory : NSObject <SGBloomFilterChunk>

 {
    unsigned int _count;
    unsigned char _buf;
}


@property (readonly, nonatomic) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(BOOL)exists:(unk)arg0  ;
-(id)init;
// -(void)add:(unk)arg0  ;


@end


#endif