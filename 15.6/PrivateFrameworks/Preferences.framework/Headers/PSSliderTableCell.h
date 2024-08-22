// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSLIDERTABLECELL_H
#define PSSLIDERTABLECELL_H

@class UIView;


#import "PSControlTableCell.h"

@interface PSSliderTableCell : PSControlTableCell {
    UIView *_disabledView;
}




-(BOOL)canReload;
-(id)controlValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)newControl;
-(id)titleLabel;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setCellEnabled:(BOOL)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif