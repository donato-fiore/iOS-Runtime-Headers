// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOMPACTCARDSECTIONVIEW_H
#define SEARCHUICOMPACTCARDSECTIONVIEW_H

@class NUIContainerGridView;


#import "SearchUICardSectionView.h"
#import "SearchUIImageView.h"
#import "SearchUILabel.h"

@interface SearchUICompactCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) SearchUIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) SearchUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) SearchUILabel *titleLabel; // ivar: _titleLabel


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)richTextForSearchUIText:(id)arg0 withMaxLines:(NSUInteger)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif