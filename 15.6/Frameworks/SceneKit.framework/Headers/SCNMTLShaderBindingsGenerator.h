// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLSHADERBINDINGSGENERATOR_H
#define SCNMTLSHADERBINDINGSGENERATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SCNMTLShaderBindingsGenerator : NSObject {
    os_unfair_lock_s _generateLock;
    ? _current;
    NSMutableDictionary *_nodeBindings;
    NSMutableDictionary *_frameBindings;
    NSMutableDictionary *_shadableBindings;
    NSMutableDictionary *_passBindings;
    NSMutableDictionary *_lightBindings;
    ? _sceneBuffer;
}




+(void)allocateRegistry;
+(void)deallocateRegistry;
+(void)registerArgument:(id)arg0 frequency:(int)arg1 block:(id)arg2 ;
+(void)registerArgument:(id)arg0 frequency:(int)arg1 needsRenderResource:(BOOL)arg2 block:(id)arg3 ;
+(void)registerSemantic:(id)arg0 withBlock:(id)arg1 ;
// +(void)registerShadableArgumentBindingBlockForBuffers:(id)arg0 textures:(unk)arg1 samplers:(id)arg2  ;
+(void)registerUserBlockTrampoline:(id)arg0 ;
-(?)generateBindingsForPipeline:(?)arg0 withReflection:(?)arg1 program:(?)arg2 material:(?)arg3 geometrypass;
-(BOOL)addPassResourceBindingsForArgument:(id)arg0 ;
-(NSInteger)_searchArguments:(id)arg0 forArgumentNamed:(id)arg1 type:(NSUInteger)arg2 ;
-(id)_dictionaryForFrequency:(int)arg0 ;
-(id)init;
-(void)_checkForAssociatedSamplerOnBinding:(id)arg0 argument:(id)arg1 ;
-(void)_parseArguments:(id)arg0 function:(id)arg1 renderPipeline:(id)arg2 ;
-(void)addResourceBindingsForArgument:(id)arg0 frequency:(int)arg1 needsRenderResource:(BOOL)arg2 block:(id)arg3 ;
-(void)dealloc;


@end


#endif