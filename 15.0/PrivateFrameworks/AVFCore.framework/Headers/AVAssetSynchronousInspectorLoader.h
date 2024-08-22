// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETSYNCHRONOUSINSPECTORLOADER_H
#define AVASSETSYNCHRONOUSINSPECTORLOADER_H



#import "AVAssetInspectorLoader.h"
#import "AVAssetInspector.h"

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}




-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isComposable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExportable;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)assetInspector;
-(id)initWithAssetInspector:(id)arg0 ;
-(id)lyrics;
-(struct ? )duration;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 keysForCollectionKeys:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif