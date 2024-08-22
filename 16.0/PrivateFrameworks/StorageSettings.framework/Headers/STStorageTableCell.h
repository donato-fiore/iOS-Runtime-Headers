// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTORAGETABLECELL_H
#define STSTORAGETABLECELL_H

@class PSTableCell, NSMutableArray, NSLayoutConstraint, UIImageView, UIView, UILabel, UIImage, NSString, UIActivityIndicatorView;



@interface STStorageTableCell : PSTableCell {
    NSMutableArray *_normalFontConstraints;
    NSMutableArray *_largeFontConstraints;
    NSMutableArray *_infoConstraints;
    NSLayoutConstraint *_iconSizeConstraint;
    NSLayoutConstraint *_sizeRightConstraint;
    NSLayoutConstraint *_minHeightConstraint;
    NSLayoutConstraint *_noCloudIconConstraint;
    NSLayoutConstraint *_cloudIconConstraint;
    UIImageView *_iconView;
    UIView *_titleInfoView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    UIImageView *_cloudIconView;
    NSInteger _size;
}


@property BOOL cloudIconHidden;
@property (retain) UIImage *icon;
@property (retain) NSString *info;
@property BOOL infoHidden;
@property NSInteger size;
@property (retain) NSString *sizeString;
@property (retain) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain) NSString *title;


+(CGFloat)defaultCellHeight;
-(id)_cloudIconColor;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)createLargeFontConstraints;
-(void)createNormalFontConstraints;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setupTitleAndInfoConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif