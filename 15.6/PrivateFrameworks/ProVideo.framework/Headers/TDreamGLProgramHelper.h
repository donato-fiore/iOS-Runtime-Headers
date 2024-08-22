// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMGLPROGRAMHELPER_H
#define TDREAMGLPROGRAMHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TDreamGLProgramHelper : NSObject {
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
}


@property (nonatomic) BOOL initialized; // ivar: _initialized


-(BOOL)compileShader:(*unsigned int)arg0 type:(unsigned int)arg1 string:(id)arg2 ;
-(BOOL)link;
-(id)fragmentShaderLog;
-(id)initWithVertexShaderString:(id)arg0 fragmentShaderString:(id)arg1 ;
-(id)logForOpenGLObject:(unsigned int)arg0 infoCallback:(*unk)arg1 logFunc:(*unk)arg2 ;
-(id)programLog;
-(id)vertexShaderLog;
-(unsigned int)attributeIndex:(id)arg0 ;
-(unsigned int)uniformIndex:(id)arg0 ;
-(void)addAttribute:(id)arg0 ;
-(void)dealloc;
-(void)use;


@end


#endif