// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPNOWPLAYINGIMAGEBUTTON_H
#define CPNOWPLAYINGIMAGEBUTTON_H

@class UIImage;


#import "CPNowPlayingButton.h"
#import "CPImageSet.h"

@interface CPNowPlayingImageButton : CPNowPlayingButton

@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 handler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif