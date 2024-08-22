// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOLORBARCARDSECTIONVIEW_H
#define SEARCHUICOLORBARCARDSECTIONVIEW_H

@class UIView, NUIContainerBoxView, NUIContainerStackView;


#import "SearchUICardSectionView.h"
#import "SearchUILabel.h"

@interface SearchUIColorBarCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) UIView *colorBarView; // ivar: _colorBarView
@property (retain, nonatomic) NUIContainerBoxView *multilineTopTextLabelContainer; // ivar: _multilineTopTextLabelContainer
@property (retain, nonatomic) SearchUILabel *spacerTextLabel; // ivar: _spacerTextLabel
@property (retain, nonatomic) NUIContainerStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) SearchUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) SearchUILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) SearchUILabel *topTextlabel; // ivar: _topTextlabel


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(struct UIEdgeInsets )layoutMargins;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif