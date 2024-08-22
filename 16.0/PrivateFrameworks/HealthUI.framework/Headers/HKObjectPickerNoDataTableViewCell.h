// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOBJECTPICKERNODATATABLEVIEWCELL_H
#define HKOBJECTPICKERNODATATABLEVIEWCELL_H

@class UITableViewCell, NSString, UILabel, UIButton, UIStackView;



@interface HKObjectPickerNoDataTableViewCell : UITableViewCell

@property (retain, nonatomic) NSString *explanationText;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIButton *learnMoreButton; // ivar: _learnMoreButton
@property (nonatomic) BOOL showLearnMoreButton; // ivar: _showLearnMoreButton
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupSubviews;
-(void)prepareForReuse;


@end


#endif