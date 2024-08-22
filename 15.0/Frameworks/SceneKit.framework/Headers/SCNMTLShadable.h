// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMTLSHADABLE_H
#define SCNMTLSHADABLE_H


#import <Foundation/Foundation.h>


@interface SCNMTLShadable : NSObject {
    id _vertexBuffers;
    id _fragmentBuffers;
    id _vertexTextures;
    id _fragmentTextures;
    id _vertexSamplers;
    id _fragmentSamplers;
}


@property (nonatomic) NSInteger geometryModificationCount; // ivar: geometryModificationCount
@property (nonatomic) NSInteger materialModificationCount; // ivar: materialModificationCount


-(id)bufferAtIndices:(struct ? )arg0 ;
-(id)samplerAtIndices:(struct ? )arg0 ;
-(id)textureAtIndices:(struct ? )arg0 ;
-(void)dealloc;
-(void)setResource:(id)arg0 ofType:(NSUInteger)arg1 atIndices:(struct ? )arg2 ;


@end


#endif