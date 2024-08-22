// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMAGEREQUEST_H
#define PXIMAGEREQUEST_H

@class NSError, UIImage, PHImageRequestOptions;
@protocol PXDisplayAsset, PXUIImageProvider;

#import <Foundation/Foundation.h>


@interface PXImageRequest : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic, getter=isCanceled) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL gotFullQualityImage; // ivar: _gotFullQualityImage
@property (nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PHImageRequestOptions *options; // ivar: _options
@property (nonatomic) NSInteger requestID; // ivar: _requestID
@property (nonatomic) BOOL resultIsInCloud; // ivar: _resultIsInCloud
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)description;
-(id)initWithMediaProvider:(id)arg0 asset:(id)arg1 targetSize:(struct CGSize )arg2 options:(id)arg3 ;
-(void)cancel;
-(void)performWithResultHandler:(id)arg0 ;


@end


#endif