// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHADDWIDGETSHEETGALLERYCOLLECTIONVIEWCELL_H
#define SBHADDWIDGETSHEETGALLERYCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, UIView;


#import "SBHWidgetWrapperViewController.h"

@interface SBHAddWidgetSheetGalleryCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController; // ivar: _widgetWrapperViewController


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif