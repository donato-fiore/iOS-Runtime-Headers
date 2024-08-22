// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFEEDTITLECELL_H
#define PUFEEDTITLECELL_H

@class PXSharedAlbumHeaderView, PXFeedSectionInfo;


#import "PUFeedCell.h"

@interface PUFeedTitleCell : PUFeedCell

@property (nonatomic) NSInteger collectionViewType; // ivar: _collectionViewType
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) PXSharedAlbumHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo; // ivar: _sectionInfo
@property (nonatomic) NSUInteger tappableArea; // ivar: _tappableArea


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_updateHeaderTextColorStyle;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif