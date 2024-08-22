// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDACCOUNTDETAILSSHARINGSTATUSCELL_H
#define WDACCOUNTDETAILSSHARINGSTATUSCELL_H

@class UITableViewCell, NSArray, UIActivityIndicatorView, UILabel;



@interface WDAccountDetailsSharingStatusCell : UITableViewCell {
    NSArray *_withSpinnerConstraint;
    NSArray *_noSpinnerConstraint;
}


@property (retain, nonatomic) UIActivityIndicatorView *statusIndicator; // ivar: _statusIndicator
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)_setupUI;
-(void)startSpinner;
-(void)stopSpinner;


@end


#endif