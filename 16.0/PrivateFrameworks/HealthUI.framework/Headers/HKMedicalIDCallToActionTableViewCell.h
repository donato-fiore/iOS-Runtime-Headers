// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDCALLTOACTIONTABLEVIEWCELL_H
#define HKMEDICALIDCALLTOACTIONTABLEVIEWCELL_H

@class UITableViewCell, UIButton, UILabel;



@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) UILabel *callToActionLabel; // ivar: _callToActionLabel


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;


@end


#endif