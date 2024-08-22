// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKMEDICALIDMULTILINESTRINGCELL_H
#define _HKMEDICALIDMULTILINESTRINGCELL_H

@class UITableViewCell, UILabel;



@interface _HKMedicalIDMultilineStringCell : UITableViewCell

@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)defaultReuseIdentifier;
-(id)description;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateTextColor;
-(void)dealloc;
-(void)setUpConstraints;
-(void)setupSubviews;
-(void)tintColorDidChange;


@end


#endif