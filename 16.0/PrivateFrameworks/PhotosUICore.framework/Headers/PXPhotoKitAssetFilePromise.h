// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITASSETFILEPROMISE_H
#define PXPHOTOKITASSETFILEPROMISE_H

@class PHAssetExportRequest, PHAsset, NSString;

#import <Foundation/Foundation.h>


@interface PXPhotoKitAssetFilePromise : NSObject {
    PHAssetExportRequest *_exportRequest;
    NSInteger _variant;
    NSInteger _playbackStyle;
}


@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSString *fileType; // ivar: _fileType


+(id)filePromiseWithAsset:(id)arg0 error:(*id)arg1 ;
-(id)fileNameForType:(id)arg0 ;
-(void)writeToURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif