// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLMESHBUFFERVIEW_H
#define MDLMESHBUFFERVIEW_H

@class NSString;
@protocol MDLMeshBuffer, MDLMeshBufferAllocator, MDLMeshBufferZone;


#import "MDLBufferView.h"
#import "MDLMeshBufferViewAllocator.h"

@interface MDLMeshBufferView : MDLBufferView <MDLMeshBuffer>

 {
    NSUInteger _type;
    MDLMeshBufferViewAllocator *_allocator;
}


@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator;
@property (readonly, nonatomic) *void data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferZone> *zone;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBufferViewNoCopy:(id)arg0 type:(NSUInteger)arg1 ;
-(id)map;
-(void)fillData:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif