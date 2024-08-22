// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILDATA_H
#define ICTHUMBNAILDATA_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface ICThumbnailData : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (nonatomic) BOOL isMovie; // ivar: _isMovie
@property (nonatomic) BOOL showAsFileIcon; // ivar: _showAsFileIcon


-(id)initWithImage:(id)arg0 imageScaling:(NSUInteger)arg1 showAsFileIcon:(BOOL)arg2 isMovie:(BOOL)arg3 ;


@end


#endif