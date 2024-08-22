// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMOMENTSHAREPREVIEW_H
#define PHMOMENTSHAREPREVIEW_H

@class CPLMomentSharePreviewData, NSArray, NSString, NSData;

#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface PHMomentSharePreview : NSObject {
    CPLMomentSharePreviewData *_previewData;
}


@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (copy, nonatomic) NSArray *curatedAssetIdentifiers; // ivar: _curatedAssetIdentifiers
@property (copy, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSString *keyAssetIdentifier;
@property (copy, nonatomic) NSArray *previewImageData; // ivar: _previewImageData
@property (copy, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData


-(id)description;
-(id)initWithThumbnailImageData:(id)arg0 previewData:(id)arg1 ;


@end


#endif