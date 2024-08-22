// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIVERTICALLAYOUTCARDSECTIONVIEW_H
#define SEARCHUIVERTICALLAYOUTCARDSECTIONVIEW_H

@class NUIContainerStackView, UIImageView, SFVerticalLayoutCardSection, NUIContainerBoxView;


#import "SearchUICardSectionView.h"
#import "SearchUILabel.h"
#import "SearchUIImageView.h"

@interface SearchUIVerticalLayoutCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUILabel *footnoteLabel; // ivar: _footnoteLabel
@property (retain, nonatomic) UIImageView *gradientImageView; // ivar: _gradientImageView
@property (retain, nonatomic) SFVerticalLayoutCardSection *section;
@property (retain, nonatomic) NUIContainerBoxView *thumbnailOverlayContainer; // ivar: _thumbnailOverlayContainer
@property (retain, nonatomic) SearchUIImageView *thumbnailOverlayImageView; // ivar: _thumbnailOverlayImageView
@property (retain, nonatomic) SearchUILabel *thumbnailOverlayLabel; // ivar: _thumbnailOverlayLabel
@property (retain, nonatomic) SearchUIImageView *thumbnailView; // ivar: _thumbnailView
@property (retain, nonatomic) SearchUILabel *titleLabel; // ivar: _titleLabel


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)buildThumbnailOverlayContainerIfNecessary;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateThumbnailOverlayContainerWithText:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif