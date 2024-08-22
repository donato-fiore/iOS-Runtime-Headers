// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGEPARTHIGHLIGHTBALLOONVIEW_H
#define CKMESSAGEPARTHIGHLIGHTBALLOONVIEW_H

@class UIColor, UIView, UIImage, UIImageView;


#import "CKBalloonView.h"

@interface CKMessagePartHighlightBalloonView : CKBalloonView

@property (retain, nonatomic) UIColor *balloonColor;
@property (readonly, nonatomic) UIView *colorView; // ivar: _colorView
@property (retain, nonatomic) UIImage *glyphImage;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForMessagePartHighlightChatItem:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif