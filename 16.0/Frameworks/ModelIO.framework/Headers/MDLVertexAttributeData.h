// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLVERTEXATTRIBUTEDATA_H
#define MDLVERTEXATTRIBUTEDATA_H


#import <Foundation/Foundation.h>

#import "MDLMeshBufferMap.h"

@interface MDLVertexAttributeData : NSObject {
    MDLMeshBufferMap *_map;
    *void _dataStart;
    NSUInteger _stride;
    NSUInteger _format;
}


@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (nonatomic) *void dataStart;
@property (nonatomic) NSUInteger format;
@property (retain, nonatomic) MDLMeshBufferMap *map;
@property (nonatomic) NSUInteger stride;


-(id)init;
-(void)setbufferSize:(NSUInteger)arg0 ;


@end


#endif