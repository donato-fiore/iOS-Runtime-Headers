// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIMESHBUFFER_H
#define CUIMESHBUFFER_H

@class NSMutableData, NSString;
@protocol MDLMeshBuffer, MDLMeshBufferAllocator, MDLMeshBufferZone;

#import <Foundation/Foundation.h>


@interface CUIMeshBuffer : NSObject <MDLMeshBuffer>

 {
    NSMutableData *_data;
}


@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator; // ivar: _allocator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferZone> *zone; // ivar: _zone


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBytes:(*void)arg0 andLength:(NSUInteger)arg1 ofType:(NSUInteger)arg2 ;
-(id)map;
-(void)dealloc;
-(void)fillData:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif