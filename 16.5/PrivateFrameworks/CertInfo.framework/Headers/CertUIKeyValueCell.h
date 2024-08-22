// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CERTUIKEYVALUECELL_H
#define CERTUIKEYVALUECELL_H

@class UITableViewCell, NSArray, UILabel;



@interface CertUIKeyValueCell : UITableViewCell

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UILabel *keyLabel; // ivar: _keyLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setup;
-(void)_setupConstraints;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif