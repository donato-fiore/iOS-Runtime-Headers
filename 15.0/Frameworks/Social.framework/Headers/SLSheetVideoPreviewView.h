// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLSHEETVIDEOPREVIEWVIEW_H
#define SLSHEETVIDEOPREVIEWVIEW_H

@class UIView, UIImageView, UILabel;


#import "SLSheetImagePreviewView.h"

@interface SLSheetVideoPreviewView : SLSheetImagePreviewView {
    UIView *_infoBar;
    UIImageView *_videoGlyphView;
    UILabel *_durationLabel;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_applyConstraints;
-(void)setVideoDuration:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif