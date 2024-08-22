// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUINEWSCARDSECTIONVIEW_H
#define SEARCHUINEWSCARDSECTIONVIEW_H

@class NUIContainerStackView;


#import "SearchUICardSectionView.h"
#import "SearchUIImageView.h"
#import "SearchUILabel.h"

@interface SearchUINewsCardSectionView : SearchUICardSectionView

@property (retain) NUIContainerStackView *contentView;
@property (retain) SearchUIImageView *providerImageView; // ivar: _providerImageView
@property (retain) SearchUILabel *providerLabel; // ivar: _providerLabel
@property (retain) SearchUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain) SearchUIImageView *thumbnailImageView; // ivar: _thumbnailImageView
@property (retain) SearchUILabel *titleLabel; // ivar: _titleLabel


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif