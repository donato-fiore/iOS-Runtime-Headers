// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTKMESHBUFFERALLOCATOR_H
#define MTKMESHBUFFERALLOCATOR_H

@class NSString;
@protocol MDLMeshBufferAllocator, MTLDevice;

#import <Foundation/Foundation.h>


@interface MTKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)newBuffer:(NSUInteger)arg0 type:(NSUInteger)arg1 ;
-(id)newBufferFromZone:(id)arg0 data:(id)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferFromZone:(id)arg0 length:(NSUInteger)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferWithData:(id)arg0 type:(NSUInteger)arg1 ;
-(id)newZone:(NSUInteger)arg0 ;
-(id)newZoneForBuffersWithSize:(id)arg0 andType:(id)arg1 ;


@end


#endif