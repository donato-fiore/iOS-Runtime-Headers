// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKEFFECTPROPERTY_H
#define GLKEFFECTPROPERTY_H


#import <Foundation/Foundation.h>

#import "GLKEffect.h"

@interface GLKEffectProperty : NSObject {
    *GLKEffectPropertyPrv _prv;
}


@property (nonatomic) NSUInteger dirtyUniforms; // ivar: _dirtyUniforms
@property (nonatomic) GLKEffect *effect; // ivar: _effect
@property (nonatomic) char * fshSource; // ivar: _fshSource
@property (nonatomic) int location; // ivar: _location
@property (nonatomic) unsigned char masksInitialized; // ivar: _masksInitialized
@property (nonatomic) char * nameString; // ivar: _nameString
@property (nonatomic) char * vshSource; // ivar: _vshSource


+(void)logSetMasksWithLabel:(id)arg0 obj:(id)arg1 typeStr:(id)arg2 ;
+(void)setStaticMasksWithVshRoot:(id)arg0 fshRoot:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg0 ;
-(BOOL)includeVshShaderTextForRootNode:(id)arg0 ;
-(id)init;
-(struct GLKBigInt_s *)fshMask;
-(struct GLKBigInt_s *)vshMask;
-(void)bind;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)initializeMasks;
-(void)setFSHSource:(char *)arg0 ;
-(void)setMasks;
-(void)setShaderBindings;
-(void)setVSHSource:(char *)arg0 ;


@end


#endif