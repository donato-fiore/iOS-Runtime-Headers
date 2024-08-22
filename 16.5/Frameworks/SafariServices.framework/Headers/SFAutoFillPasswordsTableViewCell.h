// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTOFILLPASSWORDSTABLEVIEWCELL_H
#define SFAUTOFILLPASSWORDSTABLEVIEWCELL_H

@class UITableViewCell, UILabel;



@interface SFAutoFillPasswordsTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureTitleLabelFont:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif