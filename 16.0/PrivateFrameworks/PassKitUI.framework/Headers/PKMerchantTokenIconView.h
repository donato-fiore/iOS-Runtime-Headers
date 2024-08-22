// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMERCHANTTOKENICONVIEW_H
#define PKMERCHANTTOKENICONVIEW_H

@class UIImageView, UILabel, UIImage, NSURLSessionDataTask;



@interface PKMerchantTokenIconView : UIImageView {
    UILabel *_monogramLabel;
    UIImage *_image;
    CGFloat _cornerRadius;
    NSURLSessionDataTask *_imageDownloadTask;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cancelImageDownload;
-(void)_downloadImageFromURL:(id)arg0 ;
-(void)_setUpConstraints;
-(void)_setUpMonogramLabel;
-(void)_setUpSelf;
-(void)_setUpViews;
-(void)_updateIconImage;
-(void)_updateMonogramLabelWithText:(id)arg0 ;
-(void)updateWithImage:(id)arg0 cornerRadius:(CGFloat)arg1 ;
-(void)updateWithImageURL:(id)arg0 monogramText:(id)arg1 cornerRadius:(CGFloat)arg2 ;


@end


#endif