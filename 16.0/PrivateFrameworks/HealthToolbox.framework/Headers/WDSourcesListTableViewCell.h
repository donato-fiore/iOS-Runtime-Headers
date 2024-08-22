// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDSOURCESLISTTABLEVIEWCELL_H
#define WDSOURCESLISTTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, HKSourceDataModel, UILabel;



@interface WDSourcesListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImage; // ivar: _iconImage
@property (retain, nonatomic) HKSourceDataModel *sourceModel; // ivar: _sourceModel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 fetchError:(id)arg2 ;
-(void)prepareForReuse;
-(void)setUpSubviews;
-(void)setupConstraints;


@end


#endif