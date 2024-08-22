// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLSHEETBEVELLEDIMAGEVIEW_H
#define SLSHEETBEVELLEDIMAGEVIEW_H

@class UIView, UIImageView;


#import "SLSheetImagePreviewView.h"

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}


@property (nonatomic) BOOL needsURLPlaceholderImage; // ivar: _needsURLPlaceholderImage


-(BOOL)generatePreviewImageFromAttachments;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)ensurePlaceholderPreviewImage;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;


@end


#endif