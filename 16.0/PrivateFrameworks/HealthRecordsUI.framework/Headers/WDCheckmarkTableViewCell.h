// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCHECKMARKTABLEVIEWCELL_H
#define WDCHECKMARKTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIButton;
@protocol WDCheckmarkTableViewCellDelegate;



@interface WDCheckmarkTableViewCell : UITableViewCell {
    UILabel *_displayLabel;
    UIButton *_button;
}


@property (weak, nonatomic) NSObject<WDCheckmarkTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isOn) BOOL on;


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupUI;
-(void)clickToggle:(id)arg0 ;
-(void)setDisplayText:(id)arg0 ;


@end


#endif