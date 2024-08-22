// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUSAGESIZEHEADER_H
#define PSUSAGESIZEHEADER_H

@class UITableViewHeaderFooterView, UIStackView, UILabel;
@protocol PSHeaderFooterView;



@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView>



@property (retain, nonatomic) UIStackView *_internalStackView; // ivar: __internalStackView
@property (retain, nonatomic) UILabel *sizeLabel; // ivar: _sizeLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)_setupSubviewsAndConstraints;
-(void)setSize:(id)arg0 ;


@end


#endif