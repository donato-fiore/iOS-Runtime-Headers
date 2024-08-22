// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCLIMAGEVIEW_H
#define MCLIMAGEVIEW_H

@class UIImageView, UIImage;



@interface MCLImageView : UIImageView {
    UIImage *_image;
}




+(id)bitmapImage:(id)arg0 ;
-(void)backgroundDecompressImage;
-(void)didMoveToWindow;
-(void)setImage:(id)arg0 ;
-(void)setImageDelayed:(id)arg0 ;


@end


#endif