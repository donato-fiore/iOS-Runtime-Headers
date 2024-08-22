// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCOLLAPSIBLETHUMBNAILVIEW_H
#define ICCOLLAPSIBLETHUMBNAILVIEW_H

@class UIImage;


#import "ICCollapsibleBaseView.h"
#import "ICImageAndMovieThumbnailView.h"

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (nonatomic) BOOL showAsMovie; // ivar: _showAsMovie
@property (retain, nonatomic) ICImageAndMovieThumbnailView *thumbnailView; // ivar: _thumbnailView


-(BOOL)accessibilityIgnoresInvertColors;
-(void)performSetup;


@end


#endif