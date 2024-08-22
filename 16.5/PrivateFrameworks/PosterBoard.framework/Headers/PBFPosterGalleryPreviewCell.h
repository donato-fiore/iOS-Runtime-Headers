// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERGALLERYPREVIEWCELL_H
#define PBFPOSTERGALLERYPREVIEWCELL_H

@class UICollectionViewCell, UILabel, NSAttributedString, NSString;
@protocol PBFPosterGalleryCollectionViewCell, PBFPosterPreview;


#import "PBFPosterGalleryPreviewView.h"

@interface PBFPosterGalleryPreviewCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell>

 {
    UILabel *_titleLabel;
    CGSize _titleLabelSize;
}


@property (retain, nonatomic) NSAttributedString *attributedPosterTitle; // ivar: _attributedPosterTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSObject<PBFPosterPreview> *posterPreview; // ivar: _posterPreview
@property (readonly, nonatomic) PBFPosterGalleryPreviewView *posterPreviewView; // ivar: _posterPreviewView
@property (retain, nonatomic) NSString *posterTitle; // ivar: _posterTitle
@property (readonly) Class superclass;


+(CGFloat)maximumTitleHeightForFont:(id)arg0 ;
+(struct CGSize )contentSizeForCellWithTitle:(BOOL)arg0 ;
+(struct CGSize )contentSizeForCellWithTitleSize:(struct CGSize )arg0 ;
+(struct CGSize )contentSizeForSmartAlbumCellWithTitle:(BOOL)arg0 ;
+(struct CGSize )contentSizeForSmartAlbumCellWithTitleSize:(struct CGSize )arg0 ;
+(struct CGSize )heroContentSizeForCellWithTitle:(BOOL)arg0 ;
+(struct CGSize )heroContentSizeForCellWithTitleSize:(struct CGSize )arg0 ;
-(id)titleLabel;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif