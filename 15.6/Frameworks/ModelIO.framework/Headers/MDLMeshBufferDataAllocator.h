// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLMESHBUFFERDATAALLOCATOR_H
#define MDLMESHBUFFERDATAALLOCATOR_H

@class NSString;
@protocol MDLMeshBufferAllocator;

#import <Foundation/Foundation.h>


@interface MDLMeshBufferDataAllocator : NSObject <MDLMeshBufferAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)newBuffer:(NSUInteger)arg0 type:(NSUInteger)arg1 ;
-(id)newBufferFromZone:(id)arg0 data:(id)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferFromZone:(id)arg0 length:(NSUInteger)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferWithData:(id)arg0 type:(NSUInteger)arg1 ;
-(id)newZone:(NSUInteger)arg0 ;
-(id)newZoneForBuffersWithSize:(id)arg0 andType:(id)arg1 ;


@end


#endif