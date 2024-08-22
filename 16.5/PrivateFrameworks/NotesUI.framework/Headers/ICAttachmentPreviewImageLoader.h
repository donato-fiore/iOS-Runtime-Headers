// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTPREVIEWIMAGELOADER_H
#define ICATTACHMENTPREVIEWIMAGELOADER_H

@class NSData, UIImage, NSArray;

#import <Foundation/Foundation.h>


@interface ICAttachmentPreviewImageLoader : NSObject

@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) BOOL delayLoadingURLs; // ivar: _delayLoadingURLs
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) id *imageDidLoadBlock; // ivar: _imageDidLoadBlock
@property (nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (retain, nonatomic) UIImage *orientedImage; // ivar: _orientedImage
@property (retain, nonatomic) UIImage *originalImage; // ivar: _originalImage
@property (copy, nonatomic) NSArray *previewImageURLs; // ivar: _previewImageURLs
@property (nonatomic) CGFloat scale; // ivar: _scale


+(id)orientedImage:(id)arg0 withBackground:(int)arg1 ;
+(id)orientedImage:(id)arg0 withTransform:(struct CGAffineTransform )arg1 background:(int)arg2 backgroundTransform:(struct CGAffineTransform )arg3 ;
-(BOOL)canLoadImage;
-(id)initWithOriginalImage:(id)arg0 orientedImage:(id)arg1 data:(id)arg2 scale:(CGFloat)arg3 previewImageURLs:(id)arg4 delayLoadingURLs:(BOOL)arg5 ;
-(id)loadImage;
-(id)loadOrientedImage;
-(void)loadData;


@end


#endif