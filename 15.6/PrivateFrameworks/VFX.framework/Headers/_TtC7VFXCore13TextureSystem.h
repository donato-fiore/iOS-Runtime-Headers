// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7VFXCORE13TEXTURESYSTEM_H
#define _TTC7VFXCORE13TEXTURESYSTEM_H

@class SwiftObject;



@interface _TtC7VFXCore13TextureSystem : SwiftObject {
    ? compileQueue;
    ? allDirtyTextureFilesWithWatcher;
    ? allTextureFilesWithoutWatcher;
    ? allTextureFiles;
    ? allTextureFilesWithoutDoNotUpload;
    ? allTextureArrayFiles;
    ? readTextureFile;
    ? readTextureArrayFile;
    ? allTextureFileWithCPURuntime;
    ? readTextureDataCPUQuery;
    ? textureArrayAssetAddTextureCPURuntimeQuery;
    ? textureArrayAssetRemoveCPURuntimeQuery;
    ? textureArrayAssetUpdateTextureCPURuntimeQuery;
    ? updateGPURuntime;
    ? addRenderTargetRuntime;
    ? loadNamedAssetQuery;
    ? shaderAssetQueryAdd;
    ? shaderAssetQueryGen;
    ? convertToEquirectangularQuery;
    ? textureArrayAssetAddGpuRepQuery;
    ? uploadCPUToGPUQuery;
    ? textureRequests;
}






@end


#endif