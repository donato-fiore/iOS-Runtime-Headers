// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFADDTOHOMEICONPREVIEWCELL_H
#define WFADDTOHOMEICONPREVIEWCELL_H

@class WFHomeScreenIcon, UIImageView, UILabel;


#import "WFIconCell.h"

@interface WFAddToHomeIconPreviewCell : WFIconCell

@property (retain, nonatomic) WFHomeScreenIcon *icon; // ivar: _icon
@property (weak, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (weak, nonatomic) UILabel *iconLabel; // ivar: _iconLabel


+(CGFloat)defaultRowHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureIcon:(id)arg0 ;
-(void)configureName:(id)arg0 ;
-(void)configureWithName:(id)arg0 icon:(id)arg1 ;
-(void)redrawIcon;


@end


#endif