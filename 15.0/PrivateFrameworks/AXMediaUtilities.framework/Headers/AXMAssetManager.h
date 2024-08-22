// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMASSETMANAGER_H
#define AXMASSETMANAGER_H


#import <Foundation/Foundation.h>


@interface AXMAssetManager : NSObject



+(id)defaultManager;
-(id)_compiledModelsDirectoryForType:(NSUInteger)arg0 ;
-(id)_modelAssetNamesOfType:(NSUInteger)arg0 sources:(NSUInteger)arg1 compiled:(BOOL)arg2 ;
-(id)_modelAssetURLForModelNamed:(id)arg0 ofType:(NSUInteger)arg1 sources:(NSUInteger)arg2 compiled:(BOOL)arg3 ;
-(id)_modelAssetURLsOfType:(NSUInteger)arg0 sources:(NSUInteger)arg1 compiled:(BOOL)arg2 ;
-(id)_modelsDirectoryForType:(NSUInteger)arg0 compiled:(BOOL)arg1 ;
-(id)_photoCaptionAssetsDirectory;
-(id)_uncompiledModelsDirectoryForType:(NSUInteger)arg0 ;
-(id)compiledModelAssetNamesOfType:(NSUInteger)arg0 sources:(NSUInteger)arg1 ;
-(id)compiledModelAssetURLForModelNamed:(id)arg0 ofType:(NSUInteger)arg1 sources:(NSUInteger)arg2 ;
-(id)compiledModelAssetURLsOfType:(NSUInteger)arg0 sources:(NSUInteger)arg1 ;
-(id)modelWithName:(id)arg0 ofType:(NSUInteger)arg1 sources:(NSUInteger)arg2 compileIfNeeded:(BOOL)arg3 persistCompiledModel:(BOOL)arg4 error:(*id)arg5 ;
-(id)uncompiledModelAssetNamesOfType:(NSUInteger)arg0 sources:(NSUInteger)arg1 ;
-(id)uncompiledModelAssetURLForModelNamed:(id)arg0 ofType:(NSUInteger)arg1 sources:(NSUInteger)arg2 ;
-(id)uncompiledModelAssetURLsOfType:(NSUInteger)arg0 sources:(NSUInteger)arg1 ;


@end


#endif