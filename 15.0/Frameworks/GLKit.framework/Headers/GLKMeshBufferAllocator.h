// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GLKMESHBUFFERALLOCATOR_H
#define GLKMESHBUFFERALLOCATOR_H

@class EAGLSharegroup, NSString;
@protocol MDLMeshBufferAllocator;

#import <Foundation/Foundation.h>


@interface GLKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator>

 {
    EAGLSharegroup *_sharegroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)newBuffer:(NSUInteger)arg0 type:(NSUInteger)arg1 ;
-(id)newBufferFromZone:(id)arg0 data:(id)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferFromZone:(id)arg0 length:(NSUInteger)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferWithData:(id)arg0 type:(NSUInteger)arg1 ;
-(id)newZone:(NSUInteger)arg0 ;
-(id)newZoneForBuffersWithSize:(id)arg0 andType:(id)arg1 ;


@end


#endif