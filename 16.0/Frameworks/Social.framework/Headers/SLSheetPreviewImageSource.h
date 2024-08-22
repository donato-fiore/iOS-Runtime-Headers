// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSHEETPREVIEWIMAGESOURCE_H
#define SLSHEETPREVIEWIMAGESOURCE_H

@class ALAssetsLibrary, AVAssetImageGenerator;

#import <Foundation/Foundation.h>


@interface SLSheetPreviewImageSource : NSObject {
    ALAssetsLibrary *_assetsLibrary;
    AVAssetImageGenerator *_assetImageGenerator;
}


@property (readonly) ALAssetsLibrary *assetsLibrary;


-(void)_fetchPreviewImageForAssetURL:(id)arg0 resultBlock:(id)arg1 ;
-(void)_generatePreviewImageForAttachment:(id)arg0 queueToBlockWhileDownsampling:(id)arg1 resultBlock:(id)arg2 ;
-(void)_generatePreviewImageForVideoFileURL:(id)arg0 resultBlock:(id)arg1 ;
-(void)cancelVideoPreviewGeneration;
-(void)previewImageForAttachment:(id)arg0 queueToBlockWhileDownsampling:(id)arg1 resultBlock:(id)arg2 ;


@end


#endif