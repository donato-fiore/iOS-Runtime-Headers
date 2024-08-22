// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISPLITCARDSECTIONVIEW_H
#define SEARCHUISPLITCARDSECTIONVIEW_H



#import "SearchUICardSectionView.h"
#import "SearchUILabel.h"
#import "SearchUITruncatingListLabel.h"

@interface SearchUISplitCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SearchUILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) SearchUILabel *bottomTitleLabel; // ivar: _bottomTitleLabel
@property (retain, nonatomic) SearchUITruncatingListLabel *listLabel; // ivar: _listLabel
@property (retain, nonatomic) SearchUILabel *secondaryTopTitleLabel; // ivar: _secondaryTopTitleLabel
@property (retain, nonatomic) SearchUILabel *topTitleLabel; // ivar: _topTitleLabel


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(struct UIEdgeInsets )layoutMargins;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif