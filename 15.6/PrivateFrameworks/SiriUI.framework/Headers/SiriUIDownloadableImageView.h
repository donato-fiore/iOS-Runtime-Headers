// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIDOWNLOADABLEIMAGEVIEW_H
#define SIRIUIDOWNLOADABLEIMAGEVIEW_H

@class UIView, UIImageView, NSURL, NSString, NSBundle;



@interface SiriUIDownloadableImageView : UIView {
    UIImageView *_imageView;
    NSURL *_imageURL;
    BOOL _showingPlaceHolderImage;
    NSString *_placeHolderImageName;
    NSBundle *_placeHolderImageBundle;
    CGFloat _placeHolderVerticalOffset;
}




-(id)initWithImageURL:(id)arg0 placeHolderImageName:(id)arg1 placeHolderImageBundle:(id)arg2 ;
-(void)_setImage:(id)arg0 isPlaceHolder:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setImageURL:(id)arg0 ;
-(void)setPlaceHolderImageName:(id)arg0 ;
-(void)setPlaceHolderVerticalOffset:(CGFloat)arg0 ;
-(void)showPlaceHolderImage;


@end


#endif