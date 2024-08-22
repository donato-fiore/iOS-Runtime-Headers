// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSHEADERPLACEHOLDERVIEW_H
#define PXPHOTOSDETAILSHEADERPLACEHOLDERVIEW_H

@class UIView, UILabel;


#import "PXBasicUIViewTileAnimator.h"
#import "PXUIImageTile.h"
#import "PXBasicTileUserData.h"
#import "PXTitleSubtitleUILabelTile.h"

@interface PXPhotosDetailsHeaderPlaceholderView : UIView {
    PXBasicUIViewTileAnimator *_tileAnimator;
    PXTileGeometry _imageTileGeometry;
    PXUIImageTile *_imageTile;
    PXBasicTileUserData *_imageTileUserData;
    PXTileGeometry _initialTextTileGeometry;
    PXTileGeometry _textTileGeometry;
    PXTitleSubtitleUILabelTile *_textTile;
    PXBasicTileUserData *_textTileUserData;
    UILabel *_labelForLastBaselineLayout;
}




-(id)initWithRegionOfInterest:(id)arg0 ;
-(id)viewForLastBaselineLayout;
-(void)_layoutImageTile;
-(void)_layoutLabelForLastBaselineLayout;
-(void)_layoutTextTile;
-(void)_layoutTile:(id)arg0 withGeometry:(struct PXTileGeometry )arg1 userData:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif