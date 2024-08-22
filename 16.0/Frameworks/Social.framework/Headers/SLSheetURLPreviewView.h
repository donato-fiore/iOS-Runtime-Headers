// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSHEETURLPREVIEWVIEW_H
#define SLSHEETURLPREVIEWVIEW_H

@class UIImage, UIView, UIImageView;


#import "SLSheetImagePreviewView.h"
#import "SLURLPreviewGenerator.h"

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}




-(BOOL)generatePreviewImageFromAttachments;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_generateAutomaticPreviewForURL:(id)arg0 ;
-(void)ensurePlaceholderPreviewImage;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;


@end


#endif