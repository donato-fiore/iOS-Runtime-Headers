// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMINICARDSECTIONVIEW_H
#define SEARCHUIMINICARDSECTIONVIEW_H



#import "SearchUICardSectionView.h"
#import "SearchUIImageView.h"
#import "SearchUILabel.h"

@interface SearchUIMiniCardSectionView : SearchUICardSectionView

@property (retain) SearchUIImageView *imageView; // ivar: _imageView
@property (retain) SearchUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain) SearchUILabel *titleLabel; // ivar: _titleLabel


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(struct UIEdgeInsets )layoutMargins;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif