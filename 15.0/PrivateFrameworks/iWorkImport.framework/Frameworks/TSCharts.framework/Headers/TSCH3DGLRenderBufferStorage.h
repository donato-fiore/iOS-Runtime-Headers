// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DGLRENDERBUFFERSTORAGE_H
#define TSCH3DGLRENDERBUFFERSTORAGE_H



#import "TSCH3DRenderBufferStorage.h"

@interface TSCH3DGLRenderBufferStorage : TSCH3DRenderBufferStorage



+(id)storage;
-(BOOL)isEqual:(id)arg0 ;
-(void)allocateStorageWithFramebufferAttributes:(struct FramebufferAttributes *)arg0 size:(*void)arg1 internalFormat:(unsigned int)arg2 ;


@end


#endif