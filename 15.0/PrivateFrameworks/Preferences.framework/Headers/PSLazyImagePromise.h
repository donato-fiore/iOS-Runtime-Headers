// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSLAZYIMAGEPROMISE_H
#define PSLAZYIMAGEPROMISE_H

@class NSString, NSBundle, UIImage;

#import <Foundation/Foundation.h>


@interface PSLazyImagePromise : NSObject {
    NSString *_imagePath;
    NSString *_imageName;
    NSBundle *_imageBundle;
    id *_loadBlock;
    UIImage *_image;
}


@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic, getter=isImageLoaded) BOOL imageLoaded; // ivar: _imageLoaded


+(id)imagePromiseWithImageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)imagePromiseWithImagePath:(id)arg0 ;
+(id)imagePromiseWithLoadBlock:(id)arg0 ;
-(void)loadImage;


@end


#endif