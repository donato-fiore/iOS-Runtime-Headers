// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUIICLOUDPLUSFEATURECELL_H
#define ICQUIICLOUDPLUSFEATURECELL_H

@class PSTableCell, UIImageView, UILabel;



@interface ICQUIiCloudPlusFeatureCell : PSTableCell {
    BOOL _isLastCell;
    UIImageView *_cellImageView;
    UILabel *_titleLabel;
}




+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupViews;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setIcon:(id)arg0 ;


@end


#endif