// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCINSTALLATIONWARNINGCELL_H
#define MCINSTALLATIONWARNINGCELL_H

@class UITableViewCell, NSArray, UILabel;



@interface MCInstallationWarningCell : UITableViewCell

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UILabel *warningLabel; // ivar: _warningLabel


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setup;
-(void)_setupConstraints;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif