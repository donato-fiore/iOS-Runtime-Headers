// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCAMERAPLACEHOLDERLIVEPHOTOREQUEST_H
#define PUCAMERAPLACEHOLDERLIVEPHOTOREQUEST_H

@class PHAsset, NSError, NSString, UIImage, NSValue, NSURL;

#import <Foundation/Foundation.h>


@interface PUCameraPlaceholderLivePhotoRequest : NSObject

@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *filterName; // ivar: _filterName
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL imageRequestFinished; // ivar: _imageRequestFinished
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (retain, nonatomic) NSValue *stillDisplayTime; // ivar: _stillDisplayTime
@property (nonatomic) BOOL videoRequestFinished; // ivar: _videoRequestFinished
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL


-(id)initWithAsset:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif