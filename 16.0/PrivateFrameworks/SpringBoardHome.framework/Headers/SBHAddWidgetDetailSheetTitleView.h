// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHADDWIDGETDETAILSHEETTITLEVIEW_H
#define SBHADDWIDGETDETAILSHEETTITLEVIEW_H

@class UIView, UIImageView, UILabel;
@protocol SBHAddWidgetSheetAppCollectionViewCellConfigurable;


#import "SBHAddWidgetDetailSheetViewController.h"

@interface SBHAddWidgetDetailSheetTitleView : UIView <SBHAddWidgetSheetAppCollectionViewCellConfigurable>

 {
    SBHAddWidgetDetailSheetViewController *_delegate;
}


@property (readonly, nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithIconImageInfo:(struct SBIconImageInfo )arg0 contentInsets:(struct NSDirectionalEdgeInsets )arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setAddWidgetSheetAppCollectionViewCellIconImage:(id)arg0 ;
-(void)setAddWidgetSheetAppCollectionViewCellTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif