// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATAMETADATASIMPLETABLEVIEWCELL_H
#define HKDATAMETADATASIMPLETABLEVIEWCELL_H

@class UITableViewCell, UILabel;



@interface HKDataMetadataSimpleTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *subtitleTextLabel; // ivar: _subtitleTextLabel
@property (retain, nonatomic) UILabel *titleTextLabel; // ivar: _titleTextLabel


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)layoutSubviews;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif