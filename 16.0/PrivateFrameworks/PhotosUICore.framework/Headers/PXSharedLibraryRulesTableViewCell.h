// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYRULESTABLEVIEWCELL_H
#define PXSHAREDLIBRARYRULESTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel, NSString, UIImage;



@interface PXSharedLibraryRulesTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
}


@property (copy, nonatomic) NSString *detail; // ivar: _detail
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateDetailLabel;
-(void)_updateImageView;
-(void)_updateTitleLabel;


@end


#endif