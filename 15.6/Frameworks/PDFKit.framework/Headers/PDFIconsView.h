// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFICONSVIEW_H
#define PDFICONSVIEW_H

@class UIView, NSMutableArray;
@protocol PDFThumbnailCollectionViewInterface;


#import "PDFThumbnailView.h"
#import "PDFPageIconLayer.h"

@interface PDFIconsView : UIView <PDFThumbnailCollectionViewInterface>

 {
    PDFThumbnailView *_thumbnailView;
    NSMutableArray *_icons;
    PDFPageIconLayer *_activeIcon;
}




-(id)currentPage;
-(id)initFromThumbnailView:(id)arg0 ;
-(int)_iconsLayoutIconCount;
-(struct CGSize )_iconsLayoutSize;
-(void)_updateScrubberAtViewLocation:(struct CGPoint )arg0 ;
-(void)_updateScrubberForPageIndex:(int)arg0 ;
-(void)currentPageChanged:(id)arg0 ;
-(void)documentChanged:(id)arg0 ;
-(void)documentMutated:(id)arg0 ;
-(void)layoutSubviews;
-(void)pageChanged:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateIconsImages;


@end


#endif