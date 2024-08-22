// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETCREATIONDERIVATIVECONTEXT_H
#define PHASSETCREATIONDERIVATIVECONTEXT_H

@class PLManagedAsset, NSString, NSArray, NSURL, NSData, PLThumbnailManager;

#import <Foundation/Foundation.h>


@interface PHAssetCreationDerivativeContext : NSObject

@property (retain, nonatomic) PLManagedAsset *asset; // ivar: _asset
@property (copy, nonatomic) NSString *assetExtension; // ivar: _assetExtension
@property (nonatomic) short assetKind; // ivar: _assetKind
@property (nonatomic) NSInteger assetOrientation; // ivar: _assetOrientation
@property (nonatomic) CGSize assetOrientedImageSize; // ivar: _assetOrientedImageSize
@property (copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (retain, nonatomic) NSArray *auxiliaryImageRecords; // ivar: _auxiliaryImageRecords
@property (nonatomic) CGSize embeddedThumbnailSize; // ivar: _embeddedThumbnailSize
@property (retain, nonatomic) NSURL *fileURLForThumbnailFile; // ivar: _fileURLForThumbnailFile
@property (copy, nonatomic) NSString *fullsizeRenderImagePath; // ivar: _fullsizeRenderImagePath
@property (copy, nonatomic) NSString *fullsizeRenderVideoPath; // ivar: _fullsizeRenderVideoPath
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) NSInteger maxPixelSize; // ivar: _maxPixelSize
@property (nonatomic) NSInteger nextAvailableThumbnailIndex; // ivar: _nextAvailableThumbnailIndex
@property (retain, nonatomic) NSData *originalHash; // ivar: _originalHash
@property (copy, nonatomic) NSString *originalUTI; // ivar: _originalUTI
@property (copy, nonatomic) NSString *pathForOriginalFile; // ivar: _pathForOriginalFile
@property (copy, nonatomic) NSString *pathForVideoPreviewFile; // ivar: _pathForVideoPreviewFile
@property (copy, nonatomic) NSString *thumbnailIdentifier; // ivar: _thumbnailIdentifier
@property (retain, nonatomic) PLThumbnailManager *thumbnailManager; // ivar: _thumbnailManager
@property (nonatomic) BOOL thumbnailWriteSucceeded; // ivar: _thumbnailWriteSucceeded




@end


#endif