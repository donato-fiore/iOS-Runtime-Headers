// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCONTACTAUTOFILLTABLEVIEWCELL_H
#define SFCONTACTAUTOFILLTABLEVIEWCELL_H

@class UITableViewCell, UIButton, UILabel;


#import "SFContactAutoFillValue.h"

@interface SFContactAutoFillTableViewCell : UITableViewCell {
    SFContactAutoFillValue *_value;
    UIButton *_checkmarkButton;
    UILabel *_categoryLabel;
    UILabel *_optionLabel;
}


@property (nonatomic) BOOL checked; // ivar: _checked
@property (nonatomic) BOOL usesDetailAppearance; // ivar: _usesDetailAppearance


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)checkmarkButtonTapped:(id)arg0 ;
-(void)setValue:(id)arg0 property:(id)arg1 ;


@end


#endif