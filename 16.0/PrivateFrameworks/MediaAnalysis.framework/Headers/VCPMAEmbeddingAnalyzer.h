// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMAEMBEDDINGANALYZER_H
#define VCPMAEMBEDDINGANALYZER_H


#import <Foundation/Foundation.h>

#import "VCPObjectPool.h"
#import "VCPSceneProcessingImageManager.h"

@interface VCPMAEmbeddingAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
    VCPSceneProcessingImageManager *_imageManager;
}




-(id)init;
-(int)_loadImageURL:(id)arg0 withSession:(id)arg1 reencodedImageData:(*id)arg2 andRequestHandler:(*id)arg3 ;
-(void)_configureRequest:(id)arg0 withRevision:(NSUInteger)arg1 preferANE:(BOOL)arg2 ;
-(void)analyzeWithImageURL:(id)arg0 requestTypes:(NSUInteger)arg1 reencode:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif