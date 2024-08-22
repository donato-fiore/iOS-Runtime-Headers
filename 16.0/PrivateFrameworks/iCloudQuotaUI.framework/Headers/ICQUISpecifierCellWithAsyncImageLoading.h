// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUISPECIFIERCELLWITHASYNCIMAGELOADING_H
#define ICQUISPECIFIERCELLWITHASYNCIMAGELOADING_H

@class PSTableCell, UILabel, UIImageView;



@interface ICQUISpecifierCellWithAsyncImageLoading : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_cellImageView;
    UILabel *_accessoryLabel;
}




+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupViews;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setIcon:(id)arg0 ;


@end


#endif