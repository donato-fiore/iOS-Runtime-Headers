// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSEDROPPREVIEWVIEW_H
#define MFCOMPOSEDROPPREVIEWVIEW_H

@class UIView, UIImage, UIImageView, UIBezierPath;



@interface MFComposeDropPreviewView : UIView

@property (retain, nonatomic) UIImage *finalImage; // ivar: _finalImage
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIBezierPath *previewClippingPath; // ivar: _previewClippingPath
@property (retain, nonatomic) UIView *previewView; // ivar: _previewView


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif