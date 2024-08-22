// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMPORTDEVICEASSET_H
#define PHIMPORTDEVICEASSET_H

@class ICCameraFile, NSArray;


#import "PHImportAsset.h"

@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile *_cameraFile;
}


@property (readonly, nonatomic) NSArray *cameraFiles;


+(id)assetFileForFile:(id)arg0 source:(id)arg1 ;
+(void)validateCameraFile:(id)arg0 ;
-(BOOL)canDelete;
-(BOOL)canPreserveFolderStructure;
-(BOOL)canReference;
-(BOOL)containsDateKey:(id)arg0 ;
-(BOOL)hasAudioAttachment;
-(BOOL)isBase;
-(BOOL)isLivePhoto;
-(BOOL)isRAW;
-(BOOL)isRender;
-(BOOL)isSloMo;
-(BOOL)isSpatialOverCapture;
-(BOOL)isTagged;
-(BOOL)isViewable;
-(BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)arg0 ;
-(id)assetId;
-(id)burstUUID;
-(id)createMetadataFromProperties:(id)arg0 ;
-(id)creationDate;
-(id)durationTimeInterval;
-(id)initWithSource:(id)arg0 cameraFile:(id)arg1 type:(id)arg2 supportedMediaType:(unsigned char)arg3 ;
-(id)livePhotoPairingIdentifier;
-(id)nameKey;
-(id)originatingAssetID;
-(id)parentFolderPath;
-(id)representedObject;
-(id)spatialOverCaptureIdentifier;
-(int)burstPickType;
-(struct CGSize )unorientedPixelSize;
-(void)copyToURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadMetadataAsync:(id)arg0 ;
-(void)loadMetadataSync;
-(void)thumbnailUsingRequest:(id)arg0 atEnd:(id)arg1 ;


@end


#endif