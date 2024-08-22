// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGLDATABUFFERATTRIBUTE_H
#define TSDGLDATABUFFERATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSDGLDataArrayBuffer.h"
#import "TSDGPUDataBuffer.h"

@interface TSDGLDataBufferAttribute : NSObject

@property (nonatomic) NSUInteger bufferOffset; // ivar: _bufferOffset
@property (readonly, nonatomic) unsigned int bufferUsage; // ivar: _bufferUsage
@property (readonly, nonatomic) int componentCount; // ivar: _componentCount
@property (nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer; // ivar: _dataArrayBuffer
@property (nonatomic) TSDGPUDataBuffer *dataBuffer; // ivar: _dataBuffer
@property (readonly, nonatomic) NSInteger dataType; // ivar: _dataType
@property (readonly, nonatomic) BOOL isNormalized; // ivar: _isNormalized
@property (nonatomic) int locationInShader; // ivar: _locationInShader
@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)attributeWithName:(id)arg0 bufferUsage:(unsigned int)arg1 dataType:(NSInteger)arg2 normalized:(BOOL)arg3 componentCount:(NSUInteger)arg4 ;
-(id)description;
-(id)initWithName:(id)arg0 bufferUsage:(unsigned int)arg1 dataType:(NSInteger)arg2 normalized:(BOOL)arg3 componentCount:(NSUInteger)arg4 ;
-(void)dealloc;


@end


#endif