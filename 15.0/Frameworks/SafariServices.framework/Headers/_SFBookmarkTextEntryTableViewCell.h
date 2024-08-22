// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFBOOKMARKTEXTENTRYTABLEVIEWCELL_H
#define _SFBOOKMARKTEXTENTRYTABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UITextField;



@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell {
    NSLayoutConstraint *_leadingConstraint;
}


@property (readonly, nonatomic) UITextField *editableTextField; // ivar: _textField


-(id)initWithText:(id)arg0 autocapitalizationType:(NSInteger)arg1 autocorrectionType:(NSInteger)arg2 ;
-(void)layoutMarginsDidChange;
-(void)safeAreaInsetsDidChange;
-(void)setSeparatorInset:(struct UIEdgeInsets )arg0 ;
-(void)updateConstraints;


@end


#endif