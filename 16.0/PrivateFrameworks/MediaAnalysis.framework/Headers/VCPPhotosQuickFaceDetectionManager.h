// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPHOTOSQUICKFACEDETECTIONMANAGER_H
#define VCPPHOTOSQUICKFACEDETECTIONMANAGER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "VCPFaceAnalyzer.h"

@interface VCPPhotosQuickFaceDetectionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
}




-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(int)_persistFaces:(id)arg0 forAsset:(id)arg1 ;
-(int)processAsset:(id)arg0 ;


@end


#endif