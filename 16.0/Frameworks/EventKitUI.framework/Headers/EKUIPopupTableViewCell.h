// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIPOPUPTABLEVIEWCELL_H
#define EKUIPOPUPTABLEVIEWCELL_H

@class UILabel, UIButton, NSArray, UIMenu;


#import "EKUITableViewCell.h"

@interface EKUIPopupTableViewCell : EKUITableViewCell {
    UILabel *_textLabel;
    UIButton *_popupButton;
    NSArray *_constraints;
}


@property (copy, nonatomic) UIMenu *popupMenu;
@property (copy, nonatomic) id *popupMenuProvider;
@property (nonatomic) BOOL showSelectedImage; // ivar: _showSelectedImage
@property (nonatomic) BOOL titleStrikethrough; // ivar: _titleStrikethrough


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(void)_updateConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif