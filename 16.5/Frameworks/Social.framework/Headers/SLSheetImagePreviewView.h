// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHEETIMAGEPREVIEWVIEW_H
#define SLSHEETIMAGEPREVIEWVIEW_H

@class UIView, UIImage, UIImageView, NSArray;



@interface SLSheetImagePreviewView : UIView {
    UIImage *_image;
}


@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSArray *principalAttachments; // ivar: _principalAttachments


+(id)fallbackPreviewImage;
-(BOOL)generatePreviewImageFromAttachments;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)ensurePlaceholderPreviewImage;
-(void)setPreviewImage:(id)arg0 forAttachment:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif